<?php
/**
 * @file
 * feature_popular_rooms_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_popular_rooms_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'popular_rooms_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Popular rooms view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular rooms';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'VIEW ALL ROOMS';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Max_sleeps */
  $handler->display->display_options['fields']['max_sleeps']['id'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['max_sleeps']['field'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['label'] = '';
  $handler->display->display_options['fields']['max_sleeps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['max_sleeps']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Room photos */
  $handler->display->display_options['fields']['field_room_photos']['id'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['table'] = 'field_data_field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['field'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['label'] = '';
  $handler->display->display_options['fields']['field_room_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photos']['settings'] = array(
    'image_style' => 'carousel',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_room_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_room_photos']['delta_offset'] = '0';
  /* Field: Bookable Units: room space */
  $handler->display->display_options['fields']['field_room_space']['id'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['table'] = 'field_data_field_room_space';
  $handler->display->display_options['fields']['field_room_space']['field'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['label'] = '';
  $handler->display->display_options['fields']['field_room_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_space']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bookable Units: Room total beds */
  $handler->display->display_options['fields']['field_room_total_beds']['id'] = 'field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['table'] = 'field_data_field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['field'] = 'field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['label'] = '';
  $handler->display->display_options['fields']['field_room_total_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_total_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_total_beds']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '17';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="fade-wrapper">
<div class="name"><span class="name">[name]</span></div>
<div class="places"><span class="value">[max_sleeps]</span> <span class="property">adults</span></div>
<div class="space"><span class="value">[field_room_space]</span> <span class="property">m<sup>2</sup></span></div>
<div class="bedsamount"><span class="value">[field_room_total_beds]</span> <span class="property">bed</span></div>
</div><a href="/unit/[unit_id]" class="fade-href"></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Room is popular */
  $handler->display->display_options['fields']['field_room_is_popular']['id'] = 'field_room_is_popular';
  $handler->display->display_options['fields']['field_room_is_popular']['table'] = 'field_data_field_room_is_popular';
  $handler->display->display_options['fields']['field_room_is_popular']['field'] = 'field_room_is_popular';
  $handler->display->display_options['fields']['field_room_is_popular']['label'] = '';
  $handler->display->display_options['fields']['field_room_is_popular']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_is_popular']['element_label_colon'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['value'] = '1';
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_room_is_popular' => 'field_room_is_popular',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'book';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_owlcarousel-settings-popular-rooms';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['popular_rooms_view'] = $view;

  return $export;
}
