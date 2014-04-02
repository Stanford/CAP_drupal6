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

/**
 * Emulates Drupal 7 #tableselect FAPI type for result table.
 */
function theme_stanford_cap_api_profiles_result_tableselect($form) {
  $header = array(
    theme('table_select_header_cell'),
    t('Name'),
    t('Profile link'),
  );
  $output = '';
  $rows = array();
  foreach (element_children($form['name']) as $key) {
    $row = array();
    $row[] = drupal_render($form['profiles'][$key]);
    $row[] = drupal_render($form['name'][$key]);
    $row[] = drupal_render($form['link'][$key]);
    $rows[] = $row;
  }
  $output .= theme('table', $header, $rows);
  $output .= drupal_render($form);

  return $output;
}

/**
 * Emulates Drupal 7 #tableselect FAPI type for group sync table.
 */
function theme_stanford_cap_api_profiles_sync_groups_tableselect($form) {
  $header = array(
    theme('table_select_header_cell'),
    t('Group'),
    t('Profiles in group'),
  );
  $output = '';
  $rows = array();
  foreach (element_children($form['name']) as $key) {
    $row = array();
    $row[] = drupal_render($form['groups'][$key]);
    $row[] = drupal_render($form['name'][$key]);
    $row[] = drupal_render($form['count'][$key]);
    $rows[] = $row;
  }
  $output .= theme('table', $header, $rows);
  $output .= drupal_render($form);

  return $output;
}