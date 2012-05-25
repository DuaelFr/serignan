<?php
/**
 * @file
 * serignan_sheets.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function serignan_sheets_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sheet|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sheet';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|sheet|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function serignan_sheets_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sheet|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sheet';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_pictures',
        1 => 'title',
        2 => 'body',
        3 => 'node_link',
        4 => 'group_content',
      ),
    ),
    'fields' => array(
      'field_pictures' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
      'group_content' => 'ds_content',
    ),
    'limit' => array(
      'field_pictures' => '1',
    ),
    'classes' => array(),
  );
  $export['node|sheet|list'] = $ds_layout;

  return $export;
}
