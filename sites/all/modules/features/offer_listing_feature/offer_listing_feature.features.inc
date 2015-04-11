<?php
/**
 * @file
 * offer_listing_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function offer_listing_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function offer_listing_feature_image_default_styles() {
  $styles = array();

  // Exported image style: offer_list.
  $styles['offer_list'] = array(
    'name' => 'offer_list',
    'label' => 'Offer List 208x167',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 208,
          'height' => 167,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
