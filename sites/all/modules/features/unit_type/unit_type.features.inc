<?php
/**
 * @file
 * unit_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unit_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_rooms_unit_type().
 */
function unit_type_default_rooms_unit_type() {
  $items = array();
  $items['holiday_home_edville_melle'] = entity_import('rooms_unit_type', '{
    "type" : "holiday_home_edville_melle",
    "label" : "Holiday Home edville melle",
    "weight" : "0",
    "data" : {
      "base_price" : "35",
      "min_sleeps" : "10",
      "max_sleeps" : "32",
      "min_children" : "0",
      "max_children" : "31",
      "rooms_description_source" : "Edville Melle :88"
    },
    "rooms_booking_unit_options" : { "und" : [
        {
          "name" : "Sheets \\u0026 Service",
          "quantity" : "1",
          "operation" : "add",
          "value" : "120"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['studio_center_ghent'] = entity_import('rooms_unit_type', '{
    "type" : "studio_center_ghent",
    "label" : "Studio center Ghent",
    "weight" : "0",
    "data" : {
      "base_price" : "35",
      "min_sleeps" : "2",
      "max_sleeps" : "4",
      "min_children" : "0",
      "max_children" : "3",
      "rooms_description_source" : "Studio in center Gent:90"
    },
    "rooms_booking_unit_options" : { "und" : [
        {
          "name" : "Sheets and Cleaning",
          "quantity" : "1",
          "operation" : "add",
          "value" : "120"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
