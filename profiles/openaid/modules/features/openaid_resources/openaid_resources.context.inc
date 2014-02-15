<?php
/**
 * @file
 * openaid_resources.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_resources_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_menu';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'resources/*' => 'resources/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources',
    'menu' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['resources_menu'] = $context;

  return $export;
}
