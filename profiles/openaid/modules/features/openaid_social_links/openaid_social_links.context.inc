<?php
/**
 * @file
 * openaid_social_links.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_social_links_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'social_front';
  $context->description = 'Adds the social links block to the front page';
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
        'social_links-social_links' => array(
          'module' => 'social_links',
          'delta' => 'social_links',
          'region' => 'sidebar_first',
          'weight' => '20',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds the social links block to the front page');
  t('page');
  $export['social_front'] = $context;

  return $export;
}
