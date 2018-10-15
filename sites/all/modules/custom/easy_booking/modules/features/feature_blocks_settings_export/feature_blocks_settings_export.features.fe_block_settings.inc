<?php
/**
 * @file
 * feature_blocks_settings_export.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_blocks_settings_export_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-about_area_header_block'] = array(
    'cache' => -1,
    'css_class' => 'about-area-header-image-block',
    'custom' => 0,
    'machine_name' => 'about_area_header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'about',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'About area',
    'visibility' => 1,
  );

  $export['block-checkout_steps_block'] = array(
    'cache' => -1,
    'css_class' => 'checkout-steps-block',
    'custom' => 0,
    'machine_name' => 'checkout_steps_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'bookings
cart
checkout/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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

  $export['block-contacts_block'] = array(
    'cache' => -1,
    'css_class' => 'contacts-mail-and-phone-block',
    'custom' => 0,
    'machine_name' => 'contacts_block',
    'module' => 'block',
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
    'title' => 'Contacts',
    'visibility' => 1,
  );

  $export['block-copyright_block'] = array(
    'cache' => -1,
    'css_class' => 'block-copyright-year-name',
    'custom' => 0,
    'machine_name' => 'copyright_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -16,
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

  $export['block-menu_button'] = array(
    'cache' => -1,
    'css_class' => 'menu-expand-button-block',
    'custom' => 0,
    'machine_name' => 'menu_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-news_header_block'] = array(
    'cache' => -1,
    'css_class' => 'news-header-image-block',
    'custom' => 0,
    'machine_name' => 'news_header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'News',
    'visibility' => 1,
  );

  $export['block-our_hotel_header_block'] = array(
    'cache' => -1,
    'css_class' => 'our-hotel-header-image-block',
    'custom' => 0,
    'machine_name' => 'our_hotel_header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'our-hotel',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Our hotel',
    'visibility' => 1,
  );

  $export['block-reserved_header_block'] = array(
    'cache' => -1,
    'css_class' => 'reserved-header-image-block',
    'custom' => 0,
    'machine_name' => 'reserved_header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'bookings
checkout/*
cart',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Reserved',
    'visibility' => 1,
  );

  $export['block-room_filters_block'] = array(
    'cache' => -1,
    'css_class' => 'room-search-filters',
    'custom' => 0,
    'machine_name' => 'room_filters_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'book
booking/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'highlighted',
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
    'title' => 'Filters',
    'visibility' => 1,
  );

  $export['block-rooms_header_block'] = array(
    'cache' => -1,
    'css_class' => 'rooms-header-image-block',
    'custom' => 0,
    'machine_name' => 'rooms_header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'book
booking
booking/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Rooms',
    'visibility' => 1,
  );

  $export['block-social_networks'] = array(
    'cache' => -1,
    'css_class' => 'social-media-links-block',
    'custom' => 0,
    'machine_name' => 'social_networks',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -17,
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

  $export['easy_booking_custom-easy_booking_custom'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'easy_booking_custom',
    'module' => 'easy_booking_custom',
    'node_types' => array(),
    'pages' => 'unit/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'highlighted',
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

  $export['logo_block-logo'] = array(
    'cache' => -1,
    'css_class' => 'logo-block',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'logo_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['rooms_booking_manager-rooms_availability_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'rooms_availability_search',
    'module' => 'rooms_booking_manager',
    'node_types' => array(),
    'pages' => 'book
booking/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'highlighted',
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

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(
      0 => 'about',
      1 => 'article',
      2 => 'news',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -20,
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

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(
      0 => 'about',
      1 => 'article',
      2 => 'news',
    ),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -12,
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

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-about_area-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-about_area-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-book_a_room-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-book_a_room-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'booking_theme',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-news-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-news-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -17,
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

  $export['views-about_area-about_area_slideshow'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_area-about_area_slideshow',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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

  $export['views-news-recent_news_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news-recent_news_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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

  $export['views-our_cervices-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'our_cervices-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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

  $export['views-popular_rooms_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'popular_rooms_view-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'content',
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

  $export['views-room_top_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'room_top_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'unit/*',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -20,
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

  $export['views-slideshow_header-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'slideshow_header-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'booking_theme' => array(
        'region' => 'secondary_content',
        'status' => 1,
        'theme' => 'booking_theme',
        'weight' => -25,
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
