(function ($) {
  Drupal.behaviors.customUploadButton = {
    attach: function (context, settings) {
      var input = $(':file'),
          btn = '<div class="customUploadBtn" title="Upload an Image">' + Drupal.t('Choose an Image') + '</div>';
      input.once('customUploadBtn', function () {
        input.wrap(btn);
      });
    }
  };
})(jQuery);

