<?php
/**
 * @file
 * serignan_sections.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function serignan_sections_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|section|list';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'section';
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
  );
  $export['taxonomy_term|section|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function serignan_sections_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|section|list';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'section';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
        1 => 'title',
        2 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
      'title' => 'ds_content',
      'field_description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|section|list'] = $ds_layout;

  return $export;
}
