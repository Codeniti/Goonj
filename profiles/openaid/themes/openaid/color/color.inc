<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'openaid'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(            
    'nav_bottom' => t('Main Nav - bottom of gradient'),
    'nav_top' => t('Main Nav - top of gradient'),  
    'base' => t('Base color'),
    'link' => t('Link color'),
    'text' => t('Text color'),
    /*
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),*/
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('OpenAid'),
      'colors' => array(
        'nav_bottom' => '#8cbc1a',
        'nav_top' => '#b1d233',
        'base' => '#9cc524',
        'link' => '#33679a',
        'text' => '#4f5b7c',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/screen.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
