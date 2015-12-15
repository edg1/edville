<?php
/**
 * @file
 * unit_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unit_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'other_spaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Other Spaces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Spaces';
  $handler->display->display_options['css_class'] = 'row unit-detail-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php $theme_path = drupal_get_path(\'theme\', \'element\'); ?>
<img class="icon" src="<?php print url($theme_path . \'/images/icons/home.png\'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t(\'Other Spaces\'); ?></h2>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Room Photos */
  $handler->display->display_options['fields']['field_room_photos']['id'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['table'] = 'field_data_field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['field'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['label'] = '';
  $handler->display->display_options['fields']['field_room_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photos']['settings'] = array(
    'image_style' => 'other_space',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_room_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_room_photos']['delta_offset'] = '0';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/unit/[unit_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Contextual filter: Bookable Units: Bookable units ID */
  $handler->display->display_options['arguments']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['unit_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['unit_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['unit_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['unit_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['unit_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['unit_id']['not'] = TRUE;

  /* Display: Other Spaces */
  $handler = $view->new_display('block', 'Other Spaces', 'block');
  $handler->display->display_options['block_description'] = 'Other Spaces';
  $export['other_spaces'] = $view;

  return $export;
}
