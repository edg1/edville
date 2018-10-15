<?php
/**
 * @file
 * feature_profile_type_billing_information.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_profile_type_billing_information_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_customer_profile-billing-commerce_customer_address'
  $field_instances['commerce_customer_profile-billing-commerce_customer_address'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'commerce_customer_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'name-full' => 'name-full',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_additional_checks'
  $field_instances['commerce_customer_profile-billing-field_additional_checks'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_additional_checks',
    'label' => 'Additional checks',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_primary_purpose_of_your_tr'
  $field_instances['commerce_customer_profile-billing-field_primary_purpose_of_your_tr'] = array(
    'bundle' => 'billing',
    'default_value' => array(
      0 => array(
        'value' => 'Leisure',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_primary_purpose_of_your_tr',
    'label' => 'Primary purpose of your trip',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_special_requests'
  $field_instances['commerce_customer_profile-billing-field_special_requests'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Special requests cannot be guaranteed-but the hotel will do its best to meet your needs.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_special_requests',
    'label' => 'Special Requests',
    'placeholder' => 'Please write your requests in English...',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_title'
  $field_instances['commerce_customer_profile-billing-field_title'] = array(
    'bundle' => 'billing',
    'default_value' => array(
      0 => array(
        'value' => 'Mr',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-billing-field_your_estimated_time_of_arr'
  $field_instances['commerce_customer_profile-billing-field_your_estimated_time_of_arr'] = array(
    'bundle' => 'billing',
    'default_value' => array(
      0 => array(
        'value' => 'I don\'t know',
      ),
    ),
    'deleted' => 0,
    'description' => 'You can arrive any time you like - your room will be ready at 14:00',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_your_estimated_time_of_arr',
    'label' => 'Your estimated time of arrival',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional checks');
  t('Address');
  t('Primary purpose of your trip');
  t('Special Requests');
  t('Special requests cannot be guaranteed-but the hotel will do its best to meet your needs.');
  t('Title');
  t('You can arrive any time you like - your room will be ready at 14:00');
  t('Your estimated time of arrival');

  return $field_instances;
}
