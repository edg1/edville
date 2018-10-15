<?php
/**
 * @file
 * feature_our_hotel_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_our_hotel_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
