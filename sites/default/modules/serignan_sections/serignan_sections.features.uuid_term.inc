<?php
/**
 * @file
 * serignan_sections.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function serignan_sections_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '03115171-8485-442a-9c99-a78a3e4e5476',
    'name' => 'Vivre à Sérignan',
    'description' => '',
    'weight' => '5',
    'vocabulary' => 'section',
  );
  $terms[] = array(
    'uuid' => '15fdb0eb-c735-4cad-a904-68288f2581af',
    'name' => 'Mairie - Services',
    'description' => '',
    'weight' => '1',
    'vocabulary' => 'section',
  );
  $terms[] = array(
    'uuid' => '20d3cb6d-0328-4404-92a2-696dbeb4b682',
    'name' => 'Actualité - Agenda',
    'description' => '',
    'weight' => '3',
    'vocabulary' => 'section',
  );
  $terms[] = array(
    'uuid' => 'f1e1620e-872f-447a-affd-09ef6b6b2e35',
    'name' => 'Sortir - Découvrir',
    'description' => '',
    'weight' => '2',
    'vocabulary' => 'section',
  );
  return $terms;
}
