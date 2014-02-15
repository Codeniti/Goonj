/* Style Switcher */

window.console = window.console || (function(){
	var c = {}; c.log = c.warn = c.debug = c.info = c.error = c.time = c.dir = c.profile = c.clear = c.exception = c.trace = c.assert = function(){};
	return c;
})();

jQuery(document).ready(function(){ 
						   
var styleswitcherstr = ' \
	<div class="switcher-inner"> \
	<h2>Color Schemes <a href="#"></a></h2> \
    <div class="content"> \
    <div class="switcher-box"> \
	<ul class="color_schemes"> \
	<h3 class="skin_title"> Color Schemes</h3>\
	<li><a id="default" class="styleswitch color"> Default 	</a></li> \
	<li><a id="red" class="styleswitch color"> Red		</a></li> \
	<li><a id="green" class="styleswitch color"> Green	</a></li> \
	<li><a id="orange" class="styleswitch color"> Orange		</a></li> \
	<li><a id="purple" class="styleswitch color"> Purple	</a></li> \
    </ul> </div><!-- End switcher-box --> \
    </div><!-- End content --> \
	';
	
jQuery(".switcher").prepend( styleswitcherstr );

});

/* boxed & wide syle */
jQuery(document).ready(function(){ 

var cookieName = 'wide';

function changeLayout(layout) {
jQuery.cookie(cookieName, layout);
jQuery('head link[id=layout]').attr('href', 'css/layout/' + layout + '.css');
}

if( jQuery.cookie(cookieName)) {
changeLayout(jQuery.cookie(cookieName));
}

jQuery("#wide").click( function(){ jQuery
changeLayout('wide');
});

jQuery("#boxed").click( function(){ jQuery
changeLayout('boxed');
});

});


/* background images */
jQuery(document).ready(function(){ 
  
  var startClass = jQuery.cookie('mycookie');
  jQuery("body").addClass("default");

/* Default */
jQuery("#default").click( function(){ 
  jQuery("body").removeClass('red');
  jQuery("body").removeClass('green');
  jQuery("body").removeClass('orange');
  jQuery("body").removeClass('purple');
  jQuery.cookie('mycookie','default');
  $('#logo img').remove(); 
  $("<img src='images/logo.png' alt='Logo' />").prependTo('#logo a');
});

jQuery("#red").click( function(){ 
  jQuery("body").removeClass('default');
  jQuery("body").removeClass('green');
  jQuery("body").removeClass('orange');
  jQuery("body").removeClass('purple');
  jQuery.cookie('mycookie','red');
  $('#logo img').remove(); 
  $("<img src='images/red/logo.png' alt='Logo' />").prependTo('#logo a');
});

jQuery("#green").click( function(){ 
  jQuery("body").removeClass('default');
  jQuery("body").removeClass('red');
  jQuery("body").removeClass('orange');
  jQuery("body").removeClass('purple');
  jQuery.cookie('mycookie','green');
  $('#logo img').remove(); 
  $("<img src='images/green/logo.png' alt='Logo' />").prependTo('#logo a');
});
 
 jQuery("#orange").click( function(){ 
  jQuery("body").removeClass('default');
  jQuery("body").removeClass('red');
  jQuery("body").removeClass('green');
  jQuery("body").removeClass('purple');
  jQuery.cookie('mycookie','orange');
  $('#logo img').remove(); 
  $("<img src='images/orange/logo.png' alt='Logo' />").prependTo('#logo a');
});

 jQuery("#purple").click( function(){ 
  jQuery("body").removeClass('default');
  jQuery("body").removeClass('red');
  jQuery("body").removeClass('green');
  jQuery("body").removeClass('orange');
  jQuery.cookie('mycookie','purple');
  $('#logo img').remove(); 
  $("<img src='images/purple/logo.png' alt='Logo' />").prependTo('#logo a');
});

if (jQuery.cookie('mycookie')) {
  jQuery('body').addClass(jQuery.cookie('mycookie'));
}

});

/* Skins Style */
jQuery(document).ready(function(){ 

var cookieName = 'default';

function changeLayout(layout) {
jQuery.cookie(cookieName, layout);
jQuery('head link[id=skins]').attr('href', 'css/skins/' + layout + '.css');
}

if( jQuery.cookie(cookieName)) {
changeLayout(jQuery.cookie(cookieName));
}

jQuery("#default").click( function(){ jQuery
	changeLayout('default');
});

jQuery("#red").click( function(){ jQuery
	changeLayout('red');
});

jQuery("#green").click( function(){ jQuery
	changeLayout('green');
});

jQuery("#orange").click( function(){ jQuery
	changeLayout('orange');
});
jQuery("#purple").click( function(){ jQuery
	changeLayout('purple');
});

});



/* Reset Switcher */
jQuery(document).ready(function(){ 

// Style Switcher	
	jQuery('.switcher').animate({right: '-175px'});

	jQuery('.switcher h2 a').click(function(e){
	e.preventDefault();
	var div = jQuery('.switcher');
	// console.log(div.css('left'));
	if (div.css('right') === '-175px') 
		{
		jQuery('.switcher').animate({  right: '0px'}); 
		} else 
		{	jQuery('.switcher').animate({  right: '-175px'});
		}
	})
 
});