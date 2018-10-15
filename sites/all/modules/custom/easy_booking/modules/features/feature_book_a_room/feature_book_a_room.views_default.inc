<?php
/**
 * @file
 * feature_book_a_room.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_book_a_room_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_a_room';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Book a room';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book a room';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'SHOW ROOMS';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'FIRST';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'PREV';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'NEXT';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'LAST';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Bookable Units: Max_sleeps */
  $handler->display->display_options['fields']['max_sleeps']['id'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['max_sleeps']['field'] = 'max_sleeps';
  $handler->display->display_options['fields']['max_sleeps']['label'] = '';
  $handler->display->display_options['fields']['max_sleeps']['exclude'] = TRUE;
  $handler->display->display_options['fields']['max_sleeps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['max_sleeps']['separator'] = '';
  /* Field: Bookable Units: Max_children */
  $handler->display->display_options['fields']['max_children']['id'] = 'max_children';
  $handler->display->display_options['fields']['max_children']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['max_children']['field'] = 'max_children';
  $handler->display->display_options['fields']['max_children']['label'] = '';
  $handler->display->display_options['fields']['max_children']['exclude'] = TRUE;
  $handler->display->display_options['fields']['max_children']['element_label_colon'] = FALSE;
  /* Field: Field: Room photos */
  $handler->display->display_options['fields']['field_room_photos']['id'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['table'] = 'field_data_field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['field'] = 'field_room_photos';
  $handler->display->display_options['fields']['field_room_photos']['label'] = '';
  $handler->display->display_options['fields']['field_room_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_room_photos']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_room_photos']['settings'] = array(
    'slideshow_image_style' => 'carousel',
    'slideshow_link' => 'content',
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
  $handler->display->display_options['fields']['field_room_photos']['delta_limit'] = 'All';
  $handler->display->display_options['fields']['field_room_photos']['delta_offset'] = '0';
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = '';
  $handler->display->display_options['fields']['base_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_price']['precision'] = '0';
  $handler->display->display_options['fields']['base_price']['decimal'] = '';
  $handler->display->display_options['fields']['base_price']['separator'] = '';
  $handler->display->display_options['fields']['base_price']['prefix'] = '$';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Bookable Units: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'rooms_units';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'golf_room_by_pool' => 'golf_room_by_pool',
    'room' => 'room',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Bookable Units: Max_sleeps */
  $handler->display->display_options['filters']['max_sleeps']['id'] = 'max_sleeps';
  $handler->display->display_options['filters']['max_sleeps']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['max_sleeps']['field'] = 'max_sleeps';
  $handler->display->display_options['filters']['max_sleeps']['group'] = 1;
  $handler->display->display_options['filters']['max_sleeps']['exposed'] = TRUE;
  $handler->display->display_options['filters']['max_sleeps']['expose']['operator_id'] = 'max_sleeps_op';
  $handler->display->display_options['filters']['max_sleeps']['expose']['label'] = 'Max_sleeps';
  $handler->display->display_options['filters']['max_sleeps']['expose']['operator'] = 'max_sleeps_op';
  $handler->display->display_options['filters']['max_sleeps']['expose']['identifier'] = 'max_sleeps';
  $handler->display->display_options['filters']['max_sleeps']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['max_sleeps']['group_info']['label'] = 'Adults';
  $handler->display->display_options['filters']['max_sleeps']['group_info']['identifier'] = 'adults';
  $handler->display->display_options['filters']['max_sleeps']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['max_sleeps']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '>=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '2',
      'operator' => '>=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '3',
      'operator' => '>=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '4',
      'operator' => '>=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => '5',
      'operator' => '>=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Bookable Units: Max_children */
  $handler->display->display_options['filters']['max_children']['id'] = 'max_children';
  $handler->display->display_options['filters']['max_children']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['max_children']['field'] = 'max_children';
  $handler->display->display_options['filters']['max_children']['group'] = 1;
  $handler->display->display_options['filters']['max_children']['exposed'] = TRUE;
  $handler->display->display_options['filters']['max_children']['expose']['operator_id'] = 'max_children_op';
  $handler->display->display_options['filters']['max_children']['expose']['label'] = 'Max_children';
  $handler->display->display_options['filters']['max_children']['expose']['operator'] = 'max_children_op';
  $handler->display->display_options['filters']['max_children']['expose']['identifier'] = 'max_children';
  $handler->display->display_options['filters']['max_children']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['max_children']['group_info']['label'] = 'Children (0-4 yrs)';
  $handler->display->display_options['filters']['max_children']['group_info']['identifier'] = 'max_children';
  $handler->display->display_options['filters']['max_children']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['max_children']['group_info']['group_items'] = array(
    1 => array(
      'title' => '0 ',
      'operator' => '>=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '1',
      'operator' => '>=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '2',
      'operator' => '>=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '3',
      'operator' => '>=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'book';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Book a room';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['book_a_room'] = $view;

  return $export;
}
