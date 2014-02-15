<?php
/**
 * @file
 * openaid_projects.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_projects_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openaid_project_map';
  $context->description = 'Front page and project page';
  $context->tag = 'page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'project' => 'project',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openaid_projects-block_1' => array(
          'module' => 'views',
          'delta' => 'openaid_projects-block_1',
          'region' => 'sidebar_first',
          'weight' => '15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page and project page');
  t('page');
  $export['openaid_project_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_menu';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'project' => 'project',
        'project/*' => 'project/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'project',
    'menu' => 'project',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['project_menu'] = $context;

  return $export;
}
