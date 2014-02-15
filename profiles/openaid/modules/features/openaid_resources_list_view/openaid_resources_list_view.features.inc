<?php
/**
 * @file
 * openaid_resources_list_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openaid_resources_list_view_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function openaid_resources_list_view_views_api() {
  return array("version" => "3.0");
}
