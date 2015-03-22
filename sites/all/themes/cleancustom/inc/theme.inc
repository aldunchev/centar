<?php
/**
* Implements hook_theme().
*/
function cleancustom_theme() {
  return array(
    'mega_menu' => array(
      'variables' => array('menu' => NULL),
    ),
    'offer_node_form' => array(
      'arguments' => array('form' => NULL),
      'template' => 'templates/offer-form',
      'render element' => 'form',
    ),
    'header' => array(
      'varibales' => array(
        'fb_login_btn' => NULL,
        'help_menu' => NULL,
        'logo' => NULL,
        'add_offer_btn' => NULL,
        'moto_text' => NULL,
      ),
      'path' => drupal_get_path('theme', 'cleancustom') . '/templates',
      'template' => 'header',
    ),
  );
}

/**
 * Html for mega menu.
 */

function cleancustom_mega_menu($variables) {
  $menu = $variables['menu'];
  $output = '<nav role="navigation" class="main-nav"><ul>'; // open list
  foreach ($menu as $key => $value) {
    $options = array();
    if (isset($value['link']['options']['attributes']['title'])) {
      $options = array('attributes' => array('title' => $value['link']['options']['attributes']['title']));
    }
    $output .= '<li>' . l($value[link]['link_title'], $value['link']['href'], $options);
    if (count($value['below']) > 0) { // check if we have children
      $output .= '<ul class="second-level">';
      foreach ($value['below'] as $key2 => $value2) {
        if (isset($value2['link']['options']['attributes']['title'])) {
          $options['attributes'] = array('title' => $value2['link']['options']['attributes']['title']);
        }
        $output .= '<li>' . l($value2['link']['link_title'], $value2['link']['href'], $options) . '</li>';
      }
      $output .= '</ul>';
    }
    $output .= '</li>';
  }
  $output .= '</ul></nav>';
  return $output;  
}