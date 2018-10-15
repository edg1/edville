<?php
/**
 * @file
 * feature_views_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_views_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_views_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_views_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_preview_image.
  $styles['news_preview_image'] = array(
    'name' => 'news_preview_image',
    'label' => 'News preview image',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 390,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: recent_news_image.
  $styles['recent_news_image'] = array(
    'name' => 'recent_news_image',
    'label' => 'Recent news image',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
