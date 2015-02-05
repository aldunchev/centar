<?php

/**
 * Implements hook_form_alter().
 */

function cleancustom_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == "user_login_block") {
    unset($form['links']);
  }
  if ($form_id == 'offer_node_form') {
    $form['field_offer_images']['und']['#file_upload_description'] = '';
    unset($form['actions']['preview']);
    $form['body']['und'][0]['value']['#rows'] = 10;
    $form['field_offer_images']['und']['#file_upload_title'] = '';
  }
}
