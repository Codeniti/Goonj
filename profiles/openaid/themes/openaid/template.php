<?php                   

/**
 * Implements theme_process_html().
 */
function openaid_process_html(&$vars) {

  // Hook into color.module
  if (module_exists('color')) {
    _color_html_alter($vars);
  } // if

} // openaid_process_html

function openaid_preprocess_page(&$vars) { 
  if ($vars['main_menu']) {
    $tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    foreach(element_children($tree) as $key) {
      if ($tree[$key]['#below']) {
        $result = db_select('menu_links', NULL, array('fetch' => PDO::FETCH_ASSOC))
          ->fields('menu_links', array('expanded'))
          ->condition('mlid', $key)
          ->execute()->fetchObject();
        if (!$result->expanded) {
          $tree[$key]['#below'] = array();
          $expanded_class_index = array_search('expanded', $tree[$key]['#attributes']['class']);
          if ($expanded_class_index !== FALSE) {
            unset($tree[$key]['#attributes']['class'][$expanded_class_index]);
          }
        }
      }
    }
    $vars['main_menu'] = drupal_render($tree);
  }
}

function openaid_breadcrumb(&$vars) {  
  if (count($vars['breadcrumb']) > 0) {
    $title = drupal_get_title();
    $last_item = $vars['breadcrumb'][count($vars['breadcrumb']) - 1];
    if (strpos($last_item, $title) === FALSE) {
      $vars['breadcrumb'][] = $title;
    }
    return theme('item_list', array('items' => $vars['breadcrumb']));    
  }
}

function openaid_preprocess_node(&$vars) { 
  
  if ($vars['page'] && isset($vars['node']->field_preview_image_on_post)) {
    if ($vars['node']->field_preview_image_on_post[$vars['node']->language][0]['value'] != TRUE) {
      unset($vars['content']['field_preview_image']);
    }
  }
  
  if (isset($vars['content']['field_image_galleries'])) {
    $galleries = $vars['content']['field_image_galleries'];
    foreach (element_children($vars['content']['field_image_galleries']) as $index) {
      $vars['content']['field_image_galleries'][$index]['#markup'] = l($vars['content']['field_image_galleries'][$index]['#markup'], 'photo-gallery/' . strtolower(str_replace(' ', '-', strip_tags($vars['content']['field_image_galleries'][$index]['#markup']))));
    }
  }
  
  if (isset($vars['node_embedded'])) {
    $vars['theme_hook_suggestions'][] = 'node__embed';
    $vars['theme_hook_suggestions'][] = 'node__embed__' . $vars['type'];    
    $vars['content']['field_image_file'][0]['#image_style'] = 'content-inline';
    if ($vars['type'] == 'image') {
      $style_name = $vars['content']['field_image_file'][0]['#image_style'];
      $vars['image_style'] = $style_name;
    }
  }
  $names = node_type_get_names();
  $vars['submitted'] = '<span class="type">' . $names[$vars['type']] . '</span> ' . format_date($vars['created']);
}
     
function openaid_preprocess_search_results(&$vars) {
  if ($vars['module'] == 'apachesolr_search') { 
    $vars['title'] = '';
  }
  else {
    $vars['title'] = t('Search Results');
  }
}

function openaid_preprocess_search_result(&$vars) {
  unset($vars['info_split']['user'], $vars['info_split']['comments']);
  $vars['info_split']['date'] = t('Posted on:') . ' ' . format_date(strtotime($vars['info_split']['date']));
  $vars['info'] = join(' - ', $vars['info_split']);
}    

/**
 * Returns HTML for an active facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 */
function openaid_facetapi_link_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = '<strong>' . (($sanitize) ? check_plain($variables['text']) : $variables['text']) . '</strong>';

  // Adds count to link if one was passed.
  if (isset($variables['count'])) {
    $variables['text'] = theme('facetapi_count', $variables) . ' ' . $variables['text'];
  }

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}       

/**
 * Returns HTML for the inactive facet item's count.
 *
 * @param $variables
 *   An associative array containing:
 *   - count: The item's facet count.
 *
 * @ingroup themeable
 */
function openaid_facetapi_count($variables) {
  return '<span class="facet-count">' . (int) $variables['count'] . '</span>';
}    

/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', and 'options'. See
 *   the l() function for information about these variables.
 *
 * @ingroup themeable
 */
function openaid_facetapi_link_active($variables) {

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Theme function variables fro accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );

  // Builds link, passes through t() which gives us the ability to change the
  // position of the widget on a per-language basis.
  $replacements = array(
    '!facetapi_deactivate_widget' => theme('facetapi_deactivate_widget'),
    '!facetapi_accessible_markup' => theme('facetapi_accessible_markup', $accessible_vars),
  );
  $variables['text'] = t('!facetapi_deactivate_widget !facetapi_accessible_markup', $replacements) . ' <strong>' . $link_text . '</strong>';
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}

/**
 * Returns HTML for the deactivation widget.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The text of the facet link.
 *
 * @ingroup themable
 */
function openaid_facetapi_deactivate_widget($variables) {
  return '<span class="facet-remove">-</span>';
}

function openaid_preprocess_views_view(&$vars) {
  if ($vars['view']->name == 'affiliate_image_gallery') {
    $view = views_get_view('affiliate_image_gallery');
    $view->set_display('slideshow');
    $view->set_arguments(array(arg(1)));
    $view->execute();
    $slideshow_data = array();
    foreach ($view->result as $r) {
      $slideshow_data[] = array(
        'href' => file_create_url($r->field_field_image_file[0]['raw']['uri']),
        'title' => $r->node_title,
      );
    }
    drupal_add_js(array('openaid' => array('gallery' => $slideshow_data)), 'setting');
  }
} 

function openaid_apachesolr_search_noresults() {
    return '<div class="no-results">' . t('<ul>
  <li>Check if your spelling is correct, or try removing filters.</li>
  <li>Remove quotes around phrases to match each word individually: <em>"blue drop"</em> will match less than <em>blue drop</em>.</li>
  <li>You can require or exclude terms using + and -: <em>big +blue drop</em> will require a match on <em>blue</em> while <em>big blue -drop</em> will exclude results that contain <em>drop</em>.</li>
  </ul>') . '</div>';  
}
