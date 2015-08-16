<?php
/**
 * @file
 * center_ad.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function center_ad_image_default_styles() {
  $styles = array();

  // Exported image style: large_ad.
  $styles['large_ad'] = array(
    'label' => 'Large Ad',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 473,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium_ad.
  $styles['medium_ad'] = array(
    'label' => 'Medium Ad',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 226,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
