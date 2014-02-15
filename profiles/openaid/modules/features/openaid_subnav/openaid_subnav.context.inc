<?php
/**
 * @file
 * openaid_subnav.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_subnav_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subnav';
  $context->description = 'Sub-navigation block';
  $context->tag = 'block';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sub-navigation block');
  t('block');
  $export['subnav'] = $context;

  return $export;
}
