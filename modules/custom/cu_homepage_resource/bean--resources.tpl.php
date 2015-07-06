<?php
  $audience = array_key_exists('field_resource_bean_audience', $content) ? $content['field_resource_bean_audience']['#items'][0]['tid'] : 'all';
  $category = array_key_exists('field_resource_bean_category', $content) ? $content['field_resource_bean_category']['#items'][0]['tid'] : 'all';
?>
<div class="resources">
  <?php print views_embed_view('resources' , 'default', $audience, $category); ?>
</div>
