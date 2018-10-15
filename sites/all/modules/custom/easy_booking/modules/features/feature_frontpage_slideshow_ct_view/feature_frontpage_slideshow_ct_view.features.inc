<?php
/**
 * @file
 * feature_frontpage_slideshow_ct_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_frontpage_slideshow_ct_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_frontpage_slideshow_ct_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_frontpage_slideshow_ct_view_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_header_style.
  $styles['slideshow_header_style'] = array(
    'name' => 'slideshow_header_style',
    'label' => 'Slideshow header style',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 980,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_frontpage_slideshow_ct_view_node_info() {
  $items = array(
    'slideshow_header' => array(
      'name' => t('Frontpage Slideshow'),
      'base' => 'node_content',
      'description' => t('Slideshow at the top of the front page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
