/**
 * @file
 * Sidebar behavior under 1024px sreen width.
 */

(function ($) {
  function scrollToEL (el) {
    $('html, body').animate({
      scrollTop: el
    }, 750);
  }
  function sidebarToggleFunc (el, elements) {
    var elScroll = el.parent('.panel-pane').offset().top;
    if (el.hasClass('active')) {
      el.removeClass('active').slideUp();
      scrollToEL(elScroll);
    }
    else {
      elements.removeClass('active').slideUp();
      el.addClass('active').slideDown();
      scrollToEL(elScroll);
    }
  }
  Drupal.behaviors.sidebarToggle = {
    attach: function (context, settings) {
      var sidebarContent = $('.sidebar-left .pane-content');
      $('.sidebar-left .pane-title').click(function (event) {
        var el = $(this).next();
        sidebarToggleFunc(el, sidebarContent);
      });
    }
  }
})(jQuery);