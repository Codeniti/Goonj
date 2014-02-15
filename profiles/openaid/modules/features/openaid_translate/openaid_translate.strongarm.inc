<?php
/**
 * @file
 * openaid_translate.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openaid_translate_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_alternate_button_image_path';
  $strongarm->value = '';
  $export['translate_this_alternate_button_image_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_available_languages';
  $strongarm->value = array(
    'ar' => 'ar',
    'zh-CN' => 'zh-CN',
    'cs' => 'cs',
    'en' => 'en',
    'fr' => 'fr',
    'de' => 'de',
    'el' => 'el',
    'iw' => 'iw',
    'hi' => 'hi',
    'it' => 'it',
    'ja' => 'ja',
    'ko' => 'ko',
    'pt-PT' => 'pt-PT',
    'ru' => 'ru',
    'es' => 'es',
    'vi' => 'vi',
    'af' => 0,
    'sq' => 0,
    'be' => 0,
    'bg' => 0,
    'ca' => 0,
    'zh-TW' => 0,
    'hr' => 0,
    'da' => 0,
    'nl' => 0,
    'et' => 0,
    'fi' => 0,
    'gl' => 0,
    'hu' => 0,
    'is' => 0,
    'id' => 0,
    'ga' => 0,
    'lv' => 0,
    'lt' => 0,
    'mk' => 0,
    'ms' => 0,
    'mt' => 0,
    'no' => 0,
    'fa' => 0,
    'pl' => 0,
    'ro' => 0,
    'sr' => 0,
    'sk' => 0,
    'sl' => 0,
    'sw' => 0,
    'sv' => 0,
    'tl' => 0,
    'th' => 0,
    'tr' => 0,
    'uk' => 0,
    'cy' => 0,
    'yi' => 0,
  );
  $export['translate_this_available_languages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_busy_translating_text';
  $strongarm->value = 'Translating page…';
  $export['translate_this_busy_translating_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_button_height';
  $strongarm->value = '';
  $export['translate_this_button_height'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_button_width';
  $strongarm->value = '';
  $export['translate_this_button_width'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_cancel_translating_text';
  $strongarm->value = 'cancel';
  $export['translate_this_cancel_translating_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_disable_button_image';
  $strongarm->value = 1;
  $export['translate_this_disable_button_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_disable_flag_thumbnails';
  $strongarm->value = 1;
  $export['translate_this_disable_flag_thumbnails'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_from_language';
  $strongarm->value = 'en';
  $export['translate_this_from_language'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_main_panel_text';
  $strongarm->value = 'Translate into:';
  $export['translate_this_main_panel_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_more_languages_text';
  $strongarm->value = 'More languages »';
  $export['translate_this_more_languages_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_scope';
  $strongarm->value = '';
  $export['translate_this_scope'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_undo_text';
  $strongarm->value = 'Undo »';
  $export['translate_this_undo_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_use_cookie';
  $strongarm->value = 1;
  $export['translate_this_use_cookie'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translate_this_use_default_languages';
  $strongarm->value = 0;
  $export['translate_this_use_default_languages'] = $strongarm;

  return $export;
}
