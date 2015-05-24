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
    'name' => 'offer_single',
    'label' => 'Offer Single 540x440',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'offer_thumb_100x100',
    'label' => 'Offer Thumb 100x100',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
