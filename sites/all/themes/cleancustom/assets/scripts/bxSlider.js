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

      $('.user-offers-slider').bxSlider({
        slideWidth: 100,
        minSlides: 3,
        maxSlides: 3,
        slideMargin: 10
      });
    }
  };
})(jQuery);
