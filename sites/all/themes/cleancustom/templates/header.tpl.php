<header role="banner" class="main-header">
  <div class="content container clearfix">
    <div class="header-bg">
      <div class="header-row clearfix">
        <?php print $fb_login_btn; ?>
        <?php print render($header_region); ?>
        <div class="help-menu fl-right clearfix"><?php print $help_menu; ?></div>
      </div>
      <?php if($logo) : ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo fl-left">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>">
        </a>
      <?php endif; ?>
      <?php print $add_offer_btn; ?>
    </div>
  </div><!-- end .container -->
  <div class="container">
    <div class="motto clearfix">
      <p><?php print $moto_text; ?></p>
    </div>
  </div>
</header>