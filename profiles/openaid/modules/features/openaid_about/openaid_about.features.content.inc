<?php
/**
 * @file
 * openaid_about.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openaid_about_content_defaults() {
$content = array();
$content['about'] = (object)array(
  'exported_path' => 'about',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/about',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'identifier' => 'main-menu:node-name/about',
  ),
  'title' => 'About',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1325701860',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'about',
  'body' => array(),
);
return $content;
}
