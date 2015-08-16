<?php

/**
 * Implements hook_form_alter().
 */

function cleancustom_form_alter(&$form, &$form_state, $form_id) {

  if ($form_id == 'comment_node_offer_form' || $form_id == 'comment_node_forum_form') {
    $form['actions']['submit']['#value']= t('Коментирай');
  }
}
