<?php
/**
 * @file
 * feature_room.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_room_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_room_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_room_image_default_styles() {
  $styles = array();

  // Exported image style: room_furnishning_image_style.
  $styles['room_furnishning_image_style'] = array(
    'name' => 'room_furnishning_image_style',
    'label' => 'room_furnishning_image_style',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_default_rooms_unit_type().
 */
function feature_room_default_rooms_unit_type() {
  $items = array();
  $items['room'] = entity_import('rooms_unit_type', '{
    "type" : "room",
    "label" : "Room",
    "weight" : "0",
    "data" : {
      "base_price" : "200",
      "min_sleeps" : "1",
      "max_sleeps" : "3",
      "min_children" : "0",
      "max_children" : "2",
      "rooms_description_source" : ""
    },
    "rooms_booking_unit_options" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
