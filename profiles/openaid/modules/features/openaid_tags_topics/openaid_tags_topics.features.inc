<?php
/**
 * @file
 * openaid_tags_topics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openaid_tags_topics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
