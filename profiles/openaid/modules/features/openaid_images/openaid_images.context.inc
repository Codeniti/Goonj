<?php
/**
 * @file
 * openaid_images.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_images_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'image_gallery';
  $context->description = 'Image Gallery - Individual Gallery Pages';
  $context->tag = 'section';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'openaid_image_gallery:page' => 'openaid_image_gallery:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4253c177630d349442d8e20b663b6bf3' => array(
          'module' => 'views',
          'delta' => '4253c177630d349442d8e20b663b6bf3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Gallery - Individual Gallery Pages');
  t('section');
  $export['image_gallery'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'image_menu';
  $context->description = 'image gallery menu and breadcrumb';
  $context->tag = 'section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photo-gallery' => 'photo-gallery',
        'photo-gallery/*' => 'photo-gallery/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'image_gallery' => 'image_gallery',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'photo-gallery',
    'menu' => 'photo-gallery',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('image gallery menu and breadcrumb');
  t('section');
  $export['image_menu'] = $context;

  return $export;
}
