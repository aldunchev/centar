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
})(jQuery);

