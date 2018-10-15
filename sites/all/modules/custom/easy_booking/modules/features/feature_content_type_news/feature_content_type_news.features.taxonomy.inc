<?php
/**
 * @file
 * feature_content_type_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_content_type_news_taxonomy_default_vocabularies() {
  return array(
    'news_category' => array(
      'name' => 'News category',
      'machine_name' => 'news_category',
      'description' => 'Different types of news for sorting them',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
