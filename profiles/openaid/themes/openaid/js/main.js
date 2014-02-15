(function ($) {
  
  Drupal.behaviors.openaid = {
    attach: function() {          
      if (Drupal.settings.openaid) {
        $('h1.page-title').before($('<a class="slideshow" href="#slideshow"><span>Slideshow</span></a>').click(function(){
          $.fancybox(
            Drupal.settings.openaid['gallery'], {
              margin: 40,
              titleFormat: function(title, currentArray, currentIndex, currentOpts){
                return "<div id='fancybox-title-" + currentOpts.titlePosition + "'><div class='title'>" + currentOpts.title +"</div></div>";
              }
            }
          );
          return false;
        }));
      }
    }
  }
  
  $(document).ready(function(){

    if( $("#block-views-partners-block").length > 0 ){
      scrollUpdates();
    }
    
    // Remove top border to blog list...weird issue with load more module.
    if($('.blog-list').length > 0) {
      
      $('.blog-list li:first-child').addClass('first');
      
    } //if
    
    $('a[href][rel=twipsy]').twipsy({animate: false});
    
    // Don't click the item
    if($('.caption').length > 0) {
      
      // $('.feature-callout').find('.caption').click(function(){
      //     return false;
      //   });
      
    } //if
 
   }); //document.ready
   
   /*----------------------------------------------------------------------------------------------------

   Scroll Updates

   ----------------------------------------------------------------------------------------------------*/

   var updatesScrollFactor = 3;
   var updatesScrolling = false;
   var updatesScrollIndex = 0;

   function scrollUpdates() {
     var content = $("#block-views-partners-block").find(".view-content");
     content.wrapInner("<div class='view-scrolling-container'><div class='view-scrolling'></div></div>"); 
     content.find('.view-scrolling-container').css({position: 'relative', height: '321px', overflow: 'hidden' });   
     content.find('.view-scrolling').css({position: 'absolute'});
     var previous = $("<a href='#' class='previous'>Previous</a>").click(function(){
       switchUpdates(-1);
       return false;
     });
     var next = $("<a href='#' class='next'>Next</a>").click(function(){
       switchUpdates(1);
       return false;
     });
     content.prepend(previous).append(next);
     switchUpdates(0, true);
   }

   function switchUpdates(dir, force) {
     var newUpdatesScrollIndex = Math.max(0, updatesScrollIndex + dir*updatesScrollFactor);
     if(newUpdatesScrollIndex >= $("#block-views-partners-block").find(".view-scrolling").find(".views-row").length) {
       newUpdatesScrollIndex -= updatesScrollFactor;
     }
     if((!updatesScrolling && newUpdatesScrollIndex != updatesScrollIndex) || force){
       updatesScrolling = true;
       updatesScrollIndex = newUpdatesScrollIndex;
       if(updatesScrollIndex + updatesScrollFactor >= $("#block-views-partners-block").find(".view-scrolling").find(".views-row").length) {
         $("#block-views-partners-block").find(".next").addClass("disabled");
       } else {
         $("#block-views-partners-block").find(".next").removeClass("disabled");
       }
       if(updatesScrollIndex == 0){
         $("#block-views-partners-block").find(".previous").addClass("disabled");
       } else {
         $("#block-views-partners-block").find(".previous").removeClass("disabled");
       }

       var t = -($("#block-views-partners-block").find(".view-scrolling").find(".views-row").eq(updatesScrollIndex).position().top);
       
       //  Slide the Updates
       $("#block-views-partners-block").find(".view-scrolling").animate({
         top: t
       },500, function(){ updatesScrolling = false; })

       //  Fade Out Updates
       $("#block-views-partners-block").find(".view-scrolling").find(".views-row").each(function(ind){
         var hidden = .5;
         if($.browser.msie) {
           if($.browser.version < 8){
             hidden = 0;
           }
         }
         var a = (ind >= updatesScrollIndex && ind < updatesScrollIndex + updatesScrollFactor) ? 1 : hidden;
         $(this).animate({
           opacity: a
         }, 500);
       })
     }
   }   

 })(jQuery); //$
