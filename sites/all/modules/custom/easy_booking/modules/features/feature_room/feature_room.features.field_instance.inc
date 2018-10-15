<?php
/**
 * @file
 * feature_room.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_room_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'rooms_unit-room-field_furnishing'
  $field_instances['rooms_unit-room-field_furnishing'] = array(
    'bundle' => 'room',
    'default_value' => array(
      0 => array(
        'target_id' => 4,
      ),
      1 => array(
        'target_id' => 15,
      ),
      2 => array(
        'target_id' => 16,
      ),
      3 => array(
        'target_id' => 22,
      ),
      4 => array(
        'target_id' => 13,
      ),
      5 => array(
        'target_id' => 19,
      ),
      6 => array(
        'target_id' => 5,
      ),
      7 => array(
        'target_id' => 11,
      ),
      8 => array(
        'target_id' => 17,
      ),
      9 => array(
        'target_id' => 12,
      ),
      10 => array(
        'target_id' => 20,
      ),
      11 => array(
        'target_id' => 8,
      ),
      12 => array(
        'target_id' => 6,
      ),
      13 => array(
        'target_id' => 7,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_furnishing',
    'label' => 'Room furnishing & Specifications',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-field_room_body'
  $field_instances['rooms_unit-room-field_room_body'] = array(
    'bundle' => 'room',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>This room page was created automatically and all the information you see here is given by default. You can edit any setting for&nbsp;existing rooms or add and edit your own rooms&nbsp;by visiting "Rooms" -&gt; "Bookable Units" menu at the top of your screen. Adding a room is possible via &nbsp;<a href="http://10.1.0.222:4568/admin/rooms/units/add">Add a Bookable Unit</a>&nbsp;button. If you want to edit&nbsp;an existing room, just click an&nbsp;<a href="http://10.1.0.222:4568/admin/rooms/units/">Edit</a>&nbsp;link in the&nbsp;Operations links section next to your room.</p>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Here you can describe your room in details.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_room_body',
    'label' => 'body',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-field_room_is_popular'
  $field_instances['rooms_unit-room-field_room_is_popular'] = array(
    'bundle' => 'room',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check, if you want this room to be marked as popular',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_room_is_popular',
    'label' => 'Room is popular',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-field_room_photos'
  $field_instances['rooms_unit-room-field_room_photos'] = array(
    'bundle' => 'room',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_slideshow',
        'settings' => array(
          'slideshow_caption' => '',
          'slideshow_caption_link' => '',
          'slideshow_carousel_circular' => 0,
          'slideshow_carousel_follow' => 0,
          'slideshow_carousel_image_style' => '',
          'slideshow_carousel_scroll' => 1,
          'slideshow_carousel_skin' => '',
          'slideshow_carousel_speed' => 500,
          'slideshow_carousel_vertical' => 0,
          'slideshow_carousel_visible' => 3,
          'slideshow_colorbox_image_style' => '',
          'slideshow_colorbox_slideshow' => '',
          'slideshow_colorbox_slideshow_speed' => 4000,
          'slideshow_colorbox_speed' => 350,
          'slideshow_colorbox_transition' => 'elastic',
          'slideshow_controls' => 1,
          'slideshow_controls_pause' => 0,
          'slideshow_controls_position' => 'after',
          'slideshow_field_collection_image' => '',
          'slideshow_fx' => 'scrollHorz',
          'slideshow_image_style' => 'carousel',
          'slideshow_link' => 'content',
          'slideshow_order' => '',
          'slideshow_pager' => '',
          'slideshow_pager_image_style' => '',
          'slideshow_pager_position' => 'after',
          'slideshow_pause' => 0,
          'slideshow_speed' => 1000,
          'slideshow_start_on_hover' => 0,
          'slideshow_timeout' => 0,
        ),
        'type' => 'slideshow',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_room_photos',
    'label' => 'Room photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-field_room_space'
  $field_instances['rooms_unit-room-field_room_space'] = array(
    'bundle' => 'room',
    'default_value' => array(
      0 => array(
        'value' => 15,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_room_space',
    'label' => 'room space',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-field_room_total_beds'
  $field_instances['rooms_unit-room-field_room_total_beds'] = array(
    'bundle' => 'room',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Please enter the total amount of beds',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_room_total_beds',
    'label' => 'Room total beds',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'rooms_unit-room-rooms_booking_unit_options'
  $field_instances['rooms_unit-room-rooms_booking_unit_options'] = array(
    'bundle' => 'room',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'rooms_booking_unit_options',
    'label' => 'Options',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms',
      'settings' => array(),
      'type' => 'rooms_options_combined',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-room_furnishing_specifications-field_term_image'
  $field_instances['taxonomy_term-room_furnishing_specifications-field_term_image'] = array(
    'bundle' => 'room_furnishing_specifications',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'room_furnishning_image_style',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_image',
    'label' => 'term image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Check, if you want this room to be marked as popular');
  t('Here you can describe your room in details.');
  t('Options');
  t('Please enter the total amount of beds');
  t('Room furnishing & Specifications');
  t('Room is popular');
  t('Room photos');
  t('Room total beds');
  t('body');
  t('room space');
  t('term image');

  return $field_instances;
}
