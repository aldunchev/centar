<?php

/**
 * Implements hook_form_alter().
 */

function cleancustom_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == "user_login_block") {
    unset($form['links']);
  }
}
