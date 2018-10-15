<?php
/**
 * @file
 * feature_content_type_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_content_type_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Offer',
    'description' => '<p>Some special&nbsp;offers, promo-actions, etc.</p>
',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '49e0078e-6962-401a-ae27-72abdd77e428',
    'vocabulary_machine_name' => 'news_category',
  );
  $terms[] = array(
    'name' => 'Event',
    'description' => '<p>Meetings, events, holidays etc.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6e015af1-39f7-4236-9666-cedca25669f7',
    'vocabulary_machine_name' => 'news_category',
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '<p>These are common news, that do not fit to any other category.</p>
',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'db56ead8-51a5-474e-a925-8110c877e2ca',
    'vocabulary_machine_name' => 'news_category',
  );
  return $terms;
}
