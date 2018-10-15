<?php
/**
 * @file
 * feature_ask_a_question_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function feature_ask_a_question_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Ask a question',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4737c91a-8a33-43eb-b77b-9b0b29586095',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1418349711,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '895105b0-41e4-4980-a370-9d52b0d4d202',
  'revision_uid' => 1,
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
  'webform' => array(
    'nid' => 18,
    'next_serial' => 2,
    'confirmation' => 'Thank you, your submission has been received.',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<none>',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'SEND',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'filtered_html',
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
      2 => 3,
    ),
    'emails' => array(
      1 => array(
        'nid' => 18,
        'eid' => 1,
        'email' => 'easybooking@easybooking.com',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => FALSE,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 18,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'you_name',
        'name' => 'Your name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => 50,
          'placeholder' => 'Your name',
          'maxlength' => 50,
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 18,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => 50,
          'placeholder' => 'Email',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 18,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'resizable' => 0,
          'placeholder' => 'Message',
          'cols' => '',
          'rows' => '',
          'disabled' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-12-12 02:01:51 +0000',
);
  return $nodes;
}
