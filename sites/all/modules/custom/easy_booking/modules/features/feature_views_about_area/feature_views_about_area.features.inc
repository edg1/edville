<?php
/**
 * @file
 * feature_views_about_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_views_about_area_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_views_about_area_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
