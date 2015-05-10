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
  if ($form_id == 'user_pass') {
    $form['actions']['submit']['#value']= t('Заяви нова парола');
  }
  if ($form_id == 'offer_node_form') {
    $form['field_offer_images']['und']['#file_upload_description'] = '';
    unset($form['actions']['preview']);
    $form['body']['und'][0]['value']['#rows'] = 10;
    $form['field_offer_images']['und']['#file_upload_title'] = '';
    $form['actions']['submit']['#value']= t('Публикувай Обявата');
  }
  if ($form_id == 'comment_node_offer_form' || $form_id == 'comment_node_forum_form') {
    $form['actions']['submit']['#value']= t('Коментирай');
  }
  if ($form_id == 'user_profile_form') {
    $form['locale']['#access'] = FALSE;
    $form['timezone']['#access'] = FALSE;
    $form['picture']['picture_upload']['#description'] = '';
    $form['picture']['picture_delete']['#description'] = '';
    $form['account']['mail']['#description'] = '';
    $form['account']['name']['#description'] = '';
    $form['account']['pass']['#description'] = '';
    $form['account']['pass']['change_pass_title'] = array(
      '#type' => 'item',
      '#markup' => t('<h5>Смяна на парола</h5>'),
    );
    $form['actions']['submit']['#value']= t('Запази промените');
  }
  if ($form_id == 'apachesolr_panels_search_form') {
    $form['apachesolr_panels_search_form']['#attributes']['placeholder'] = t('Търсете оферти тук...');
  }
}
