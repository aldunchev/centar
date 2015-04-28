<?php

/**
 * @file 
 * Process functions for Clean Custom Theme.
 *
 */

/**
 * Implements hook_process_region().
 */

function cleancustom_process_region(&$variables) {
  $variables['outer_prefix'] = '<section class="' . $variables['classes'] . '">';
  $variables['outer_suffix'] = '</section>';
}