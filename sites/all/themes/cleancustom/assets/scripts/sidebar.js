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
    var elScroll = el.parent('.panel-pane').offset().top - 50;
    if (el.hasClass('active')) {
      el.removeClass('active').slideUp();
      trigger.removeClass('active');
      scrollToEL(elScroll);
    }
    else {
      var prevActiveHeight = $('.pane-content.active').height() ? $('.pane-content.active').height() : 0;
      elements.removeClass('active').slideUp();
      triggers.removeClass('active');
      el.addClass('active').slideDown();
      trigger.addClass('active');
      scrollToEL(elScroll - prevActiveHeight);
    }
  }
  Drupal.behaviors.sidebarToggle = {
    attach: function (context, settings) {
      var sidebarContent = $('.sidebar-left .pane-content'),
          paneTitles = $('.sidebar-left .pane-title');
      $('.sidebar-left .pane-title').once('sidebar-el-toggle').click(function (event) {
        var $this = $(this),
            el = $this.next();
        sidebarToggleFunc(el, sidebarContent, $this, paneTitles);
      });
    }
  }
})(jQuery);