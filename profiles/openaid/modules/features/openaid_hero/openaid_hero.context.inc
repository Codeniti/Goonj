<?php
/**
 * @file
 * openaid_hero.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_hero_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hero_front';
  $context->description = '';
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
        'hero_statement-hero_statement' => array(
          'module' => 'hero_statement',
          'delta' => 'hero_statement',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['hero_front'] = $context;

  return $export;
}
