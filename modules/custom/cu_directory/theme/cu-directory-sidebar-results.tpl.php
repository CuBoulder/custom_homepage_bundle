<?php
/*
*
*/
// dsm($variables);
?>
<?php
  $qstring = urldecode( arg(2) );
?>
<div class="<?php print $classes; ?>">
  <?php if ($results && !$people_data['error']): ?>
    <ul class="cu-directory-results"><?php print $results; ?></ul>
    <?php if (!in_array(arg(1), array('people', 'students', 'facstaff'))) : ?>
      <a href="/gsearch/people/<?php print $qstring; ?>" class="button button-blue button-small">
        <?php print format_plural($people_count, 'View person', 'View all @count people', array('@count' => $people_count)) ?>
      </a>
    <?php endif; ?>
  <?php // If no error, but search is nonfuzzy, that means we tried a fuzzy search and got too many results. Therefore, thats the error we want to return ?>
  <?php elseif ($people_data['error'] || $people_data['search_type'] == 'nonfuzzy') : ?>
  Sorry, there were too many results.
  <?php else: ?>
  No matches in CU People search.
  <?php endif; ?>
</div>

<script type="text/javascript">
jQuery(".sidebar .people-meta").hide();
jQuery(".sidebar ul.cu-directory-results li:gt(9)").hide();
jQuery(".sidebar a.people-more").click(function(e) {
  e.preventDefault();
  var showthis = jQuery(this).attr("href");
  var el = jQuery(".sidebar " + showthis + " .people-meta");
  el.is(':visible') ? el.fadeOut() : el.fadeIn();
  return false;
});
</script>
