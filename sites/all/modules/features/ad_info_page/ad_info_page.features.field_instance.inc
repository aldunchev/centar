<?php
/**
 * @file
 * ad_info_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ad_info_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ad_info-body'
  $field_instances['node-ad_info-body'] = array(
    'bundle' => 'ad_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-ad_info-field_ad_properties'
  $field_instances['node-ad_info-field_ad_properties'] = array(
    'bundle' => 'ad_info',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Размер',
          'cell_0_1' => 'Позиция',
          'cell_0_2' => 'Екран',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'import' => array(
            'file' => '',
            'import' => 'Upload CSV',
          ),
          'rebuild' => array(
            'count_cols' => 3,
            'count_rows' => 3,
            'rebuild' => 'Rebuild Table',
          ),
        ),
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_properties',
    'label' => 'Ad Properties',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-ad_info-field_ad_properties_note'
  $field_instances['node-ad_info-field_ad_properties_note'] = array(
    'bundle' => 'ad_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_properties_note',
    'label' => 'Ad Properties Note',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ad Properties');
  t('Ad Properties Note');
  t('Body');

  return $field_instances;
}
