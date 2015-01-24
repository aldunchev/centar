<?php
/**
 * Implements hook_form_system_theme_settings_alter(&$form, $form_state);
 */

function cleancustom_form_system_theme_settings_alter(&$form, $form_state) {
  $form['menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Menu Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['menu']['menu_element'] = array(
    '#type' => 'select',
    '#title' => t('Select menu type for the main menu'),
    '#options' => menu_get_menus(),
    '#default_value' => theme_get_setting('menu_element'),
  );
}