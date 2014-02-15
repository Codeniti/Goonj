<?php
/**
 * @file
 * openaid_tags_topics.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_tags_topics_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tags_topics_search';
  $context->description = 'Adds tags and topics facets to search page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT' => array(
          'module' => 'facetapi',
          'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-R3lWVKZ0loVbYjsmiQUwPYESeoFz9xTm' => array(
          'module' => 'facetapi',
          'delta' => 'R3lWVKZ0loVbYjsmiQUwPYESeoFz9xTm',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds tags and topics facets to search page');
  t('page');
  $export['tags_topics_search'] = $context;

  return $export;
}
