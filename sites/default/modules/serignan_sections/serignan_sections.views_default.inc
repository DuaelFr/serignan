<?php
/**
 * @file
 * serignan_sections.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function serignan_sections_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Rubriques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'taxonomy_term_data|weight';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_5'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_6'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_7'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_8'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_9'] = 'full';
  /* Relation: Terme de taxonomie : Contenu utilisant Rubrique */
  $handler->display->display_options['relationships']['reverse_field_sections_node']['id'] = 'reverse_field_sections_node';
  $handler->display->display_options['relationships']['reverse_field_sections_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_sections_node']['field'] = 'reverse_field_sections_node';
  $handler->display->display_options['relationships']['reverse_field_sections_node']['required'] = TRUE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Critère de tri: Terme de taxonomie : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filtre contextuel: Terme de taxonomie : Terme parent */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['parent']['title'] = '%1';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['parent']['validate']['fail'] = 'empty';
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'section' => 'section',
  );

  /* Display: Subterms (Page) */
  $handler = $view->new_display('page', 'Subterms (Page)', 'page_subterms');
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $translatables['sections'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('field_sections'),
    t('Tout'),
    t('%1'),
    t('Subterms (Page)'),
  );
  $export['sections'] = $view;

  $view = new view();
  $view->name = 'sections_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rubriques Contenu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relation: Contenu : Rubrique (field_sections) */
  $handler->display->display_options['relationships']['field_sections_tid']['id'] = 'field_sections_tid';
  $handler->display->display_options['relationships']['field_sections_tid']['table'] = 'field_data_field_sections';
  $handler->display->display_options['relationships']['field_sections_tid']['field'] = 'field_sections_tid';
  $handler->display->display_options['relationships']['field_sections_tid']['required'] = TRUE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filtre contextuel: Terme de taxonomie : Identifiant (ID) du terme */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_sections_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: List (Block) */
  $handler = $view->new_display('block', 'List (Block)', 'block_list');
  $translatables['sections_content'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('terme à partir de field_sections'),
    t('Tout'),
    t('List (Block)'),
  );
  $export['sections_content'] = $view;

  return $export;
}
