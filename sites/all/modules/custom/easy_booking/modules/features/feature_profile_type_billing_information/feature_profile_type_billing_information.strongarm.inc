<?php
/**
 * @file
 * feature_profile_type_billing_information.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_profile_type_billing_information_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_completion_message';
  $strongarm->value = array(
    'value' => '<h1 class="rtecenter booked">THE ROOM IS BOOKED!</h1><p class="rtecenter completion">We will be very glad to see you in our hotel.</p>',
    'format' => 'full_html',
  );
  $export['commerce_checkout_completion_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_auth_display';
  $strongarm->value = 0;
  $export['commerce_order_account_pane_auth_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_exclude';
  $strongarm->value = '#edit-customer-profile-billing-field-your-estimated-time-of-arr-und-0-value
#edit-title
#edit-field-news-subtitle-und-0-value
#edit-name
#edit-current-pass
#edit-pass-pass1
#edit-pass-pass2
#edit-field-subtitle-und-0-value
#edit-mail
#edit-base-price
#edit-pass
#edit-longitude
#edit-latitude
.edit_color_input
#edit-min-drag-width';
  $export['form_placeholder_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_include';
  $strongarm->value = '.state .form-select
.form-text';
  $export['form_placeholder_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_placeholder_required_indicator';
  $strongarm->value = 'remove';
  $export['form_placeholder_required_indicator'] = $strongarm;

  return $export;
}
