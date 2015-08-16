<header role="banner" class="main-header">
  <div class="content container clearfix mobile-hidden">
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

  <!-- mobile header-->
  <div class="header-mobile desktop-hidden">
    <div class="header-mobile-container container clearfix">
      <?php if($logo) : ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo logo-mobile fl-left">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>">
        </a>
      <?php endif; ?>
      <span id="search-trigger" class="fa fa-search"></span>
      <span id="mobile-menu-bars" class="fa fa-bars"></span>
    </div>
  </div>
  <div id="underlay" class="desktop-hidden"></div>
  <div id="header-menu-mobile" class="header-row-mobile desktop-hidden clearfix">
    <?php print render($header_region); ?>
    <?php if(!$logged_in) : ?>
      <?php print $fb_login_btn; ?>
    <?php else :  ?>
      <div class="header-user-mobile">
        <nav class="user-menu-mobile">
          <div class="header-user-picture-mob"><?php print $user_picture; ?></div>
          <?php print $user_name; ?>
        </nav>
        <?php print $logout; ?>
      </div>
    <?php endif; ?>
    <nav class="help-menu-mobile clearfix"><?php print $help_menu; ?></nav>
  </div>
  <!-- end mobile header-->

  <div class="container motto-mobile-container">
    <div class="motto clearfix">
      <span><?php print $moto_text; ?></span>
    </div>
  </div>
  <div class="add-offer-btn-mob desktop-hidden"><?php print $add_offer_btn; ?></div> 
  
</header>
