<?php
/**
 * @file
 * serignan_context_tourism.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_context_tourism_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-tourism';
  $context->description = 'Page d\'accueil tourisme';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sortir-decouvrir' => 'sortir-decouvrir',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_sidebar' => array(
          'module' => 'views',
          'delta' => 'events-block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'serignan_blocks-sidebar_links_special' => array(
          'module' => 'serignan_blocks',
          'delta' => 'sidebar_links_special',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'section-tourism',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Page d\'accueil tourisme');
  $export['front-tourism'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front-tourism';
  $context->description = 'Toutes les pages de la section tourisme';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sortir-decouvrir/*' => 'sortir-decouvrir/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_sidebar' => array(
          'module' => 'views',
          'delta' => 'events-block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'serignan_blocks-sidebar_links_special' => array(
          'module' => 'serignan_blocks',
          'delta' => 'sidebar_links_special',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'section-tourism',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Toutes les pages de la section tourisme');
  $export['not-front-tourism'] = $context;

  return $export;
}
