<?php
/**
 * @file
 * offer_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function offer_content_type_node_info() {
  $items = array(
    'offer' => array(
      'name' => t('Offer'),
      'base' => 'node_content',
      'description' => t('Content type for general offers on the site which users will publish.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
