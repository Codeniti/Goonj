<?php
/**
 * @file
 * openaid_resources_list_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_resources_list_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_list';
  $context->description = 'Resources View Listing Page';
  $context->tag = 'page';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resources_list:page' => 'resources_list:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-resources_list-page' => array(
          'module' => 'views',
          'delta' => '-exp-resources_list-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources View Listing Page');
  t('page');
  $export['resources_list'] = $context;

  return $export;
}
