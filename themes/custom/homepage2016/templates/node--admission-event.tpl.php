<?php
  hide($content['field_adm_event_geofield']);
?>

<div class="event-address">
    <?php print render($content); ?>
</div>

<div class="event-map">
  <?php print render($content['field_adm_event_geofield']); ?>
</div>
