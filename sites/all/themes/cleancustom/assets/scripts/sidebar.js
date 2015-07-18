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
  function sidebarToggleFunc (el, elements, trigger, triggers) {
    var elScroll = el.parent('.panel-pane').offset().top;
    if (el.hasClass('active')) {
      el.removeClass('active').slideUp();
      trigger.removeClass('active');
      scrollToEL(elScroll);
    }
    else {
      elements.removeClass('active').slideUp();
      triggers.removeClass('active');
      el.addClass('active').slideDown();
      trigger.addClass('active');
      scrollToEL(elScroll);
    }
  }
  Drupal.behaviors.sidebarToggle = {
    attach: function (context, settings) {
      var sidebarContent = $('.sidebar-left .pane-content'),
          paneTitles = $('.sidebar-left .pane-title');
      $('.sidebar-left .pane-title').click(function (event) {
        var $this = $(this),
            el = $this.next();
        sidebarToggleFunc(el, sidebarContent, $this, paneTitles);
      });
    }
  }
})(jQuery);