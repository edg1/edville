<?php
/**
 * @file
 * feature_easy_booking_colorized_gmap.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_easy_booking_colorized_gmap_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['colorized_gmap-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'colorized_gmap',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content_aside',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['colorized_gmap-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'colorized_gmap',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
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
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
