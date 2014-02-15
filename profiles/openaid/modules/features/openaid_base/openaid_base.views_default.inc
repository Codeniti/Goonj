<?php
/**
 * @file
 * openaid_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openaid_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attached_files';
  $view->description = 'Show a node\'s attached files in a block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attached Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_file_attachments']['id'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['table'] = 'field_data_field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['field'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_file_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_attachments']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_file_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_file_attachments']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Files (field_file_attachments:fid) */
  $handler->display->display_options['filters']['field_file_attachments_fid']['id'] = 'field_file_attachments_fid';
  $handler->display->display_options['filters']['field_file_attachments_fid']['table'] = 'field_data_field_file_attachments';
  $handler->display->display_options['filters']['field_file_attachments_fid']['field'] = 'field_file_attachments_fid';
  $handler->display->display_options['filters']['field_file_attachments_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['attached_files'] = $view;

  return $export;
}
