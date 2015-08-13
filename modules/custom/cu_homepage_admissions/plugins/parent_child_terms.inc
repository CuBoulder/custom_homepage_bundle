<?php
/**
 * @file
 * When a term is inputed, grab its parents and children
 */
$plugin = array(
  'form' => 'cu_homepage_admissions_parent_child_terms_form',
  'callback' => 'cu_homepage_admissions_parent_child_terms_callback',
  'name' => 'Select Parent and Child Terms',
  'multi' => 'loop',
  'category' => 'CU',
  'default description' => 'Select all parent and child terms',
);
function cu_homepage_admissions_parent_child_terms_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Selects all parents and child terms for a given taxonomy term.');
  return $form;
}

function cu_homepage_admissions_parent_child_terms_callback($source, $item_key, $element_key, &$field, $settings) {
  // Get the tid of the term, using its name.
  $query = new EntityFieldQuery;
  $result = $query
    ->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('name', $field)
    ->execute();
  // Shift 'unwraps' the object from its array.
  $term = array_shift($result['taxonomy_term']);
  // Get all the children. Produces an array of objects.
  $children = taxonomy_get_children($term->tid);
  $new_field = array();
  // Bring the original term with us.
  $new_field[] = $field;
  // Loop through the array of objects and return an array of names.
  foreach ($children as $child) {
    $new_field[] = $child->name;
  }
  // Now for the parent.
  $parents = taxonomy_get_parents($term->tid);
  foreach ($parents as $parent) {
    $new_field[] = $parent->name;
  }
  // Implode so that we can use the explode tamper, otherwise it won't work correctly.
  $field = implode(",", $new_field);
}
