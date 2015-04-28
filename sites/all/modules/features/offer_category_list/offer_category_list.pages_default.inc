<?php
/**
 * @file
 * offer_category_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function offer_category_list_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_page_for_all_taxonomy_term';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Page for all taxonomy terms.',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel_page_for_all_taxonomy_term',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocols_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'block_full' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'block_left' => NULL,
      'block_right' => NULL,
      'sidebar_second' => NULL,
      'block_left_bottom' => NULL,
      'block_right_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '149199db-402c-48d1-9e32-e4a88e8bd240';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0bc77ee8-d4c8-4584-92f6-401399f90361';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_terms_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bc77ee8-d4c8-4584-92f6-401399f90361';
    $display->content['new-0bc77ee8-d4c8-4584-92f6-401399f90361'] = $pane;
    $display->panels['main'][0] = 'new-0bc77ee8-d4c8-4584-92f6-401399f90361';
    $pane = new stdClass();
    $pane->pid = 'new-096de846-7a2c-4ff7-8039-0b1d17bb1fdd';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'taxonomy_menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '096de846-7a2c-4ff7-8039-0b1d17bb1fdd';
    $display->content['new-096de846-7a2c-4ff7-8039-0b1d17bb1fdd'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-096de846-7a2c-4ff7-8039-0b1d17bb1fdd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_page_for_all_taxonomy_term'] = $handler;

  return $export;
}
