<?php
/**
 * @file
 * feature_blocks_settings_export.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_blocks_settings_export_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sharethis_block_view_mode';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'about' => 'about',
        'article' => 'article',
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'unit/*' => 'unit/*',
        '~node/add' => '~node/add',
        '~*/edit' => '~*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sharethis_block_view_mode'] = $context;

  return $export;
}
