<?php
/**
 * @file
 * feature_room.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_room_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_mode';
  $strongarm->value = 'remote';
  $export['uuid_features_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'news_category' => 'news_category',
    'room_furnishing_specifications' => 'room_furnishing_specifications',
    'newsletter' => 'newsletter',
    'teeeeeeest' => 'teeeeeeest',
    'tags' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  return $export;
}
