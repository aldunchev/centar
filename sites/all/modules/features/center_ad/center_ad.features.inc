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
    'name' => 'large_ad',
    'label' => 'Large Ad',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'medium_ad',
    'label' => 'Medium Ad',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
