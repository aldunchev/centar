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
}

/**
* Implements hook_preprocess_page().
*/

function cleancustom_preprocess_node(&$variables) {
  $node_type = $variables['type'];
  if ($node_type == 'product_display') {
    libraries_load('flexslider');
    //drupal_add_css(drupal_get_path('theme', 'cleancustom') . '/assets/scripts/mfp/mfp.css');
    drupal_add_js(drupal_get_path('theme', 'cleancustom') . '/assets/scripts/ddpowerzoomer.js');
  }
}

/**
* Implements hook_preprocess_region().
*/

function cleancustom_preprocess_region(&$variables) {
  if ($variables['region'] == 'header') {
      // $variables['classes_array'][] = 'col-4 fl-left';
  }
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

 