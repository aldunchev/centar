<?php
/**
 * @file
 * center_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function center_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page_panel';
  $page->task = 'page';
  $page->admin_title = 'Front page panel';
  $page->admin_description = 'This panel page is used for the front page.';
  $page->path = 'home';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel__panel_context_9ec625ac-0248-49fc-8680-a6f1beae84a8';
  $handler->task = 'page';
  $handler->subtask = 'front_page_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
      'sidebar_left' => NULL,
      'main' => NULL,
      'search_block' => NULL,
      'block_left' => NULL,
      'block_right' => NULL,
      'block_full' => NULL,
      'sidebar_second' => NULL,
      'block_left_bottom' => NULL,
      'block_right_bottom' => NULL,
    ),
    'main' => array(
      'style' => '-1',
    ),
    'sidebar_second' => array(
      'style' => '-1',
    ),
    'block_left_bottom' => array(
      'style' => '-1',
    ),
    'sidebar_left' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1621c920-7844-4706-a775-ba91418ace7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f639b6fc-92ac-4ee2-8a50-34fead6355cb';
    $pane->panel = 'block_left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '53',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = 'f639b6fc-92ac-4ee2-8a50-34fead6355cb';
    $display->content['new-f639b6fc-92ac-4ee2-8a50-34fead6355cb'] = $pane;
    $display->panels['block_left'][0] = 'new-f639b6fc-92ac-4ee2-8a50-34fead6355cb';
    $pane = new stdClass();
    $pane->pid = 'new-093a4c95-90d4-4c42-bf0a-54b7e8187d25';
    $pane->panel = 'block_left_bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '54',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '093a4c95-90d4-4c42-bf0a-54b7e8187d25';
    $display->content['new-093a4c95-90d4-4c42-bf0a-54b7e8187d25'] = $pane;
    $display->panels['block_left_bottom'][0] = 'new-093a4c95-90d4-4c42-bf0a-54b7e8187d25';
    $pane = new stdClass();
    $pane->pid = 'new-db9df70b-201a-46fc-8c4c-697d8544a772';
    $pane->panel = 'block_right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '54',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = 'db9df70b-201a-46fc-8c4c-697d8544a772';
    $display->content['new-db9df70b-201a-46fc-8c4c-697d8544a772'] = $pane;
    $display->panels['block_right'][0] = 'new-db9df70b-201a-46fc-8c4c-697d8544a772';
    $pane = new stdClass();
    $pane->pid = 'new-ace70a35-b1da-4bef-a078-b739a1bf8f7e';
    $pane->panel = 'block_right_bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '53',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ace70a35-b1da-4bef-a078-b739a1bf8f7e';
    $display->content['new-ace70a35-b1da-4bef-a078-b739a1bf8f7e'] = $pane;
    $display->panels['block_right_bottom'][0] = 'new-ace70a35-b1da-4bef-a078-b739a1bf8f7e';
    $pane = new stdClass();
    $pane->pid = 'new-f7d36e7c-f555-4311-95a7-1f97c559d965';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'offer_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Последни обяви',
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
    $pane->uuid = 'f7d36e7c-f555-4311-95a7-1f97c559d965';
    $display->content['new-f7d36e7c-f555-4311-95a7-1f97c559d965'] = $pane;
    $display->panels['main'][0] = 'new-f7d36e7c-f555-4311-95a7-1f97c559d965';
    $pane = new stdClass();
    $pane->pid = 'new-99aa34ee-9e1f-4dc4-a1af-037545060139';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'terms-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '99aa34ee-9e1f-4dc4-a1af-037545060139';
    $display->content['new-99aa34ee-9e1f-4dc4-a1af-037545060139'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-99aa34ee-9e1f-4dc4-a1af-037545060139';
    $pane = new stdClass();
    $pane->pid = 'new-f7680991-0653-4be5-b5f2-790fba013f84';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'forum-active';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f7680991-0653-4be5-b5f2-790fba013f84';
    $display->content['new-f7680991-0653-4be5-b5f2-790fba013f84'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-f7680991-0653-4be5-b5f2-790fba013f84';
    $pane = new stdClass();
    $pane->pid = 'new-3e563d90-3771-4adc-84cb-a10dd0c2b93e';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'node-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e563d90-3771-4adc-84cb-a10dd0c2b93e';
    $display->content['new-3e563d90-3771-4adc-84cb-a10dd0c2b93e'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-3e563d90-3771-4adc-84cb-a10dd0c2b93e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-99aa34ee-9e1f-4dc4-a1af-037545060139';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page_panel'] = $page;

  return $pages;

}
