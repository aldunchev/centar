<?php

/**
 * Implements hook_form_alter().
 */

function cleancustom_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == "user_login_block") {
    unset($form['links']);
  }
  if($form_id == "user_login") {
    $register_link = l(t('Register here'), 'user/register',
                        array(
                          'attributes' => array(
                            'class' => array('register-link')
                          ),
                        ) 
                      );
    $form['user_register_link'] = array(
      '#prefix' => '<div class="register-link-wrapper">',
      '#markup' => '<strong>' . t('Not registered yet? ') . '</strong>' . $register_link,
      '#suffix' => '</div>',
    );
    $form['name']['#description'] = '';
    $form['pass']['#description'] = '';
  }
  if ($form_id == 'user_register_form') {
    $form['account']['name']['#description'] = '';
    $form['account']['mail']['#description'] = '';
  }
  if ($form_id == 'offer_node_form') {
    $form['field_offer_images']['und']['#file_upload_description'] = '';
    unset($form['actions']['preview']);
    $form['body']['und'][0]['value']['#rows'] = 10;
    $form['field_offer_images']['und']['#file_upload_title'] = '';
    $form['actions']['submit']['#value']= t('Публикувай Обявата');
  }
  if ($form_id == 'comment_node_offer_form') {
    $form['actions']['submit']['#value']= t('Коментирай');
  }
}
