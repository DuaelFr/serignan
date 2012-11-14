<?php
/**
 * @file
 * serignan_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function serignan_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_section';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_section';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_section';
  $strongarm->value = 'main-menu:0';
  $export['taxonomy_menu_vocab_parent_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_term_20d3cb6d-0328-4404-92a2-696dbeb4b682';
  $strongarm->value = array(
    'is_default' => TRUE,
    'type' => 'term',
    'xid' => '20d3cb6d-0328-4404-92a2-696dbeb4b682',
    'view_name' => 'sections_content',
    'display' => 'block_1',
    'status' => 1,
    'inherit' => 1,
  );
  $export['tvi_term_20d3cb6d-0328-4404-92a2-696dbeb4b682'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_term_c124e5fd-46d3-72c4-95ce-ca8bccc53cee';
  $strongarm->value = array(
    'is_default' => TRUE,
    'type' => 'term',
    'xid' => 'c124e5fd-46d3-72c4-95ce-ca8bccc53cee',
    'view_name' => 'sections_content',
    'display' => 'block_2',
    'status' => 1,
    'inherit' => 1,
  );
  $export['tvi_term_c124e5fd-46d3-72c4-95ce-ca8bccc53cee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_section';
  $strongarm->value = array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'section',
    'view_name' => 'sections_content',
    'display' => 'block_list',
    'status' => 1,
  );
  $export['tvi_vocab_section'] = $strongarm;

  return $export;
}
