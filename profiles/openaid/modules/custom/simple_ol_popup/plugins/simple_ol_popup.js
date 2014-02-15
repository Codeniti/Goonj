(function ($) {

 /**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Javascript Drupal Theming function for inside of Popups
 *
 * To override
 *
 * @param feature
 *  OpenLayers feature object.
 * @return
 *  Formatted HTML.
 */
Drupal.theme.prototype.simpleOlPopup = function(feature) {
  var output = '';
  
  if (feature.attributes.name) {
    output += '<div class="openlayers-popup openlayers-tooltip-name">' + feature.attributes.name + '</div>';
  }
  if (feature.attributes.description) {
    output += '<div class="openlayers-popup openlayers-tooltip-description">' + feature.attributes.description + '</div>';
  }
  
  return output;
};

// Make sure the namespace exists
Drupal.openlayers.simple_ol_popup = Drupal.openlayers.simple_ol_popup || {};

/**
 * OpenLayers Popup Behavior
 */
Drupal.openlayers.addBehavior('simple_ol_popup', function (data, options) {
  var map = data.openlayers;
  var layers = [];

  // For backwards compatiability, if layers is not
  // defined, then include all vector layers
  if (typeof options.layers == 'undefined' || options.layers.length == 0) {
    layers = map.getLayersByClass('OpenLayers.Layer.Vector');
  }
  else {
    for (var i in options.layers) {
      var selectedLayer = map.getLayersBy('drupalID', options.layers[i]);
      if (typeof selectedLayer[0] != 'undefined') {
        layers.push(selectedLayer[0]);
      }
    }
  }        

  // Show the popup label:
  var popupLabel = new OpenLayers.Control.SelectFeature(layers,
    {   
      hover: true,  
      highlightOnly: true,
      eventListeners: {
        featurehighlighted :  function(e) {       
          
          var feature = e.feature;
          var lonLat = new OpenLayers.LonLat(feature.geometry.x, feature.geometry.y);
          var pos = map.getPixelFromLonLat(lonLat);

          var popup = $('<div id="simple-ol-popup" class="simple-ol-popup"><div class="inner">' + feature.data.title_rendered + '</div></div>').hide();
          $(map.div).append(popup);

          popup.css({
             position : 'absolute',
             left : pos.x - Math.ceil(popup.width() / 2),
             top : pos.y - (popup.height()), 
             'z-index' : 2000
          });         
          popup.show();          
        },
        featureunhighlighted : function(e) {
          $(map.div).find('.simple-ol-popup').remove();
        }
      }      
    }
  );  
  
  // Handle clicks: 
  var popupClick = new OpenLayers.Control.SelectFeature(layers,
    {    
      hover : false,
      onSelect: function(feature) {  
        $(map.div).find('.simple-ol-popup').remove();        
        var href = $(feature.data.title_rendered).attr('href');
        if (href) {
          window.location.href = href;
        }       
      }
    }
  );  
                        
  
  map.addControl(popupLabel);
  popupLabel.activate();  

  map.addControl(popupClick);
  popupClick.activate();  


  Drupal.openlayers.simple_ol_popup.popupLabel = popupLabel;
  Drupal.openlayers.simple_ol_popup.popupClick = popupClick;  
  
  
});

})(jQuery); //$