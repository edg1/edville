<?php
/**
 * @file
 * feature_frontpage_slideshow_nodes.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_frontpage_slideshow_nodes_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Welcome to Easy Booking',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '87ba3493-0175-4eae-b853-b1f6382d29ac',
  'type' => 'slideshow_header',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2256f717-0f46-43d4-9f97-72ef7b2bbb85',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>At Easy Booking, the location could not be better. The hotel is centrally located in the middle of City action-packed tourism area and right off of International Drive. More than 150 restaurants, hundreds of shops, rides, attractions, the County Convention Center, and six theme parks are within a 5-mile radius of Easy Booking.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>At Easy Booking, the location could not be better. The hotel is centrally located in the middle of City action-packed tourism area and right off of International Drive. More than 150 restaurants, hundreds of shops, rides, attractions, the County Convention Center, and six theme parks are within a 5-mile radius of Easy Booking.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'wallhaven-102575.jpg',
        'uri' => 'public://wallhaven-102575.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1063235,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '14e6f8fc-950e-414b-8d58-baba659656af',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 2048,
        'height' => 1365,
        'uuid_features_file_url' => 'http://10.1.0.173:4571/public%3A//wallhaven-102575.jpg',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 09:41:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Entertainment, dining and shopping outlets',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '36330934-49c9-45df-8e6d-12b581b4a4d5',
  'type' => 'slideshow_header',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2c582b3b-c5d5-4880-be80-1d022a771dc3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Easy Booking itself that is across the street from our guestrooms offers visitors 40 restaurants, famous designer stores and an IMAX movie theater with 20-plus screens. Add to this neighborhood the North building of the County Convention Center also across the street and its tough to find a better hotel location anywhere in the City.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Easy Booking itself that is across the street from our guestrooms offers visitors 40 restaurants, famous designer stores and an IMAX movie theater with 20-plus screens. Add to this neighborhood the North building of the County Convention Center also across the street and its tough to find a better hotel location anywhere in the City.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'wallhaven-26799.jpg',
        'uri' => 'public://wallhaven-26799.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1588246,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'fa6790a2-e78e-429b-8ad3-6c5717b2b0ea',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 2880,
        'height' => 1800,
        'uuid_features_file_url' => 'http://10.1.0.173:4571/public%3A//wallhaven-26799.jpg',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 09:41:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Location',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b678a117-e203-429a-904c-5aa1306e2635',
  'type' => 'slideshow_header',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ce3005b1-525a-475d-91d4-7f1ea811303c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p> Our location makes us the ideal hotel for your vacation.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Our location makes us the ideal hotel for your vacation.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'bre_aussen-06.jpg',
        'uri' => 'public://bre_aussen-06_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 769595,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '0af03723-2bb3-4e78-a6c1-b1cd5a8c1225',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 1600,
        'height' => 1200,
        'uuid_features_file_url' => 'http://10.1.0.173:4571/public%3A//bre_aussen-06_0.jpg',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 09:41:52 +0000',
);
  return $nodes;
}
