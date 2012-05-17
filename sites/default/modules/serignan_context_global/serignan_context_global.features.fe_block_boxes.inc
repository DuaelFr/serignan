<?php
/**
 * @file
 * serignan_context_global.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function serignan_context_global_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Affichage de la météo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'weather';
  $fe_block_boxes->body = '<div id="cont_419d050eaa899b0ac2e706b0a94aa41e">
<span id="h_419d050eaa899b0ac2e706b0a94aa41e">Meteo <a id="a_419d050eaa899b0ac2e706b0a94aa41e" href="http://www.tameteo.com/meteo_Serignan-Europe-France-Herault--1-24940.html" target="_blank" style="color:#818183;font-family:5;font-size:14px;">S&eacute;rignan</a></span><script type="text/javascript" src="http://www.tameteo.com/wid_loader/419d050eaa899b0ac2e706b0a94aa41e"></script>
</div>';

  $export['weather'] = $fe_block_boxes;

  return $export;
}
