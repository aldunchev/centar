<?php
/**
 * @file
 * center_offer_view.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function center_offer_view_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__offer_panel_template';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Offer Panel Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from User (on node.node_author)',
        'keyword' => 'user_2',
        'name' => 'entity_from_schema:uid-user-node',
        'context' => 'relationship_entity_from_schema:uid-node-user_1',
        'id' => 1,
      ),
    ),
    'name' => 'offer_panel_template',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocols_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '316c33a4-fd02-4b7e-8d46-524a0d078596';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2bd408b-e686-4ddb-a7ec-ffaf18d57d07';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2bd408b-e686-4ddb-a7ec-ffaf18d57d07';
    $display->content['new-e2bd408b-e686-4ddb-a7ec-ffaf18d57d07'] = $pane;
    $display->panels['left'][0] = 'new-e2bd408b-e686-4ddb-a7ec-ffaf18d57d07';
    $pane = new stdClass();
    $pane->pid = 'new-b4d5d2f4-6690-4a01-a541-09e4b6572650';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_offer_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'bxslider',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'offer_single',
        'image_link' => '',
        'optionset' => 'default',
        'caption' => 0,
        'general' => array(
          'mode' => 'horizontal',
          'speed' => '500',
          'slideMargin' => '0',
          'startSlide' => '0',
          'randomStart' => 0,
          'infiniteLoop' => 1,
          'hideControlOnEnd' => 1,
          'easing' => '',
          'captions' => 0,
          'ticker' => 0,
          'tickerHover' => 0,
          'adaptiveHeight' => 0,
          'adaptiveHeightSpeed' => '500',
          'video' => 0,
          'responsive' => 1,
          'useCSS' => 1,
          'preloadImages' => 0,
          'swipeThreshold' => '50',
          'oneToOneTouch' => 1,
          'preventDefaultSwipeX' => 1,
          'preventDefaultSwipeY' => 0,
        ),
        'pager' => array(
          'pager' => 1,
          'pagerType' => 'full',
          'pagerShortSeparator' => ' / ',
          'pagerSelector' => '',
          'pagerCustom_type' => 'thumbnail_pager_method2',
          'pagerCustom_image_style' => 'offer_thumb_100x100',
        ),
        'controls' => array(
          'controls' => 1,
          'nextText' => 'Next',
          'prevText' => 'Prev',
          'nextSelector' => '',
          'prevSelector' => '',
          'autoControls' => 0,
          'startText' => 'Start',
          'stopText' => 'Stop',
          'autoControlsCombine' => 0,
          'autoControlsSelector' => '',
        ),
        'auto' => array(
          'auto' => 0,
          'pause' => '4000',
          'autoStart' => 1,
          'autoDirection' => 'next',
          'autoHover' => 0,
          'autoDelay' => '0',
        ),
        'carousel' => array(
          'minSlides' => '1',
          'maxSlides' => '1',
          'moveSlides' => '0',
          'slideWidth' => '0',
        ),
        'thumbnail_slider' => array(
          'thumbnail_style' => 'thumbnail',
          'general' => array(
            'mode' => 'horizontal',
            'speed' => '500',
            'slideMargin' => '0',
            'startSlide' => '0',
            'randomStart' => 0,
            'infiniteLoop' => 1,
            'hideControlOnEnd' => 0,
            'easing' => '',
            'captions' => 0,
            'ticker' => 0,
            'tickerHover' => 0,
            'adaptiveHeight' => 0,
            'adaptiveHeightSpeed' => '500',
            'responsive' => 1,
            'useCSS' => 1,
            'preloadImages' => 0,
            'swipeThreshold' => '50',
            'oneToOneTouch' => 1,
            'preventDefaultSwipeX' => 1,
            'preventDefaultSwipeY' => 0,
          ),
          'pager' => array(
            'pager' => '',
          ),
          'controls' => array(
            'controls' => 1,
            'nextText' => 'Next',
            'prevText' => 'Prev',
            'autoControls' => 0,
            'startText' => 'Start',
            'stopText' => 'Stop',
            'autoControlsCombine' => 0,
          ),
          'auto' => array(
            'auto' => 0,
            'pause' => '4000',
            'autoStart' => 1,
            'autoDirection' => 'next',
            'autoHover' => 0,
            'autoDelay' => '0',
          ),
          'carousel' => array(
            'minSlides' => '4',
            'maxSlides' => '4',
            'moveSlides' => '1',
          ),
        ),
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4d5d2f4-6690-4a01-a541-09e4b6572650';
    $display->content['new-b4d5d2f4-6690-4a01-a541-09e4b6572650'] = $pane;
    $display->panels['left'][1] = 'new-b4d5d2f4-6690-4a01-a541-09e4b6572650';
    $pane = new stdClass();
    $pane->pid = 'new-a83b642d-ba32-4930-9495-c7b19befa502';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_offer_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'a83b642d-ba32-4930-9495-c7b19befa502';
    $display->content['new-a83b642d-ba32-4930-9495-c7b19befa502'] = $pane;
    $display->panels['right'][0] = 'new-a83b642d-ba32-4930-9495-c7b19befa502';
    $pane = new stdClass();
    $pane->pid = 'new-6235c4a7-5232-4739-becf-175cb9d46e4e';
    $pane->panel = 'right';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Добавена:',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6235c4a7-5232-4739-becf-175cb9d46e4e';
    $display->content['new-6235c4a7-5232-4739-becf-175cb9d46e4e'] = $pane;
    $display->panels['right'][1] = 'new-6235c4a7-5232-4739-becf-175cb9d46e4e';
    $pane = new stdClass();
    $pane->pid = 'new-49ef39aa-dc28-414f-9e88-1f60348e29f7';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'google_analytics_counter-0';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '49ef39aa-dc28-414f-9e88-1f60348e29f7';
    $display->content['new-49ef39aa-dc28-414f-9e88-1f60348e29f7'] = $pane;
    $display->panels['right'][2] = 'new-49ef39aa-dc28-414f-9e88-1f60348e29f7';
    $pane = new stdClass();
    $pane->pid = 'new-8eef71e2-6ce5-4ab7-b452-2e844e0e0bc3';
    $pane->panel = 'right';
    $pane->type = 'author_pane';
    $pane->subtype = 'author_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'caller' => 'advanced_profile',
      'picture_preset' => 'thumbnail',
      'join_date_type' => 'short',
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8eef71e2-6ce5-4ab7-b452-2e844e0e0bc3';
    $display->content['new-8eef71e2-6ce5-4ab7-b452-2e844e0e0bc3'] = $pane;
    $display->panels['right'][3] = 'new-8eef71e2-6ce5-4ab7-b452-2e844e0e0bc3';
    $pane = new stdClass();
    $pane->pid = 'new-872cfe64-00bb-419d-8af3-edcfb941dbbb';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_telephone_number';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Телефон',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '872cfe64-00bb-419d-8af3-edcfb941dbbb';
    $display->content['new-872cfe64-00bb-419d-8af3-edcfb941dbbb'] = $pane;
    $display->panels['right'][4] = 'new-872cfe64-00bb-419d-8af3-edcfb941dbbb';
    $pane = new stdClass();
    $pane->pid = 'new-94832e78-6772-45d5-93cb-bf9635cd0586';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '94832e78-6772-45d5-93cb-bf9635cd0586';
    $display->content['new-94832e78-6772-45d5-93cb-bf9635cd0586'] = $pane;
    $display->panels['right'][5] = 'new-94832e78-6772-45d5-93cb-bf9635cd0586';
    $pane = new stdClass();
    $pane->pid = 'new-93f71343-661a-418b-8006-376624af6ae0';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'other_user_offers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '93f71343-661a-418b-8006-376624af6ae0';
    $display->content['new-93f71343-661a-418b-8006-376624af6ae0'] = $pane;
    $display->panels['right'][6] = 'new-93f71343-661a-418b-8006-376624af6ae0';
    $pane = new stdClass();
    $pane->pid = 'new-f357559d-4db8-424e-a8f8-685900fcd4a5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_offer_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f357559d-4db8-424e-a8f8-685900fcd4a5';
    $display->content['new-f357559d-4db8-424e-a8f8-685900fcd4a5'] = $pane;
    $display->panels['right'][7] = 'new-f357559d-4db8-424e-a8f8-685900fcd4a5';
    $pane = new stdClass();
    $pane->pid = 'new-7a1efde1-acfd-4a94-b7ae-a88c2f979340';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_offer_negotiable';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'i18n_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '7a1efde1-acfd-4a94-b7ae-a88c2f979340';
    $display->content['new-7a1efde1-acfd-4a94-b7ae-a88c2f979340'] = $pane;
    $display->panels['right'][8] = 'new-7a1efde1-acfd-4a94-b7ae-a88c2f979340';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__offer_panel_template'] = $handler;

  return $export;
}