<?php
/**
 * @file
 * serignan_galleries.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function serignan_galleries_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => 'a894b3b5-4e37-4ee2-8ac0-b31faac22b2b',
    'name' => 'Visites virtuelles',
    'description' => '',
    'weight' => '0',
    'vocabulary' => 'galleries_category',
  );
  $terms[] = array(
    'uuid' => 'cacf4f6e-1d03-4de2-9d3b-94bfa364a6ef',
    'name' => 'Vidéos',
    'description' => '',
    'weight' => '0',
    'vocabulary' => 'galleries_category',
  );
  $terms[] = array(
    'uuid' => 'ea0dd39f-05b4-410b-8c4c-87fd15840374',
    'name' => 'Photos',
    'description' => '',
    'weight' => '0',
    'vocabulary' => 'galleries_category',
  );
  return $terms;
}
