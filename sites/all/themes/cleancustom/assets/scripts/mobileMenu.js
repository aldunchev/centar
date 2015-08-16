(function ($) {
  function swapMenus (menu, underlay) {
    if (menu.hasClass('expanded')) {
      menu.removeClass('expanded');
    }
    else {
      underlay.toggleClass('expanded');
    }
  }
  Drupal.behaviors.mobileMenus = {
    attach: function (context, settings) {
      var underlay = $('#underlay'),
          headerMenuMobile = $('#header-menu-mobile'),
          mobileMenuBars = $('#mobile-menu-bars'),
          searchTrigger = $('#search-trigger'),
          searchBlock = $('.search-block');

      mobileMenuBars.click(function () {
        swapMenus(searchBlock, underlay);
        headerMenuMobile.toggleClass('expanded');
      });
      searchTrigger.click(function () {
        swapMenus(headerMenuMobile, underlay);
        searchBlock.toggleClass('expanded');
      });
    }
  };
})(jQuery);