<?php
/**
 * @file
 * feature_our_services_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_our_services_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_our_services_view_image_default_styles() {
  $styles = array();

  // Exported image style: our_services_style_icon.
  $styles['our_services_style_icon'] = array(
    'name' => 'our_services_style_icon',
    'label' => 'Our services style icon',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: our_services_style_image.
  $styles['our_services_style_image'] = array(
    'name' => 'our_services_style_image',
    'label' => 'Our services style image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 215,
          'height' => 215,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
