<?php
/**
 * @file
 * Enables modules and site configuration for an easy booking site installation.
 */

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  foreach ($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'easy_booking';
  }
}

/**
 * Implements hook_install_tasks().
 */
function easy_booking_install_tasks() {
  return array(
    'easy_booking_images_move' => array(
      'display' => FALSE,
    ),
    'easy_booking_final_settings' => array(
      'display' => FALSE,
    ),
    'easy_booking_create_room' => array(
      'display' => FALSE,  
    ),
    'easy_booking_block_settings' => array(
      'display' => FALSE,
    ),
    'easy_booking_simplenews_block_settings' => array(
      'display' => FALSE,
    ),
    'easy_booking_rules_change' => array(
      'display' => FALSE,
    ),
    'easy_booking_node_article' => array(
      'display' => FALSE,
    ),
    'easy_booking_revert_features_batch' => array(
      'display_name' => 'Reverting features',
      'display' => TRUE,
      'type' => 'batch',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'easy_booking_revert_features_batch'
    ),
  );
}

/**
 * Moves all images to the public:// folder.
 */
function easy_booking_images_move($install_state) {
  $dir = drupal_get_path('profile', 'easy_booking') . '/images';
  $images = file_scan_directory($dir, '/.*/');
  foreach($images as $value) {
  $file_path = $value->uri;
    $file = (object)array(
      "uid" => 1,
      "uri" => $file_path,
      "filemime" => file_get_mimetype($file_path),
      "status" => 1
    ); 
    $file = file_copy($file, 'public://', FILE_EXISTS_REPLACE);
  }
}

/**
 * Slight but necessary settings.
 */
function easy_booking_final_settings($install_state) {
  // Set jQuery versions.
  variable_set('jquery_update_jquery_admin_version', '1.8');
  variable_set('jquery_update_jquery_version', '1.8');
  $criteria = array(
    'type' => 'page',
  );
  // Set default frontpage node.
  $nodes = entity_load('node', FALSE, $criteria);
  foreach ($nodes as $entity_id => $archive_entity) {
    if ($archive_entity->title == 'Home') {
      $nid = 'node/' . $archive_entity->nid;
      variable_set('site_frontpage', $nid);
    }
  }
}

/**
 * Generates example rooms.
 */
function easy_booking_create_room($install_state) {
  $def_photo_first = drupal_realpath('public://room_def_first.jpg');
  $def_photo_second = drupal_realpath('public://room_def_second.jpg');
  $fid_first = easy_booking_file_upload($def_photo_first);
  $fid_second = easy_booking_file_upload($def_photo_second);
  $photos = array(
    '0' => array(
      'fid' => $fid_first,
      'uid' => '1',
      'filename' => 'room_def_first.jpg',
      'uri' => 'public://room_def_first_0.jpg',
      'filemime' => 'image/jpeg',
      'filesize' => '383393',
      'status' => '1',
      'timestamp' => REQUEST_TIME,
      'rdf_mapping' => '',
      'alt' => '',
      'title' => '',
      'width' => '1920',
      'height' => '1200'
    ),
    '1' => array(
      'fid' => $fid_second,
      'uid' => '1',
      'filename' => 'room_def_second.jpg',
      'uri' => 'public://room_def_second_0.jpg',
      'filemime' => 'image/jpeg',
      'filesize' => '558 699',
      'status' => '1',
      'timestamp' => REQUEST_TIME,
      'rdf_mapping' => '',
      'alt' => '',
      'title' => '',
      'width' => '2560',
      'height' => '1440'
    ),
  );
  $text = '<p>Relax in our cosy and comfortable double rooms, ';
  $text .= 'equipped with a double bed, air-conditioning, soundproof windows, blackout curtains and a flat screen TV. ';
  $text .= 'You will also enjoy the work area with a phone, wireless internet and a safe. ';
  $text .= 'For your comfort, the bathroom is equipped with a towel dryer and a hair dryer.</p>';
  $body = array(
    'value' => $text,
    'summary' => '',
    'format' => 'filtered_html',
    'safe_value' => $text,
    'safe_summary' => '',
  );
  $text_triple = '<p>Relax in our cosy and comfortable triple rooms, ';
  $text_triple .= 'equipped with a one double bed, one single bed and a comfortable couch. Triple rooms are also featured with air-conditioning, soundproof windows, blackout curtains and a flat screen TV. ';
  $text_triple .= 'You will also enjoy the work area with a phone, wireless internet and a safe. ';
  $text_triple .= 'For your comfort, the bathroom is equipped with a towel dryer and a hair dryer.</p>';
  $body_triple = array(
    'value' => $text_triple,
    'summary' => '',
    'format' => 'filtered_html',
    'safe_value' => $text_triple,
    'safe_summary' => '',
  );
  // Attach terms to rooms.
  $furnishing = array(
    '0' => array(
     'target_id' => '13',
    ),
    '1' => array(
     'target_id' => '18',
    ),
    '2' => array(
     'target_id' => '21',
    ),
    '3' => array(
     'target_id' => '10',
    ),
    '4' => array(
     'target_id' => '20',
    ),
    '5' => array(
     'target_id' => '12',
    ),
  );
  $popular = array(
    'value' => '1'
  );
  $total_beds = array(
    'value' => '2'
  );
  $room_space = array(
    'value' => '30'
  );
  $arrange = array(
    'bed_arrangement' => array(
      'singles' => 1,
      'doubles' => 1
    ),
  );
  $type = 'rooms_unit';
  //Create first room.
  $entity = entity_create($type, array('type' => $type));
  $entity->type = 'room';
  $entity->name = 'Regular double room';
  $entity->created = REQUEST_TIME;
  $entity->changed = REQUEST_TIME;
  $entity->base_price = '100.00';
  $entity->default_state = 1;
  $entity->bookable = 1;
  $entity->min_sleeps = 1;
  $entity->max_sleeps = 2;
  $entity->min_children = 0;
  $entity->max_children = 1;
  $entity->status = 1;
  $entity->uid = 0;
  $entity->data = $arrange;
  $entity->field_room_body[LANGUAGE_NONE][0] = (array)$body;
  $entity->field_furnishing[LANGUAGE_NONE] = (array)$furnishing;
  $entity->field_room_space[LANGUAGE_NONE][0] = (array)$room_space;
  $entity->field_room_is_popular[LANGUAGE_NONE][0] = (array)$popular;
  $entity->field_room_total_beds[LANGUAGE_NONE][0] = (array)$total_beds;
  $entity->field_room_photos[LANGUAGE_NONE] = (array)$photos;
  $ewrapper = entity_metadata_wrapper($type, $entity);
  $ewrapper->save();
  
  //Create second room.
  $entity = entity_create($type, array('type' => $type));
  $entity->type = 'room';
  $entity->name = 'Superior Double Room';
  $entity->created = REQUEST_TIME;
  $entity->changed = REQUEST_TIME;
  $entity->base_price = '180.00';
  $entity->default_state = 1;
  $entity->bookable = 1;
  $entity->min_sleeps = 1;
  $entity->max_sleeps = 2;
  $entity->min_children = 0;
  $entity->max_children = 1;
  $entity->status = 1;
  $entity->uid = 0;
  $entity->data = $arrange;
  $entity->field_room_body[LANGUAGE_NONE][0] = (array)$body;
  $entity->field_furnishing[LANGUAGE_NONE] = (array)$furnishing;
  $entity->field_room_space[LANGUAGE_NONE][0] = (array)$room_space;
  $entity->field_room_is_popular[LANGUAGE_NONE][0] = (array)$popular;
  $entity->field_room_total_beds[LANGUAGE_NONE][0] = (array)$total_beds;
  $entity->field_room_photos[LANGUAGE_NONE] = (array)$photos;
  $ewrapper = entity_metadata_wrapper($type, $entity);
  $ewrapper->save();
  
  //Create third room.
  $entity = entity_create($type, array('type' => $type));
  $entity->type = 'room';
  $entity->name = 'Superior triple Room';
  $entity->created = REQUEST_TIME;
  $entity->changed = REQUEST_TIME;
  $entity->base_price = '240.00';
  $entity->default_state = 1;
  $entity->bookable = 1;
  $entity->min_sleeps = 1;
  $entity->max_sleeps = 3;
  $entity->min_children = 0;
  $entity->max_children = 2;
  $entity->status = 1;
  $entity->uid = 0;
  $entity->data = $arrange;
  $entity->field_room_body[LANGUAGE_NONE][0] = (array)$body_triple;
  $entity->field_furnishing[LANGUAGE_NONE] = (array)$furnishing;
  $entity->field_room_space[LANGUAGE_NONE][0] = (array)$room_space;
  $entity->field_room_is_popular[LANGUAGE_NONE][0] = (array)$popular;
  $entity->field_room_total_beds[LANGUAGE_NONE][0] = (array)$total_beds;
  $entity->field_room_photos[LANGUAGE_NONE] = (array)$photos;
  $ewrapper = entity_metadata_wrapper($type, $entity);
  $ewrapper->save();
}

/**
 * Implements hook_file_upload().
 */
function easy_booking_file_upload($filepath) {
  $file = (object) array(
    'uid' => 1,
    'uri' => $filepath,
    'filemime' => file_get_mimetype($filepath),
    'status' => 1,
  );
  $file = file_copy($file, 'public://', FILE_EXISTS_RENAME);
  $fid = $file->fid;
  return $fid;
}

/**
 * Settings for blocks that may change id's after installation.
 */
function easy_booking_block_settings($install_state) {
  if (!module_exists('feature_blocks_settings_export')) {
    $modules = array('feature_blocks_settings_export');
    module_enable($modules);
  }
  // Webform block configuration.
  $criteria = array(
    'type' => 'webform',
  );
  $nodes = entity_load('node', FALSE, $criteria);
  foreach ($nodes as $entity_id => $archive_entity) {
    $wnid = $archive_entity->nid;
  }
  $webform = 'webform-client-block-' . $wnid;
  $webform_delta = 'client-block-' . $wnid;
  $webform_block = array(
    'cache' => -1,
    'css_class' => 'webform-ask-a-question-block',
    'custom' => 0,
    'delta' => $webform_delta,
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '<front>',
    'title' => '',
    'visibility' => 1,
  );
  _fe_block_settings_update_global_settings($webform_block);
  db_update('block')
   ->fields(array(
     'status' => '1',
     'weight' => '-19',
     'region' => 'content_aside',
   ))
   ->condition('module', 'webform')
   ->condition('delta', $webform_delta)
   ->condition('theme', 'booking_theme')
   ->execute();
  $contacts_delta = fe_block_get_bid('contacts_block', $reset = FALSE);
  $contacts = 'block-' . $contacts_delta;
  // Configure context. Its need to display contact and map block at the front page and at contact page.
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page';
  $context->description = 'Contact Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'colorized_gmap-1' => array(
          'module' => 'colorized_gmap',
          'delta' => '1',
          'region' => 'secondary_content',
          'weight' => '-10',
        ),
        $contacts => array(
          'module' => 'block',
          'delta' => $contacts_delta,
          'region' => 'secondary_content',
          'weight' => '-9',
        ),
        $webform => array(
          'module' => 'webform',
          'delta' => $webform_delta,
          'region' => 'secondary_content',
         'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  context_save($context);
}

/**
 * Individual settings for simplenews block.
 */
function easy_booking_simplenews_block_settings($install_state) {
  $blocks = _fe_block_get_blocks();
  foreach($blocks as $block){
    if ($block['module'] == 'simplenews' && $block['info'] != 'Newsletter: Multi Subscription') {
      $sndelta = $block['delta'];
      $block['title'] = 'Sign up to our newsletter';
     _fe_block_settings_update_global_settings($block);
      variable_set('simplenews_block_f_' . $sndelta, 1);
      variable_set('simplenews_block_i_' . $sndelta, 5);
      variable_set('simplenews_block_r_' . $sndelta, 0);
      variable_set('simplenews_block_m_' . $sndelta, 'to receive the latest offers and news');
      variable_set('simplenews_block_l_' . $sndelta, 0);
    }
  }
  $block_name = 'simplenews-' . $sndelta;
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subscription_block_view_mode';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        $block_name => array(
          'module' => 'simplenews',
          'delta' => $sndelta,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  context_save($context);
}

/**
 * Makes necessary changes with rules.
 */
function easy_booking_rules_change($install_state) {
  $rules_config = rules_config_load('commerce_checkout_new_account');
  $rules_config->active = FALSE;
  $rules_config->save();
}


/**
 * Applies settings for article node type.
 */
function easy_booking_node_article($install_state) {
  $criteria = array(
    'type' => 'article',
  );
  $nodes = entity_load('node', FALSE, $criteria);
  foreach ($nodes as $entity_id => $archive_entity) {
    $article_nid = $archive_entity->nid;
  }
  $nodepath = 'node/' . $article_nid;
  $blocks = _fe_block_get_blocks();
  foreach($blocks as $block) {
    if ($block['title'] == 'Our hotel') {
      $block['pages'] = $nodepath;
      _fe_block_settings_update_global_settings($block);
    }
  }
  // Add 'our hotel' link to the menu.
  foreach ($nodes as $entity_id => $archive_entity) {
    $nid = 'node/' . $archive_entity->nid;
    $item = array(
      'menu_name' => 'main-menu',
      'link_path' => $nid,
      'router_path' => 'node/%',
      'link_title' => t('Our hotel'),
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
        'identifier' => 'main-menu_our-hotel:' . $nid,
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'customized' => 1,
    );
    menu_link_save($item);
  }
}

/**
 * Revert all features in install_tasks with Batch API.
 */
function easy_booking_revert_features_batch() {
  $features_names = array(
    'feature_about_area_nodes',
    'feature_ask_a_question_content',
    'feature_book_a_room',
    'feature_booking_theme_settings',
    'feature_ckeditor_profiles',
    'feature_content_type_about_area',
    'feature_content_type_article',
    'feature_content_type_news',
    'feature_content_type_our_services',
    'feature_content_type_page',
    'feature_custom_copyright_block_export',
    'feature_frontpage_slideshow_ct_view',
    'feature_frontpage_slideshow_nodes',
    'feature_image_styles',
    'feature_menu_links',
    'feature_news_nodes',
    'feature_page_node',
    'feature_our_hotel_node.strongarm',
    'feature_our_hotel_node',
    'feature_our_services_node',
    'feature_our_services_view',
    'feature_permissions_export',
    'feature_popular_rooms_view',
    'feature_profile_type_billing_information',
    'feature_room',
    'feature_room_top_slideshow',
    'feature_rooms_settings',
    'feature_rules_notify_admin',
    'feature_sharethis_settings',
    'feature_views_about_area',
    'feature_views_news',
    'feature_custom_blocks_export',
    'feature_blocks_settings_export',
    'feature_blocks_settings_export.fe_block_settings',
    'feature_easy_booking_colorized_gmap',
    'feature_easy_booking_colorized_gmap.fe_block_settings',
  );
  $operations = array();
  foreach($features_names as $feature_name){
    $operations[] = array('easy_booking_revert_feature_item', array($feature_name)) ;
  }
  $batch = array(
    'title' => t('Reverting features'),
    'operations' => $operations,
  );
  return $batch;
}

/**
 * Revert single feature. Callback for easy_booking_revert_features_batch().
 *
 * @param $feature_name
 */
function easy_booking_revert_feature_item($feature_name) {
  $feature = features_get_features($feature_name);
  if ($feature) {
    $components = array_keys($feature->info['features']);
    features_revert(array($feature_name => $components));
  }
}