<?php
/**
 * @file
 * feature_news_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_news_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
