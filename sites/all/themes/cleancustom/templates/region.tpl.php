<?php 
/**
 * @file
 * Custom template for region.
 * 
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 * @see cleancustom_process_region()
 * @see cleancustom_preprocess_region()
 */
if ($content) {
  print $outer_prefix . $content . $outer_suffix; 
}
