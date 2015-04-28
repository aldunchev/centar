(function ($) {
  Drupal.behaviors.inputFileInit = {
    attach: function (context, settings) {
      $(":file").filestyle();
    }
  };
})(jQuery);

