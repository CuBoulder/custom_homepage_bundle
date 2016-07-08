<div class="orgunit">
  <?php if (!empty($orgid)): ?>
    <h3><a href="/atoz/show/<?php print $orgid; ?>"><?php print $description ?></a></h3>
  <?php else: ?>
    <h3><a href="<?php print $website; ?>"><?php print $description ?></a></h3>
  <?php endif; ?>
  <div class="atoz-links">
    <?php if (!empty($orgid)) : ?>
      <a href="/atoz/show/<?php print $orgid ?>" class="button">Directory Info</a>
    <?php endif; ?>
    
    <?php if (!empty($website)) : ?>
      <a href="<?php print $website ?>" target="_blank" class="button">Website</a>
    <?php endif; ?>

    <?php if (!empty($parent_id)) : ?>
      <div class="atoz-partof">Part of <a href="/atoz/show/<?php print $parent_id ?>"><?php print $part_of ?></a></div>
    <?php endif; ?>
  </div>
</div>
