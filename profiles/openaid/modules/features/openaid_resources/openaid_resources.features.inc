<?php
/**
 * @file
 * openaid_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openaid_resources_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function openaid_resources_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openaid_resources_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('A resource.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
