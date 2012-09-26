<?php
/**
 * @file
 * serignan_context_slideshows.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_context_slideshows_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-slideshow';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~slideshow-home' => '~slideshow-home',
        '~slideshow-live' => '~slideshow-live',
        '~slideshow-tourism' => '~slideshow-tourism',
        '~slideshow-news-events' => '~slideshow-news-events',
        '~slideshow-services' => '~slideshow-services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'serignan_blocks-header_decorator' => array(
          'module' => 'serignan_blocks',
          'delta' => 'header_decorator',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['not-slideshow'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow-front';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'front' => 'front',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow-live';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'vivre-serignan' => 'vivre-serignan',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow_live-block' => array(
          'module' => 'views',
          'delta' => 'slideshow_live-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow-live'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow-news-events';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'actualites-agenda' => 'actualites-agenda',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow_news_events-block' => array(
          'module' => 'views',
          'delta' => 'slideshow_news_events-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow-news-events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow-services';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mairie-services' => 'mairie-services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow_services-block' => array(
          'module' => 'views',
          'delta' => 'slideshow_services-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow-services'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow-tourism';
  $context->description = '';
  $context->tag = 'Slideshow';
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
        'views-slideshow_tourism-block' => array(
          'module' => 'views',
          'delta' => 'slideshow_tourism-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow-tourism'] = $context;

  return $export;
}
