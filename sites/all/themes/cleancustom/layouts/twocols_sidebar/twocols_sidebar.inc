<?php

// Plugin definition
/**
 * This layout has two main columns - sidebar on the left and main content on the right.
 * The search block is placed above those two columns.
 * Also above main content two block with additional content can be placed.
 */ 
$plugin = array(
  'title' => t('Two Column'),
  'category' => t('Columns: 2'),
  'icon' => 'twocols_sidebar.png',
  'theme' => 'cleancustom_twocols_sidebar',
  'css' => 'twocols_sidebar.css',
  'regions' => array(
    'search_block' => t('Search Block'),
    'sidebar_left' => t('Left Sidebar'),
    'main' => t('Main'),
    'block_left' => t('Left Block'),
    'block_right' => t('Right Block'),
  ),
);
