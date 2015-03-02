<?php

/**
 * @file
 * Clean Custom theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<header role="banner" class="main-header">
  <div class="content container clearfix">
    <div class="clearfix">
      <?php if($page['header']) : ?>
        <?php
          if (!$logged_in) {
            print l(t('login/register'), 'user/simple-fb-connect',
              array(
                'attributes' => array(
                  'class' => array('fa fa-facebook fl-left')
                ),
              ) 
            );
          }  
        ?>
        <?php print render($page['header']); ?>
      <?php endif; ?>
      <?php
        $menu = menu_navigation_links('menu-help-menu');
        print theme('links__menu_help_menu', 
          array('links' => $menu, 
            'attributes' => array(
                'class' => array('help-menu fl-right'),
              )
            )
          );
      ?>
    </div>
    <div class="clearfix">
    <?php if($logo) : ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo fl-left">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>">
      </a>
    <?php endif; ?>
    <?php print l(t('add offer'), 'node/add/offer',
        array(
          'attributes' => array(
            'class' => array('add-offer-link fl-right primary-btn')
          ),
        ) 
      ); 
    ?>
    </div>
  </div><!-- end .container -->
  <div class="motto container">
    <div class="container clearfix">
      <p><?php print t('minimum cost - maximum comfort'); ?></p>
    </div>
  </div>
</header>

<?php if ($messages): ?>
  <div id="messages" class="container">
    <?php print $messages; ?>
  </div><!-- /#messages -->
<?php endif; ?>

<section id="main-content" role="main">
  <div class="container main clearfix">
    <?php if($page['featured']) : ?>
      <?php print render($page['featured']); ?>
    <?php endif; ?>
    <?php if ($title) : ?>
      <div class="heading-wrapper">
        <h1 class="title"><?php print $title; ?></h1>
      </div>
    <?php endif; ?>
    <?php print render($page['content']); ?>
  </div>
</section>
<?php if($page['footer']) : ?>

  <footer class="clearfix">
    <div class="container main-footer">
      <?php print render($page['footer']); ?>
      <div class="motto-logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo fl-left">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>">
        </a>
        <p><?php print t('minimum cost - maximum comfort'); ?></p>
      </div>
    </div>
  </footer>
<?php endif; ?>