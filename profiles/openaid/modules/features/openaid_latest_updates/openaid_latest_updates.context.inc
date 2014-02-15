<?php
/**
 * @file
 * openaid_latest_updates.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_latest_updates_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'latest_updates_front';
  $context->description = 'Latest Updates Block for Front Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-latest_updates-block' => array(
          'module' => 'views',
          'delta' => 'latest_updates-block',
          'region' => 'content',
          'weight' => '4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Latest Updates Block for Front Page');
  t('page');
  $export['latest_updates_front'] = $context;

  return $export;
}
