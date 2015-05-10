<?php
/**
* Implements hook_theme().
*/
function cleancustom_theme() {
  return array(
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