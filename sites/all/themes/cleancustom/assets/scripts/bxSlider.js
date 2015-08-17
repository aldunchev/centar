(function ($) {

  Drupal.behaviors.bxSliderTheme = {
    attach: function (context, settings) {
      var offerImages = $('.field-name-field-offer-images img');
    
      $('.field-name-field-offer-images .field-items').bxSlider({
        buildPager: function(slideIndex){
          switch(slideIndex){
            case slideIndex:
              return '<img src="' + offerImages[slideIndex].src+'">';
          }
        }
      });
    }
  };
})(jQuery);
