<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function stanford_cap_api_profiles_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML for CAP profiles
  $formats['Full HTML for CAP profiles'] = array(
    'name' => 'Full HTML for CAP profiles',
    'roles' => array(),
    'filters' => array(),
  );

  return $formats;
}
