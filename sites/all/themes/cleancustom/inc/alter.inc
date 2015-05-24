<?php
/**
 * @file
 * Alters.
 */

/**
 * Remove sticky table header globally
 */
function cleancustom_js_alter(&$js) {
  unset($js['misc/tableheader.js']);
}

/**
 * Implements hook_css_alter(&$css).
 */
function cleancustom_css_alter(&$css) {
  unset($css[drupal_get_path('module', 'system'). '/system.base.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system'). '/system.theme.css']);
  unset($css[drupal_get_path('module', 'search'). '/search.css']);
}