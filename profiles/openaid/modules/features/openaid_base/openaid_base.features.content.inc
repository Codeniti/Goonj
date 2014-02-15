<?php
/**
 * @file
 * openaid_base.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openaid_base_content_defaults() {
  $content = array();

  $content['front'] = (object) array(
    'exported_path' => 'content/home',
    'title' => 'Home',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1326138025,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'front',
    'body' => array(),
  );

  $content['page-not-found'] = (object) array(
    'exported_path' => 'content/page-not-found',
    'title' => 'Page Not Found',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1326138025,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'page-not-found',
    'body' => array(),
  );

  $content['rss'] = (object) array(
    'exported_path' => 'content/rss-feeds',
    'title' => 'RSS Feeds',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1326402911,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'rss',
    'body' => array(),
  );

return $content;
}
