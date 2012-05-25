<?php
/**
 * @file
 * serignan_sheets.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_sheets_taxonomy_default_vocabularies() {
  return array(
    'sheets_category' => array(
      'name' => 'Catégorie de fiches type',
      'machine_name' => 'sheets_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
