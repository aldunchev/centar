<?php
/**
* Implements hook_preprocess_page().
*/

function cleancustom_preprocess_page(&$variables) {
  $variables['mainmenu'] = theme(
    'mega_menu', array(
      'menu' => menu_tree_all_data(theme_get_setting('menu_element')),
    )
  );
  $args = arg();
  if (!empty($args[1]) && $args[1] == 'login') {
    $variables['title'] = t('Вход');
  }
  if (!empty($args[1]) && $args[1] == 'add' && $args[2] == 'offer') {
    $variables['title'] = t('Добави обява');
  }
  $fb_login_btn = l(t('login/register'), 'user/simple-fb-connect',
          array(
            'attributes' => array(
              'class' => array('fa fa-facebook fl-left')
            ),
          ) 
        );
  $add_offer_btn = l(t('add offer'), 'node/add/offer',
                      array(
                        'attributes' => array(
                          'class' => array('add-offer-link fl-right primary-btn')
                        ),
                      ) 
                    ); 
  $help_menu_tree = menu_tree_output(menu_tree_all_data(variable_get('help_menu_links_source', 'menu-help-menu'), NULL, 1));
  $help_menu = drupal_render($help_menu_tree);
  $header_region = $variables['page']['header'] ? $variables['page']['header'] : '';
  $moto_text = t('minimum cost - maximum comfort');
  
  $variables['header'] = theme('header', array(
      'fb_login_btn' => $fb_login_btn,
      'header_region' => $header_region,
      'help_menu' => $help_menu,
      'logo' => $variables['logo'],
      'front_page' => $variables['front_page'],
      'add_offer_btn' => $add_offer_btn,
      'moto_text' => $moto_text,
    )
  );
}

/**
* Implements hook_preprocess_node().
*/

function cleancustom_preprocess_node(&$variables) {
  
}

/**
* Implements hook_preprocess_region().
*/

function cleancustom_preprocess_region(&$variables) {

}

/**
* Implements hook_preprocess_comment().
*/

function cleancustom_preprocess_comment(&$variables) {

}

/**
 * Implements hook_css_alter(&$css).
 */

function cleancustom_css_alter(&$css) {
  unset($css[drupal_get_path('module', 'system'). '/system.base.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.theme.css']);
  unset($css[drupal_get_path('module', 'commerce'). '/modules/line_item/theme/commerce_line_item.theme.css']);
  unset($css[drupal_get_path('module', 'commerce'). '/modules/cart/theme/commerce_cart.theme.css']);
}

 