<?php
/**
 * @file
 * feature_blocks_settings_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_blocks_settings_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
