<?php

// Plugin definition
$plugin = array(
  'title' => t('Two Column'),
  'category' => t('Columns: 2'),
  'icon' => 'twocols_sidebar.png',
  'theme' => 'cleancustom_twocols_sidebar',
  'css' => 'twocols_sidebar.css',
  'regions' => array(
    'sidebar_left' => t('Left Sidebar'),
    'main' => t('Main')
  ),
);
