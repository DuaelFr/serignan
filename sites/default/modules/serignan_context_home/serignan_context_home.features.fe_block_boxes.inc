<?php
/**
 * @file
 * serignan_context_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function serignan_context_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Column 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_col1';
  $fe_block_boxes->body = '<a href="javascript:void();" title="A REMPLIR">
  <img src="/sites/default/themes/serignan/images/home-col1.png" alt="IMAGE ICI" />
</a>';

  $export['home_col1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Column 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_col2';
  $fe_block_boxes->body = '<a href="#a-remplir" title="A REMPLIR">
  <img src="/sites/default/themes/serignan/images/home-col2.png" alt="IMAGE ICI" />
</a>';

  $export['home_col2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Column 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_col3';
  $fe_block_boxes->body = '<a href="#a-remplir" title="A REMPLIR">
  <img src="/sites/default/themes/serignan/images/home-col3.png" alt="IMAGE ICI" />
</a>';

  $export['home_col3'] = $fe_block_boxes;

  return $export;
}
