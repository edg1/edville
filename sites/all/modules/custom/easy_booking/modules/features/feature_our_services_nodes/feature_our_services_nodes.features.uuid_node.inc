<?php
/**
 * @file
 * feature_our_services_nodes.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_our_services_nodes_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Restaurant',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f1057ea7-9edc-4ae8-ad09-16a9eaf3f461',
  'type' => 'our_services',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c1bfc46-3abb-4d38-8ea1-7533efe426d4',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The dining room is bright and uncomplicated, service is exacting but highly personable, with staff helping to create an atmosphere that is always relaxed.',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'The dining room is bright and uncomplicated, service is exacting but highly personable, with staff helping to create an atmosphere that is always relaxed.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'restaurant-ico.png',
        'uri' => 'public://restaurant-ico.png',
        'filemime' => 'image/png',
        'filesize' => 1043,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '13207457-085b-4b46-b59e-8aa6a0b161d8',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 71,
        'height' => 93,
        'uuid_features_file_url' => 'public://restaurant-ico.png',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'restaurant.png',
        'uri' => 'public://restaurant.png',
        'filemime' => 'image/png',
        'filesize' => 174024,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '4297f091-c625-4228-b1eb-9a0b96e08b5b',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 377,
        'height' => 265,
        'uuid_features_file_url' => 'public://restaurant.png',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2015-02-09 15:41:52 +0600',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Free parking',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ceaea9e8-1f65-4b7d-9312-e68a2e9dd924',
  'type' => 'our_services',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e35a5af2-4584-4bee-ae69-efa4e3653e98',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Easy Booking operates more than 300 car parks and parks more than 450000 vehicles each day. Expect more from your car park operation.',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Easy Booking operates more than 300 car parks and parks more than 450000 vehicles each day. Expect more from your car park operation.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'free-parking-ico.png',
        'uri' => 'public://free-parking-ico.png',
        'filemime' => 'image/png',
        'filesize' => 850,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '3883c5e9-9686-479b-891d-e5a6407659a0',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 82,
        'height' => 90,
        'uuid_features_file_url' => 'public://free-parking-ico.png',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'free-parking.png',
        'uri' => 'public://free-parking_0.png',
        'filemime' => 'image/png',
        'filesize' => 354791,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '951c8981-0ecd-4236-86d1-7a3cd4e745cf',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 491,
        'height' => 379,
        'uuid_features_file_url' => 'public://free-parking_0.png',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2015-02-09 15:41:52 +0600',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Free Wi-Fi',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a7645b19-feee-4a4d-ae58-6b53517a6ed1',
  'type' => 'our_services',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e92815ca-1610-435a-82f0-31c055199875',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fast, free and safe internet. For everyone. Highspeed connection 24 7.',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Fast, free and safe internet. For everyone. Highspeed connection 24 7.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'free-wi-fi-ico.png',
        'uri' => 'public://free-wi-fi-ico.png',
        'filemime' => 'image/png',
        'filesize' => 2019,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '986524dc-69c8-4828-a449-9892b65a5979',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 101,
        'height' => 92,
        'uuid_features_file_url' => 'public://free-wi-fi-ico.png',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'free-wi-fi.png',
        'uri' => 'public://free-wi-fi.png',
        'filemime' => 'image/png',
        'filesize' => 125672,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '056cbadb-e7e4-4165-9358-b9fdde995aa6',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 331,
        'height' => 209,
        'uuid_features_file_url' => 'public://free-wi-fi.png',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2015-02-09 15:41:52 +0600',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'SPA',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ca469879-901c-42ea-bcca-8f77c47aa65d',
  'type' => 'our_services',
  'language' => 'und',
  'created' => 1423474912,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe143a4d-6b84-465d-8d2a-8ad38a96dfc4',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'We offer a large range of discounted spa and pampering products. You can grab a great bargain on a luxury spa day or spa break and really treat yourself.',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'We offer a large range of discounted spa and pampering products. You can grab a great bargain on a luxury spa day or spa break and really treat yourself.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'spa-ico.png',
        'uri' => 'public://spa-ico.png',
        'filemime' => 'image/png',
        'filesize' => 3360,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '0c54039b-b973-4d27-8d9f-9f35aeb3835c',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 116,
        'height' => 99,
        'uuid_features_file_url' => 'public://spa-ico.png',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'spa.png',
        'uri' => 'public://spa.png',
        'filemime' => 'image/png',
        'filesize' => 230731,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'e7a549ec-ce0f-4f74-b5b1-b3abacd6d399',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 386,
        'height' => 285,
        'uuid_features_file_url' => 'public://spa.png',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2015-02-09 15:41:52 +0600',
);
  return $nodes;
}
