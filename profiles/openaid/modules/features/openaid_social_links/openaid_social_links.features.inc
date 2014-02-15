<?php
/**
 * @file
 * openaid_social_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openaid_social_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
