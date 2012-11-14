<?php
/**
 * @file
 * serignan_sections.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_sections_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sections';
  $context->description = '';
  $context->tag = 'special';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'section' => 'section',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sections-block_subterms' => array(
          'module' => 'views',
          'delta' => 'sections-block_subterms',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('special');
  $export['sections'] = $context;

  return $export;
}
