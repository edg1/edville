<?php
/**
 * @file
 * feature_custom_copyright_block_export.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_custom_copyright_block_export_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-developed_by_adci'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'developed_by_adci',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
