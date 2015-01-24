<?php

// Plugin definition
$plugin = array(
  'title' => t('One column'),
  'category' => t('Columns: 1'),
  'icon' => 'onecol.png',
  'theme' => 'cleancustom_onecol',
  'css' => 'onecol.css',
  'regions' => array(
    'top' => t('Top'),
    'main' => t('Main')
  ),
);
