(function ($) {
  Drupal.behaviors.inputFileInit = {
    attach: function (context, settings) {
      $(":file").filestyle({
        icon: false,
        buttonText: Drupal.t('Избери файл'),
        buttonName: 'btn-small'
      });
    }
  };

  Drupal.behaviors.adImageInfo = {
    attach: function (context, settings) {
      $('.image-link').magnificPopup({type:'image'});
    }
  };
})(jQuery);

