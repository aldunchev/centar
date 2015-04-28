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

  $variables['user_picture'] = NULL;
  $variables['user_name'] = NULL;
  $variables['logout'] = NULL;

  if ($variables['logged_in']) {
    $user_name = $variables['user']->name;
    $variables['user_name'] = l($user_name, "user/",
                                array(
                                  'attributes' => array(
                                    'class' => array('user-name')
                                  ),
                                ) 
                              );
    $file = file_load($variables['user']->picture);
    
    $user_picture = $file ? theme('image_style', array('style_name' => 'user_small', 'path' => $file->uri, 'alt' => 'test')) : '';
    $variables['user_picture'] = l($user_picture, "user", 
                                    array(
                                      'html' => TRUE, 
                                      'attributes' => array(
                                        'title' => $user_name,
                                      ),
                                    )
                                  );
    $variables['logout'] = l(t('Изход'), "user/logout", 
                                    array(
                                      'attributes' => array(
                                        'title' => t('Изход'),
                                        'class' => array('fa fa-sign-out'),
                                      ),
                                    )
                                  );
  }

  $variables['header'] = theme('header', array(
      'fb_login_btn' => $fb_login_btn,
      'header_region' => $header_region,
      'help_menu' => $help_menu,
      'user_picture' => $variables['user_picture'],
      'logout' => $variables['logout'],
      'user_name' => $variables['user_name'],
      'logo' => $variables['logo'],
      'front_page' => $variables['front_page'],
      'add_offer_btn' => $add_offer_btn,
      'moto_text' => $moto_text,
    )
  );

  $variables['is_user_page'] = FALSE;
  if (!empty($args[0]) && $args[0] == 'user') {
    $variables['is_user_page'] = TRUE;
  }
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