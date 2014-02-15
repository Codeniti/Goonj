<?php
/**
 * @file
 * openaid_resources_solr.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_resources_solr_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_default';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'content',
          'weight' => '-32',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['resources_default'] = $context;
  
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_solr';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'resources/*' => 'resources/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search_block-apachesolr_search_block' => array(
          'module' => 'apachesolr_search_block',
          'delta' => 'apachesolr_search_block',
          'region' => 'sidebar_first',
          'weight' => '-32',
        ),
        'facetapi-jWfl3kkhN06rVl2JJcVQE3uf4ZgWHm0d' => array(
          'module' => 'facetapi',
          'delta' => 'jWfl3kkhN06rVl2JJcVQE3uf4ZgWHm0d',
          'region' => 'sidebar_first',
          'weight' => '-31',
        ),
        'facetapi-p5ktS8tHWfiKow7pMGDoz8bAZw1bmtgE' => array(
          'module' => 'facetapi',
          'delta' => 'p5ktS8tHWfiKow7pMGDoz8bAZw1bmtgE',
          'region' => 'sidebar_first',
          'weight' => '-30',
        ),
        'openaid_resources_extra-resources_extra_solr_info' => array(
          'module' => 'openaid_resources_extra',
          'delta' => 'resources_extra_solr_info',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['resources_solr'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_solr_only';
  $context->description = 'Context for resources page when search terms or facets are present';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'resources/*' => 'resources/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'content',
          'weight' => '-32',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for resources page when search terms or facets are present');
  t('page');
  $export['resources_solr_only'] = $context;

  return $export;
}
