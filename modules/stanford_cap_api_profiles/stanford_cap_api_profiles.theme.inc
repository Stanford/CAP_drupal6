<?php

/**
 * @file
 * Theme functions.
 */

function theme_stanford_cap_api_profiles_field_tree($schema_tree) {
  _stanford_cap_api_profiles_field_tree($schema_tree, $items);
  $attributes = array('id' => 'fields');

  return theme('item_list', $items, NULL, 'ul', $attributes);
}

/**
 * Renders fields checkboxes into tree of lists.
 */
function _stanford_cap_api_profiles_field_tree(&$elem, &$items = array()) {
  foreach (element_children($elem) as $key) {
    $class = $elem[$key]['#attributes']['class'];
    unset($elem[$key]['#attributes']['class']);
    $items[] = array(
      'class' => $class,
      'data' => drupal_render($elem[$key]),
    );
    unset($elem[$key]);
  }
}
