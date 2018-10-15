<?php
/**
 * @file
 * feature_room_top_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_room_top_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'room_top_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Room top slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  /* Field: Field: Room photos */
  $handler->display->display_options['fields']['field_room_photos']['id'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['table'] = 'field_data_field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['field'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['label'] = '';
  $handler->display->display_options['fields']['field_room_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photos']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_room_photos']['settings'] = array(
    'slideshow_image_style' => 'slideshow_header_style',
    'slideshow_link' => '',
    'slideshow_colorbox_image_style' => '',
    'slideshow_colorbox_slideshow' => '',
    'slideshow_colorbox_slideshow_speed' => '4000',
    'slideshow_colorbox_transition' => 'elastic',
    'slideshow_colorbox_speed' => '350',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '0',
    'slideshow_order' => '',
    'slideshow_controls' => 1,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_room_photos']['delta_offset'] = '0';
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = '';
  $handler->display->display_options['fields']['base_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_price']['precision'] = '0';
  /* Field: Bookable Units: Max_sleeps */
  $handler->display->display_options['fields']['max_sleeps']['id'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['max_sleeps']['field'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['label'] = '';
  $handler->display->display_options['fields']['max_sleeps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['max_sleeps']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: room space */
  $handler->display->display_options['fields']['field_room_space']['id'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['table'] = 'field_data_field_room_space';
  $handler->display->display_options['fields']['field_room_space']['field'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['label'] = '';
  $handler->display->display_options['fields']['field_room_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_space']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="properties"><div class="base-price"><span class="price">[base_price]</span><span class="property">per night</span></div>
<div class="values"><span class="value">[max_sleeps]</span><span class="property">Adults</span> 
<span class="value">[field_room_space]</span><span class="property">m</span><span class="square">2</span></div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Room top slideshow Block */
  $handler = $view->new_display('block', 'Room top slideshow Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_bookable_unit_reference_commerce_line_item']['id'] = 'reverse_bookable_unit_reference_commerce_line_item';
  $handler->display->display_options['relationships']['reverse_bookable_unit_reference_commerce_line_item']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['reverse_bookable_unit_reference_commerce_line_item']['field'] = 'reverse_bookable_unit_reference_commerce_line_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  /* Field: Field: Room photos */
  $handler->display->display_options['fields']['field_room_photos']['id'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['table'] = 'field_data_field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['field'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['label'] = '';
  $handler->display->display_options['fields']['field_room_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photos']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_room_photos']['settings'] = array(
    'optionset' => 'slideshowheader',
    'image_style' => '',
    'caption' => 0,
  );
  $handler->display->display_options['fields']['field_room_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_room_photos']['field_api_classes'] = TRUE;
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = '';
  $handler->display->display_options['fields']['base_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['base_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['base_price']['alter']['text'] = '<span class="price">[base_price]</span><span class="property">per night</span>';
  $handler->display->display_options['fields']['base_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_price']['precision'] = '0';
  $handler->display->display_options['fields']['base_price']['prefix'] = '$';
  /* Field: Bookable Units: Max_sleeps */
  $handler->display->display_options['fields']['max_sleeps']['id'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['max_sleeps']['field'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['label'] = '';
  $handler->display->display_options['fields']['max_sleeps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['max_sleeps']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['max_sleeps']['alter']['text'] = '<span class="value">[max_sleeps]</span><span class="property">Adults</span>';
  $handler->display->display_options['fields']['max_sleeps']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: room space */
  $handler->display->display_options['fields']['field_room_space']['id'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['table'] = 'field_data_field_room_space';
  $handler->display->display_options['fields']['field_room_space']['field'] = 'field_room_space';
  $handler->display->display_options['fields']['field_room_space']['label'] = '';
  $handler->display->display_options['fields']['field_room_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_space']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_room_space']['alter']['text'] = '<span class="value">[field_room_space]</span><span class="property">m</span><span class="square">2</span>';
  $handler->display->display_options['fields']['field_room_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_space']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Bookable Units: Room total beds */
  $handler->display->display_options['fields']['field_room_total_beds']['id'] = 'field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['table'] = 'field_data_field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['field'] = 'field_room_total_beds';
  $handler->display->display_options['fields']['field_room_total_beds']['label'] = '';
  $handler->display->display_options['fields']['field_room_total_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room_total_beds']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_room_total_beds']['alter']['text'] = '<span class="value">[field_room_total_beds]</span><span class="property">beds</span>';
  $handler->display->display_options['fields']['field_room_total_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_total_beds']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="properties"><div class="base-price">[base_price]</div><div class="values"><div class="adults">[max_sleeps]</div><div class="space">[field_room_space]</div><div class="totalbeds">[field_room_total_beds]</div></div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['room_top_slideshow'] = $view;

  return $export;
}
