<?php

/**
 * Implements THEMENAME_alpha_preprocess_HOOK().
 */
function serignan_alpha_preprocess_node(&$vars) {
  if (!empty($vars['type']) && in_array($vars['type'], array('news', 'event', 'zoom'))) {
    if ($vars['view_mode'] == 'full') {
      array_unshift($vars['theme_hook_suggestions'], 'node__news_event_zoom');
    }    
  }
}
