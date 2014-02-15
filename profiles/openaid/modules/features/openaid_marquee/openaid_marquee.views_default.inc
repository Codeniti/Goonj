<?php
/**
 * @file
 * openaid_marquee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openaid_marquee_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'rotating_marquee';
  $view->description = 'Displays a rotating marquee of marquee content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rotating Marquee';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_file']['id'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['table'] = 'field_data_field_image_file';
  $handler->display->display_options['fields']['field_image_file']['field'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['label'] = '';
  $handler->display->display_options['fields']['field_image_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_file']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_file']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_file']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_file']['settings'] = array(
    'image_style' => 'marquee',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_file']['field_api_classes'] = 0;
  /* Field: Content: Read More URL */
  $handler->display->display_options['fields']['field_link_website_1']['id'] = 'field_link_website_1';
  $handler->display->display_options['fields']['field_link_website_1']['table'] = 'field_data_field_link_website';
  $handler->display->display_options['fields']['field_link_website_1']['field'] = 'field_link_website';
  $handler->display->display_options['fields']['field_link_website_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_website_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_website_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_website_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_website_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_website_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_website_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_website_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_website_1]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Read More URL */
  $handler->display->display_options['fields']['field_link_website']['id'] = 'field_link_website';
  $handler->display->display_options['fields']['field_link_website']['table'] = 'field_data_field_link_website';
  $handler->display->display_options['fields']['field_link_website']['field'] = 'field_link_website';
  $handler->display->display_options['fields']['field_link_website']['label'] = '';
  $handler->display->display_options['fields']['field_link_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_website']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_website']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_website']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
[body]
[field_link_website]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marquee_content' => 'marquee_content',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Rotating Marquee';
  $export['rotating_marquee'] = $view;

  return $export;
}
