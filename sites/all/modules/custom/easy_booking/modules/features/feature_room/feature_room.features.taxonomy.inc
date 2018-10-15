<?php
/**
 * @file
 * feature_room.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_room_taxonomy_default_vocabularies() {
  return array(
    'room_furnishing_specifications' => array(
      'name' => 'Room furnishing & specifications',
      'machine_name' => 'room_furnishing_specifications',
      'description' => 'Some specific features for each room',
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
