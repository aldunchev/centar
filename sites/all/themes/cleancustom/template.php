<?php
  global $path_to_cleancustom;
  $path_to_cleancustom = drupal_get_path('theme', 'cleancustom');
  include_once $path_to_cleancustom . '/inc/preprocess.inc';
  include_once $path_to_cleancustom . '/inc/process.inc';
  include_once $path_to_cleancustom . '/inc/forms.inc';
  include_once $path_to_cleancustom . '/inc/theme.inc'; 
  include_once $path_to_cleancustom . '/inc/alter.inc'; 

