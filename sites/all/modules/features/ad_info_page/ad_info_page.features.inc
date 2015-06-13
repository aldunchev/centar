<?php
/**
 * @file
 * ad_info_page.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ad_info_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ad_info_page_node_info() {
  $items = array(
    'ad_info' => array(
      'name' => t('Ad Info'),
      'base' => 'node_content',
      'description' => t('Content type for displaying advertisements information to clients.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
