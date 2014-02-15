                                                                <?php
/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * Ctools plugin definition.
 */
$plugin = array(
  'title' => t('Custom Pop Up for Features'),
  'description' => t('Adds clickable info boxes to points or shapes on maps.  '),
  'type' => 'layer',
  'behavior' => array(
    'file' => 'simple_ol_popup.inc',
    'class' => 'simple_ol_popup',
    'parent' => 'openlayers_behavior',
  ),
);

/**
 * Attribution Behavior
 */
class simple_ol_popup extends openlayers_behavior {
  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'layers' => array(),
    );
  }

  /**
   * Form defintion for per map customizations.
   */
  function options_form($defaults) {
    // Only prompt for vector layers
    $vector_layers = array();
    foreach ($this->map['layers'] as $id => $name) {
      $layer = openlayers_layer_load($id);
      if (isset($layer->data['vector']) && $layer->data['vector'] == TRUE) {
        $vector_layers[$id] = $name;
      }
    }

    return array(
      'layers' => array(
        '#title' => t('Layers'),
        '#type' => 'checkboxes',
        '#options' => $vector_layers,
        '#description' => t('Select layer to apply popups to.'),
        '#default_value' => isset($defaults['layers']) ? 
          $defaults['layers'] : array(),
      ),
    );
  }

  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'simple_ol_popup') . '/plugins/simple_ol_popup.js');
    return $this->options;
  }
}
