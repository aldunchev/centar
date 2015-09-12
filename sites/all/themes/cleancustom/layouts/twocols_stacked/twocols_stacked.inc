<?php
// Plugin definition
/**
 * This layout has two main columns -  left and right.
 * @author <Aleksandar Dunchev aldunchev@gmail.com>
 */ 
$plugin = array(
  'title' => t('Two Columns Stacked'),
  'category' => t('Clean Custom'),
  'icon' => 'twocols_stacked.png',
  'theme' => 'cleancustom_twocols_stacked',
  'css' => 'twocols_stacked.css',
  'regions' => array(
    'left' => t('Left Column'),
    'right' => t('Right Column'),
    'right_block' => t('Right Complimentary Block')
  ),
);