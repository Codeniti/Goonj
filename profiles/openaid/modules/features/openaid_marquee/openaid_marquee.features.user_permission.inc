<?php
/**
 * @file
 * openaid_marquee.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openaid_marquee_user_default_permissions() {
  $permissions = array();

  // Exported permission: create marquee_content content
  $permissions['create marquee_content content'] = array(
    'name' => 'create marquee_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any marquee_content content
  $permissions['delete any marquee_content content'] = array(
    'name' => 'delete any marquee_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own marquee_content content
  $permissions['delete own marquee_content content'] = array(
    'name' => 'delete own marquee_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any marquee_content content
  $permissions['edit any marquee_content content'] = array(
    'name' => 'edit any marquee_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own marquee_content content
  $permissions['edit own marquee_content content'] = array(
    'name' => 'edit own marquee_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
