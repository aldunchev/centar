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
  if (arg(1) == 'login') {
    $variables['title'] = t('Вход');
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
 * Implements hook_css_alter(&$css).
 */

function cleancustom_css_alter(&$css) {
  unset($css[drupal_get_path('module', 'system'). '/system.base.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.theme.css']);
  unset($css[drupal_get_path('module', 'commerce'). '/modules/line_item/theme/commerce_line_item.theme.css']);
  unset($css[drupal_get_path('module', 'commerce'). '/modules/cart/theme/commerce_cart.theme.css']);
}

 