<?php
/**
 * @file
 * feature_custom_copyright_block_export.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_custom_copyright_block_export_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'developed by adci';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'developed_by_adci';
  $fe_block_boxes->body = '<p>Developed by <a href="http://adcisolutions.com/" class="adci-link">ADCI Solutions</a></p>';

  $export['developed_by_adci'] = $fe_block_boxes;

  return $export;
}
