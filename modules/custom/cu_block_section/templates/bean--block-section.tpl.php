<div id="block-section-<?php print $bean->bid; ?>" class="block-section block-section-text-<?php print $content['field_hero_unit_text_color'][0]['#markup']; ?> block-section-background-<?php print $content['field_hero_unit_bg_color'][0]['#markup']; ?>" style="background-image:url(<?php print render($content['field_block_section_bg_image']); ?>);">
  <div class="block-section-content-wrapper clearfix">
    <div class="clearfix block-section-content block-section-content-bg-<?php print $content['field_block_section_content_bg'][0]['#markup']; ?>">
      <?php print render($content['blocks']); ?>
    </div>
  </div>  
</div>
