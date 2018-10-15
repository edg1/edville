<?php
/**
 * @file
 * feature_rooms_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_rooms_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_arrival_date';
  $strongarm->value = t('Check-in date');
  $export['rooms_arrival_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_booking_manager_arrival_date';
  $strongarm->value = t('Check-in date');
  $export['rooms_booking_manager_arrival_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_booking_manager_button_search_for_availability';
  $strongarm->value = t('SHOW ROOMS');
  $export['rooms_booking_manager_button_search_for_availability'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_booking_manager_departure_date';
  $strongarm->value = t('Check-out date');
  $export['rooms_booking_manager_departure_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_departure_date';
  $strongarm->value = t('Check-out date');
  $export['rooms_departure_date'] = $strongarm;

  return $export;
}
