<?php
/**
 * @file
 * feature_permissions_export.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_permissions_export_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer form placeholder'.
  $permissions['administer form placeholder'] = array(
    'name' => 'administer form placeholder',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'form_placeholder',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer owlcarousel settings'.
  $permissions['administer owlcarousel settings'] = array(
    'name' => 'administer owlcarousel settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'owlcarousel_ui',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer rooms_booking_type entities'.
  $permissions['administer rooms_booking_type entities'] = array(
    'name' => 'administer rooms_booking_type entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'administer rooms_unit availability'.
  $permissions['administer rooms_unit availability'] = array(
    'name' => 'administer rooms_unit availability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'administer rooms_unit pricing'.
  $permissions['administer rooms_unit pricing'] = array(
    'name' => 'administer rooms_unit pricing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'administer rooms_unit_type entities'.
  $permissions['administer rooms_unit_type entities'] = array(
    'name' => 'administer rooms_unit_type entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'ajax order expiration'.
  $permissions['ajax order expiration'] = array(
    'name' => 'ajax order expiration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cart_expiration',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'book units'.
  $permissions['book units'] = array(
    'name' => 'book units',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_booking_manager',
  );

  // Exported permission: 'bypass bat_unit entities access'.
  $permissions['bypass bat_unit entities access'] = array(
    'name' => 'bypass bat_unit entities access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rooms_booking entities access'.
  $permissions['bypass rooms_booking entities access'] = array(
    'name' => 'bypass rooms_booking entities access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'bypass rooms_unit entities access'.
  $permissions['bypass rooms_unit entities access'] = array(
    'name' => 'bypass rooms_unit entities access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure room settings'.
  $permissions['configure room settings'] = array(
    'name' => 'configure room settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create about content'.
  $permissions['create about content'] = array(
    'name' => 'create about content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle rooms_product'.
  $permissions['create commerce_product entities of bundle rooms_product'] = array(
    'name' => 'create commerce_product entities of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create our_services content'.
  $permissions['create our_services content'] = array(
    'name' => 'create our_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create rooms_booking entities'.
  $permissions['create rooms_booking entities'] = array(
    'name' => 'create rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_booking entities of bundle standard_booking'.
  $permissions['create rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'create rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_unit entities'.
  $permissions['create rooms_unit entities'] = array(
    'name' => 'create rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create rooms_unit entities of bundle room'.
  $permissions['create rooms_unit entities of bundle room'] = array(
    'name' => 'create rooms_unit entities of bundle room',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow_header content'.
  $permissions['create slideshow_header content'] = array(
    'name' => 'create slideshow_header content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create unit_description content'.
  $permissions['create unit_description content'] = array(
    'name' => 'create unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any about content'.
  $permissions['delete any about content'] = array(
    'name' => 'delete any about content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any our_services content'.
  $permissions['delete any our_services content'] = array(
    'name' => 'delete any our_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any rooms_booking entity'.
  $permissions['delete any rooms_booking entity'] = array(
    'name' => 'delete any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_booking entity of bundle standard_booking'.
  $permissions['delete any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'delete any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_unit entity'.
  $permissions['delete any rooms_unit entity'] = array(
    'name' => 'delete any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete any rooms_unit entity of bundle room'.
  $permissions['delete any rooms_unit entity of bundle room'] = array(
    'name' => 'delete any rooms_unit entity of bundle room',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow_header content'.
  $permissions['delete any slideshow_header content'] = array(
    'name' => 'delete any slideshow_header content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any unit_description content'.
  $permissions['delete any unit_description content'] = array(
    'name' => 'delete any unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own about content'.
  $permissions['delete own about content'] = array(
    'name' => 'delete own about content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bat_unit entities'.
  $permissions['delete own bat_unit entities'] = array(
    'name' => 'delete own bat_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own our_services content'.
  $permissions['delete own our_services content'] = array(
    'name' => 'delete own our_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own rooms_booking entities'.
  $permissions['delete own rooms_booking entities'] = array(
    'name' => 'delete own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_booking entities of bundle standard_booking'.
  $permissions['delete own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'delete own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_unit entities'.
  $permissions['delete own rooms_unit entities'] = array(
    'name' => 'delete own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete own rooms_unit entities of bundle room'.
  $permissions['delete own rooms_unit entities of bundle room'] = array(
    'name' => 'delete own rooms_unit entities of bundle room',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow_header content'.
  $permissions['delete own slideshow_header content'] = array(
    'name' => 'delete own slideshow_header content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own unit_description content'.
  $permissions['delete own unit_description content'] = array(
    'name' => 'delete own unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_category'.
  $permissions['delete terms in news_category'] = array(
    'name' => 'delete terms in news_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in room_furnishing_specifications'.
  $permissions['delete terms in room_furnishing_specifications'] = array(
    'name' => 'delete terms in room_furnishing_specifications',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any about content'.
  $permissions['edit any about content'] = array(
    'name' => 'edit any about content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle rooms_product'.
  $permissions['edit any commerce_product entity of bundle rooms_product'] = array(
    'name' => 'edit any commerce_product entity of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any our_services content'.
  $permissions['edit any our_services content'] = array(
    'name' => 'edit any our_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow_header content'.
  $permissions['edit any slideshow_header content'] = array(
    'name' => 'edit any slideshow_header content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any unit_description content'.
  $permissions['edit any unit_description content'] = array(
    'name' => 'edit any unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own about content'.
  $permissions['edit own about content'] = array(
    'name' => 'edit own about content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle rooms_product'.
  $permissions['edit own commerce_product entities of bundle rooms_product'] = array(
    'name' => 'edit own commerce_product entities of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own our_services content'.
  $permissions['edit own our_services content'] = array(
    'name' => 'edit own our_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow_header content'.
  $permissions['edit own slideshow_header content'] = array(
    'name' => 'edit own slideshow_header content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own unit_description content'.
  $permissions['edit own unit_description content'] = array(
    'name' => 'edit own unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in news_category'.
  $permissions['edit terms in news_category'] = array(
    'name' => 'edit terms in news_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in room_furnishing_specifications'.
  $permissions['edit terms in room_furnishing_specifications'] = array(
    'name' => 'edit terms in room_furnishing_specifications',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'reference booking unit availability'.
  $permissions['reference booking unit availability'] = array(
    'name' => 'reference booking unit availability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability_reference',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'update any bat_unit entity'.
  $permissions['update any bat_unit entity'] = array(
    'name' => 'update any bat_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'update any rooms_booking entity'.
  $permissions['update any rooms_booking entity'] = array(
    'name' => 'update any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_booking entity of bundle standard_booking'.
  $permissions['update any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'update any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_unit entity'.
  $permissions['update any rooms_unit entity'] = array(
    'name' => 'update any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update any rooms_unit entity of bundle room'.
  $permissions['update any rooms_unit entity of bundle room'] = array(
    'name' => 'update any rooms_unit entity of bundle room',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update availability any rooms_unit entity'.
  $permissions['update availability any rooms_unit entity'] = array(
    'name' => 'update availability any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability any rooms_unit entity of bundle room'.
  $permissions['update availability any rooms_unit entity of bundle room'] = array(
    'name' => 'update availability any rooms_unit entity of bundle room',
    'roles' => array(),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability own rooms_unit entities'.
  $permissions['update availability own rooms_unit entities'] = array(
    'name' => 'update availability own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability own rooms_unit entities of bundle room'.
  $permissions['update availability own rooms_unit entities of bundle room'] = array(
    'name' => 'update availability own rooms_unit entities of bundle room',
    'roles' => array(),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update own bat_unit entities'.
  $permissions['update own bat_unit entities'] = array(
    'name' => 'update own bat_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'update own rooms_booking entities'.
  $permissions['update own rooms_booking entities'] = array(
    'name' => 'update own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_booking entities of bundle standard_booking'.
  $permissions['update own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'update own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_unit entities'.
  $permissions['update own rooms_unit entities'] = array(
    'name' => 'update own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update own rooms_unit entities of bundle room'.
  $permissions['update own rooms_unit entities of bundle room'] = array(
    'name' => 'update own rooms_unit entities of bundle room',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update pricing any rooms_unit entity'.
  $permissions['update pricing any rooms_unit entity'] = array(
    'name' => 'update pricing any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing any rooms_unit entity of bundle room'.
  $permissions['update pricing any rooms_unit entity of bundle room'] = array(
    'name' => 'update pricing any rooms_unit entity of bundle room',
    'roles' => array(),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing own rooms_unit entities'.
  $permissions['update pricing own rooms_unit entities'] = array(
    'name' => 'update pricing own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing own rooms_unit entities of bundle room'.
  $permissions['update pricing own rooms_unit entities of bundle room'] = array(
    'name' => 'update pricing own rooms_unit entities of bundle room',
    'roles' => array(),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view anonymous availability information'.
  $permissions['view anonymous availability information'] = array(
    'name' => 'view anonymous availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view any bat_unit entity'.
  $permissions['view any bat_unit entity'] = array(
    'name' => 'view any bat_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'view any bat_unit unpublished entity'.
  $permissions['view any bat_unit unpublished entity'] = array(
    'name' => 'view any bat_unit unpublished entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle rooms_product'.
  $permissions['view any commerce_product entity of bundle rooms_product'] = array(
    'name' => 'view any commerce_product entity of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any rooms_booking entity'.
  $permissions['view any rooms_booking entity'] = array(
    'name' => 'view any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_booking entity of bundle standard_booking'.
  $permissions['view any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'view any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_unit entity'.
  $permissions['view any rooms_unit entity'] = array(
    'name' => 'view any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view any rooms_unit entity of bundle room'.
  $permissions['view any rooms_unit entity of bundle room'] = array(
    'name' => 'view any rooms_unit entity of bundle room',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view any rooms_unit unpublished entity'.
  $permissions['view any rooms_unit unpublished entity'] = array(
    'name' => 'view any rooms_unit unpublished entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view named availability information'.
  $permissions['view named availability information'] = array(
    'name' => 'view named availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view own bat_unit unpublished entities'.
  $permissions['view own bat_unit unpublished entities'] = array(
    'name' => 'view own bat_unit unpublished entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle rooms_product'.
  $permissions['view own commerce_product entities of bundle rooms_product'] = array(
    'name' => 'view own commerce_product entities of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own rooms_booking entities'.
  $permissions['view own rooms_booking entities'] = array(
    'name' => 'view own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_booking entities of bundle standard_booking'.
  $permissions['view own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'view own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_unit entities'.
  $permissions['view own rooms_unit entities'] = array(
    'name' => 'view own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own rooms_unit entities of bundle room'.
  $permissions['view own rooms_unit entities of bundle room'] = array(
    'name' => 'view own rooms_unit entities of bundle room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own rooms_unit unpublished entities'.
  $permissions['view own rooms_unit unpublished entities'] = array(
    'name' => 'view own rooms_unit unpublished entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view past availability information'.
  $permissions['view past availability information'] = array(
    'name' => 'view past availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
