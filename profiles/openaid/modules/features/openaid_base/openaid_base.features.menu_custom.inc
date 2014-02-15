<?php
/**
 * @file
 * openaid_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openaid_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => 'The footer menu contains links which appear above the site copyright information',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('The footer menu contains links which appear above the site copyright information');


  return $menus;
}
