<?php
/*
*
*/
//dsm($person);

?>
<li class="<?php print $classes; ?> people-result<?php if(!empty($page_counter)) : ?>people-page-<?php print $page_counter; ?><?php endif; ?>" id="people_search_result_<?php print $person['uuid']; ?>">
  <strong><a href="#people_search_result_<?php print $person['uuid']; ?>" class="people-more"><?php print render($person['name']); ?></a></strong>
  <div class="people-title">
  <?php
    if($person['primary_affiliation'] =='Retiree') {
      print render($person['primary_affiliation']);
    } elseif(!empty($person['title']) ) {
      print render($person['title']);
    } else {
      print render($person['primary_affiliation']);
    }
  ?>
  </div>
  <div class="people-meta">
    <?php if (!empty($person['majors'])): ?>
      <div class="people-major"><strong>Major</strong>: <?php print render($person['majors'][0]); ?></div>
    <?php endif; ?>
    <?php if(!empty($person['dept'])): ?>
      <div class="people-department"><strong>Department</strong>: <?php print render($person['dept']); ?></div>
    <?php endif; ?>
    <?php if(!empty($person['person_data'])): ?>
      <div class="people-data"><strong>Contact</strong>: <?php print render($person['person_data']); ?></div>
    <?php endif; ?>
    <?php if(!empty($person['address'])): ?>
      <?php
        $ucb_campus_box = strstr($person['address'], 'UCB');
        $uca_campus_box = strstr($person['address'], 'UCA');
        $sys_campus_box = strstr($person['address'], 'SYS');
        if ($ucb_campus_box) {
          $cu_address = 'Boulder, CO 80309-0' . strstr($person['address'], 'UCB', true);
        }
        elseif ($uca_campus_box) {
          $cu_address = 'Denver, CO 80217-3364';
        }
        elseif($sys_campus_box) {
          $cu_address = '';
        }
        else {
          $cu_address = '';
        }
      ?>
      <div class="people-address"><strong>Mailing Box</strong>: <?php print render($person['address']); ?><br />
      <?php print $cu_address; ?>
      </div>
    <?php endif; ?>
  </div>
    <?php if(arg(1) == 'all'): ?>
      <a href="/search/people/<?php print $person['name']; ?>#people_search_result_<?php print $person['uuid']; ?>" class="simple-button">View Person</a>
    <?php endif; ?>
</li>
