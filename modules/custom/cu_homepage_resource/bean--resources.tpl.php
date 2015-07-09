<?php
  if(array_key_exists('field_resource_bean_audience', $content)) {
    $audience_terms = $content['field_resource_bean_audience']['#items'];
    foreach ($audience_terms as $term) {
      if (empty($audience)) {
        $audience = $term['tid'];
      } else {
        $audience = $audience . "+" . $term['tid'];
      }
    }
  }
  $category = array_key_exists('field_resource_bean_category', $content) ? $content['field_resource_bean_category']['#items'][0]['tid'] : 'all';
?>
<div class="resources">
  <?php print views_embed_view('resources' , 'default', $audience, $category); ?>
</div>
