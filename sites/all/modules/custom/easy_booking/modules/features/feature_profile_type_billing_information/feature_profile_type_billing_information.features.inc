<?php
/**
 * @file
 * feature_profile_type_billing_information.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_profile_type_billing_information_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
