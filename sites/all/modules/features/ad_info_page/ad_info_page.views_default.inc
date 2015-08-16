<?php
/**
 * @file
 * ad_info_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ad_info_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '_d_info_page';
  $view->description = 'Lists all the advertisement nodes with detail information about advertising conditions.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Аd info page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Информация за реклама';
  $handler->display->display_options['css_class'] = 'ad-info-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="more-link" href="contact">Запитване за реклама<a/>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Ad Properties */
  $handler->display->display_options['fields']['field_ad_properties']['id'] = 'field_ad_properties';
  $handler->display->display_options['fields']['field_ad_properties']['table'] = 'field_data_field_ad_properties';
  $handler->display->display_options['fields']['field_ad_properties']['field'] = 'field_ad_properties';
  $handler->display->display_options['fields']['field_ad_properties']['label'] = '';
  $handler->display->display_options['fields']['field_ad_properties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_properties']['delta_offset'] = '0';
  /* Field: Content: Ad Properties Note */
  $handler->display->display_options['fields']['field_ad_properties_note']['id'] = 'field_ad_properties_note';
  $handler->display->display_options['fields']['field_ad_properties_note']['table'] = 'field_data_field_ad_properties_note';
  $handler->display->display_options['fields']['field_ad_properties_note']['field'] = 'field_ad_properties_note';
  $handler->display->display_options['fields']['field_ad_properties_note']['label'] = '';
  $handler->display->display_options['fields']['field_ad_properties_note']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_properties_note']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ad_properties_note']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ad_info' => 'ad_info',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ad-info-page';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['_d_info_page'] = $view;

  return $export;
}
