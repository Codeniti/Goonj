<?php
/**
 * @file
 * openaid_marquee.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_marquee_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marquee_front';
  $context->description = 'Add a rotating marquee to the front page';
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
        'views-rotating_marquee-block' => array(
          'module' => 'views',
          'delta' => 'rotating_marquee-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a rotating marquee to the front page');
  t('page');
  $export['marquee_front'] = $context;

  return $export;
}
