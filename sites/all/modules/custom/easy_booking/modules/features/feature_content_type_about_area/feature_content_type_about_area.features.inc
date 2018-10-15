<?php
/**
 * @file
 * feature_content_type_about_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_content_type_about_area_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_content_type_about_area_image_default_styles() {
  $styles = array();

  // Exported image style: about_preview_image.
  $styles['about_preview_image'] = array(
    'name' => 'about_preview_image',
    'label' => 'About preview image',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 240,
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
function feature_content_type_about_area_node_info() {
  $items = array(
    'about' => array(
      'name' => t('About area'),
      'base' => 'node_content',
      'description' => t('You can put some supplemental information about a hotel or about a city where it is located.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
