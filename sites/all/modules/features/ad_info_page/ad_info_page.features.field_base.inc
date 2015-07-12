<?php
/**
 * @file
 * ad_info_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ad_info_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ad_properties'
  $field_bases['field_ad_properties'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ad_properties',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tablefield',
    'settings' => array(
      'cell_processing' => 1,
      'export' => 0,
      'lock_values' => 0,
      'restrict_rebuild' => 0,
    ),
    'translatable' => 0,
    'type' => 'tablefield',
  );

  // Exported field_base: 'field_ad_properties_note'
  $field_bases['field_ad_properties_note'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ad_properties_note',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
