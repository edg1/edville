<?php
/**
 * @file
 * unit_type.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function unit_type_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-other_spaces-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'other_spaces-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'unit/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'element' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'element',
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
    'visibility' => 1,
  );

  return $export;
}
