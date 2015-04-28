<header role="banner" class="main-header">
  <div class="content container clearfix">
    <div class="header-bg">
      <div class="header-row clearfix">
        <?php if(!$logged_in) : ?>
          <?php print $fb_login_btn; ?>
        <?php else :  ?>
          <div class="header-user-picture">
            <?php print $user_picture; ?>
          </div>
          <nav class="user-menu">
            <?php print $user_name; ?>
            <?php print $logout; ?>
          </nav>
        <?php endif; ?>
        <?php print render($header_region); ?>
        <nav class="help-menu fl-right clearfix"><?php print $help_menu; ?></nav>
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
