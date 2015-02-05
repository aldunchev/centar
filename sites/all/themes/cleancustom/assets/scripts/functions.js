(function ($) {
  Drupal.behaviors.customUploadButton = {
    attach: function () {
      var input = $(':file'),
          btn = '<div class="customUploadBtn" title="Upload an Image">' + Drupal.t('Choose an Image') + '</div>';
      input.once('customUploadBtn', function () {
        input.before(btn);
        $(this).bind('change', function (e) {
          input.after('<div class="fileName">' + e.target.files[0].name + '</div>');
        });
      });
    }
  };
})(jQuery);

