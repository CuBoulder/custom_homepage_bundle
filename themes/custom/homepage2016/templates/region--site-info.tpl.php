<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>

  <footer id="site-footer" class="<?php print $classes; ?>">
    <?php if ($content): ?>
      <div id="site-footer-content" class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
        <?php print $content; ?>
      </div>
    <?php endif; ?>
  </footer>
