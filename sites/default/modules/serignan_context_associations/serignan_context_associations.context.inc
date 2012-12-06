<?php
/**
 * @file
 * serignan_context_associations.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_context_associations_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'associations';
  $context->description = 'Page d\'accueil de l\'annuaire des associations';
  $context->tag = 'special';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'associations' => 'associations',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'serignan_blocks-agenda_associations' => array(
          'module' => 'serignan_blocks',
          'delta' => 'agenda_associations',
          'region' => 'content',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil de l\'annuaire des associations');
  t('special');
  $export['associations'] = $context;

  return $export;
}
