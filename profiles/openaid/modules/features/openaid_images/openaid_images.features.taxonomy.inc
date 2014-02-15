<?php
/**
 * @file
 * openaid_images.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openaid_images_taxonomy_default_vocabularies() {
  return array(
    'image_gallery' => array(
      'name' => 'Image Gallery',
      'machine_name' => 'image_gallery',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
