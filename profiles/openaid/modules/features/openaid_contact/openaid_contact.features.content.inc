<?php
/**
 * @file
 * openaid_contact.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openaid_contact_content_defaults() {
$content = array();
$content['contact'] = (object)array(
  'exported_path' => 'contact',
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(
      0 => array(
        'pid' => '0',
        'form_key' => 'from',
        'name' => 'From',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'page_num' => 1,
      ),
      1 => array(
        'pid' => '0',
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '1',
        'page_num' => 1,
      ),
    ),
  ),
  'title' => 'Contact',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1325604187',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'contact',
  'body' => array(),
);
return $content;
}
