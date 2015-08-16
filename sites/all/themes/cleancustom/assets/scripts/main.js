(function ($) {
  Drupal.behaviors.inputFileInit = {
    attach: function (context, settings) {
      $(":file").filestyle({
        icon: false,
        buttonText: Drupal.t('Избери файл'),
        buttonName: 'btn-small',
      });
    }
  };

  Drupal.behaviors.adImageInfo = {
    attach: function (context, settings) {
      var imageLink = $('.image-link');
      if (imageLink.length != 0) {
        $('.image-link').once('adImageInfo').magnificPopup({type:'image'});
      }
    }
  };

  Drupal.behaviors.toggleChangePass = {
    attach: function (context, settings) {
      $('#edit-pass-change-pass-title').once('pass-toggle').click(function(event) {
        $('.password-parent, .confirm-parent').slideToggle();
        $(this).children('h5').toggleClass('active');
      });
    }
  };
})(jQuery);

