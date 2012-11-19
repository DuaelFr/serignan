<?php


/**
 * @file Views sort handler for the menu.
 */

class menu_node_views_sort_in_menu extends views_handler_sort {

  function query() {
    $this->ensure_my_table();
    $this->query->add_orderby(NULL, 'IF(' . $this->table_alias . '.mlid IS NULL, 0, 1)', $this->options['order']);
  }

}
