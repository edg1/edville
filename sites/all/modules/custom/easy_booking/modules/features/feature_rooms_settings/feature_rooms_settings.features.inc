<?php
/**
 * @file
 * feature_rooms_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_rooms_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
