<?php
/**
 * @file
 * center_offer_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function center_offer_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function center_offer_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function center_offer_view_image_default_styles() {
  $styles = array();

  // Exported image style: offer_single.
  $styles['offer_single'] = array(
    'label' => 'Offer Single 540x440',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: offer_thumb_100x100.
  $styles['offer_thumb_100x100'] = array(
    'label' => 'Offer Thumb 100x100',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
