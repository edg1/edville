<?php
/**
 * @file
 * feature_custom_blocks_export.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_custom_blocks_export_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About area header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_area_header_block';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/about-area-header.png" /></p>';

  $export['about_area_header_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'block for checkout steps';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'checkout_steps_block';
  $fe_block_boxes->body = '<div class="step-wrapper"><div class="step step-select"><span class="checkout-step">1. Select your room</span></div><div class="step step-submit"><span class="checkout-step">2. Submit your details</span></div><div class="step step-reserved"><span class="checkout-step">3. Reserved!</span></div></div>';

  $export['checkout_steps_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contacts';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contacts_block';
  $fe_block_boxes->body = '<p class="contact address">Avenue Saint Pierre, 82</p><p class="contact mail">Admin@mail.com</p><p class="contact phone">+1 (555) 295-5555</p><p><button>Contact us</button></p>';

  $export['contacts_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'copyright_block';
  $fe_block_boxes->body = '© COPYRIGHT 2016 NONAME';

  $export['copyright_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Menu Button';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'menu_button';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/menu-button.png" /></p>';

  $export['menu_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'News header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'news_header_block';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/news-header.png" /></p><p class="text">Donec vel ornare nibh, non facilisis ex. Proin tempus gravida nisl vel lobortis. In ex erat, fringilla vitae nulla ac, pretium finibus purus.</p>';

  $export['news_header_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our hotel header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'our_hotel_header_block';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/our-hotel-header.png" /></p>';

  $export['our_hotel_header_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Reserved header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'reserved_header_block';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/reserved-header.png" /></p>';

  $export['reserved_header_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Room Filters';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'room_filters_block';
  $fe_block_boxes->body = '<div></div>';

  $export['room_filters_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Rooms Header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rooms_header_block';
  $fe_block_boxes->body = '<p><img src="/sites/default/files/rooms-header.png" /></p><p class="text">Proin tempus gravida nisl vel lobortis. In ex erat, fringilla vitae nulla ac, pretium finibus purus. Proin tempus gravida nisl vel lobortis. In ex erat, fringilla vitae nulla ac, pretium finibus purus.</p>';

  $export['rooms_header_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social networks in footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_networks';
  $fe_block_boxes->body = '<p><a class="social twitter" href="#">twitter</a> <a class="social rss" href="#">rss</a> <a class="social google" href="#">google+</a> <a class="social facebook" href="#">facebook</a> <a class="social linkedin" href="#">linkedin</a> <a class="social instagram" href="#">instagram</a></p>';

  $export['social_networks'] = $fe_block_boxes;

  return $export;
}
