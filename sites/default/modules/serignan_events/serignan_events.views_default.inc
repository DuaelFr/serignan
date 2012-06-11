<?php
/**
 * @file
 * serignan_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function serignan_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agendas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Champ: Global : Voir le compteur de résultats */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Champ : Image */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'event_home',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Champ: Contenu : Catégories */
  $handler->display->display_options['fields']['field_event_categories']['id'] = 'field_event_categories';
  $handler->display->display_options['fields']['field_event_categories']['table'] = 'field_data_field_event_categories';
  $handler->display->display_options['fields']['field_event_categories']['field'] = 'field_event_categories';
  $handler->display->display_options['fields']['field_event_categories']['label'] = '';
  $handler->display->display_options['fields']['field_event_categories']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_categories']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_categories']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_categories']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_categories']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_categories']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_categories']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_categories']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_categories']['field_api_classes'] = 0;
  /* Champ: Contenu : Du */
  $handler->display->display_options['fields']['field_date_start']['id'] = 'field_date_start';
  $handler->display->display_options['fields']['field_date_start']['table'] = 'field_data_field_date_start';
  $handler->display->display_options['fields']['field_date_start']['field'] = 'field_date_start';
  $handler->display->display_options['fields']['field_date_start']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_start']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_start']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_start']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_start']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date_start']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_start']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_start']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_start']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date_start']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_start']['field_api_classes'] = 0;
  /* Champ: Contenu : au */
  $handler->display->display_options['fields']['field_date_end']['id'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['fields']['field_date_end']['field'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_end']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_end']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_end']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_end']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date_end']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_end']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_end']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_end']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date_end']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_end']['field_api_classes'] = 0;
  /* Champ: Contenu : Contenu */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '160',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = '[+]';
  /* Critère de tri: Contenu : Épinglé (en haut des listes) */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Critère de tri: Contenu : au (field_date_end) */
  $handler->display->display_options['sorts']['field_date_end_value']['id'] = 'field_date_end_value';
  $handler->display->display_options['sorts']['field_date_end_value']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['sorts']['field_date_end_value']['field'] = 'field_date_end_value';
  $handler->display->display_options['sorts']['field_date_end_value']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Home (Block) */
  $handler = $view->new_display('block', 'Home (Block)', 'block_home');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Tout l\'agenda';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_counter';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'title' => 0,
    'field_picture' => 0,
    'field_event_categories' => 0,
    'field_date_start' => 0,
    'field_date_end' => 0,
    'body' => 0,
    'view_node' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_counter_start'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 0,
    'title' => 0,
    'field_picture' => 0,
    'field_event_categories' => 0,
    'field_date_start' => 0,
    'field_date_end' => 0,
    'body' => 0,
    'view_node' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_counter_start'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'home';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Épinglé (en haut des listes) */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Critère de tri: Contenu : au (field_date_end) */
  $handler->display->display_options['sorts']['field_date_end_value']['id'] = 'field_date_end_value';
  $handler->display->display_options['sorts']['field_date_end_value']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['sorts']['field_date_end_value']['field'] = 'field_date_end_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Critère de filtrage: Contenu : Promu en page d'accueil */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Critère de filtrage: Contenu : au (field_date_end) */
  $handler->display->display_options['filters']['field_date_end_value']['id'] = 'field_date_end_value';
  $handler->display->display_options['filters']['field_date_end_value']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['filters']['field_date_end_value']['field'] = 'field_date_end_value';
  $handler->display->display_options['filters']['field_date_end_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_end_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_date_end_value']['default_date'] = 'now';
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: List (Page) */
  $handler = $view->new_display('page', 'List (Page)', 'page_list');
  $handler->display->display_options['path'] = 'agenda';

  /* Display: Sidebar (Block) */
  $handler = $view->new_display('block', 'Sidebar (Block)', 'block_sidebar');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Tout l\'agenda';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Épinglé (en haut des listes) */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Critère de tri: Contenu : au (field_date_end) */
  $handler->display->display_options['sorts']['field_date_end_value']['id'] = 'field_date_end_value';
  $handler->display->display_options['sorts']['field_date_end_value']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['sorts']['field_date_end_value']['field'] = 'field_date_end_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : au (field_date_end) */
  $handler->display->display_options['filters']['field_date_end_value']['id'] = 'field_date_end_value';
  $handler->display->display_options['filters']['field_date_end_value']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['filters']['field_date_end_value']['field'] = 'field_date_end_value';
  $handler->display->display_options['filters']['field_date_end_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_end_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_end_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_date_end_value']['default_date'] = 'now';
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $translatables['events'] = array(
    t('Master'),
    t('Agenda'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Du'),
    t('au'),
    t('[+]'),
    t('Home (Block)'),
    t('Tout l\'agenda'),
    t('List (Page)'),
    t('Sidebar (Block)'),
  );
  $export['events'] = $view;

  return $export;
}
