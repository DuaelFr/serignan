<?php
/**
 * @file
 * serignan_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_events_taxonomy_default_vocabularies() {
  return array(
    'events_category' => array(
      'name' => 'Catégorie d\'agendas',
      'machine_name' => 'events_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
