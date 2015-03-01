<?php

// Plugin definition
/**
 * This layout has two main columns - sidebar on the left and main content on the right.
 * Also above main content two block with additional content can be placed.
 * Three block for latest posts, adverts etc. are located at the bottom of the layout
 * @author <Aleksandar Dunchev aldunchev@gmail.com>
 */ 
$plugin = array(
  'title' => t('Two Column'),
  'category' => t('Clean Custom'),
  'icon' => 'twocols_sidebar.png',
  'theme' => 'cleancustom_twocols_sidebar',
  'css' => 'twocols_sidebar.css',
  'regions' => array(
    'block_full' => t('Full Width Block'),
    'sidebar_left' => t('Left Sidebar'),
    'main' => t('Main'),
    'block_left' => t('Left Block'),
    'block_right' => t('Right Block'),
    'sidebar_second' => t('Sidebar Second'),
    'block_left_bottom' => t('Left Block Bottom'),
    'block_right_bottom' => t('Right Block Bottom'),
  ),
);
