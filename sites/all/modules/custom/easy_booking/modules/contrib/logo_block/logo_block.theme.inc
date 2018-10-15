<?php

/**
 * @file
 * Theme callback functions for Logo Block.
 */

/**
 * Theme wrapper for logo block.
 */
function theme_logo_block_wrapper($variables) {
  $site_name = variable_get('site_name', '');
  $link = variable_get('logo_block_link', '');
  if ($link) {
    return l($variables['element']['#children'], $link, array(
      'absolute' => TRUE,
      'attributes' => array('title' => $site_name),
      'html' => TRUE,
    ));
  }

  return $variables['element']['#children'];
}

/**
 * Returns HTML for an image using a specific image style.
 *
 * Clones theme_image_style() with the additional step of forcing the creation
 * of the derivative to bypass any 404 issues.
 *
 * @see theme_image_style()
 */
function theme_logo_block_image_style($variables) {
  // Determine the dimensions of the styled image.
  $dimensions = array(
    'width' => $variables['width'],
    'height' => $variables['height'],
  );
  image_style_transform_dimensions($variables['style_name'], $dimensions);

  $variables['width'] = $dimensions['width'];
  $variables['height'] = $dimensions['height'];

  $image_style_dest_path = image_style_path($variables['style_name'], $variables['path']);
  if (!file_exists($image_style_dest_path)) {
    $style = image_style_load($variables['style_name']);
    image_style_create_derivative($style, $variables['path'], $image_style_dest_path);
  }
  $variables['path'] = file_create_url($image_style_dest_path);

  return theme('image', $variables);
}