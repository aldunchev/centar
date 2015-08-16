<?php
/**
 * @file
 * centar_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function centar_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: offer_list.
  $styles['offer_list'] = array(
    'label' => 'Offer List 208x167',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 416,
          'height' => 334,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_small.
  $styles['user_small'] = array(
    'label' => 'User Small',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
