<div class="orgunit">
  <?php if(!empty($members)): ?>
  <h3><a href="#unit<?php print $id; ?>"><?php print $description ?></a></h3>
  <?php else: ?>
  <h3><?php print $description ?></h3>
  <?php endif; ?>
  <div>
    <?php if(!empty($campusbox)) : ?>
      Campus Box: <?php print $campusbox ?><br />
    <?php endif; ?>

    <?php if(!empty($building) || !empty($roomnumber)) : ?>
      <?php print $building ?> <?php print $roomnumber ?><br />
    <?php endif; ?>

    <?php if(!empty($streetaddress)) : ?>
      <?php print $streetaddress ?><br />
    <?php endif; ?>

    <?php if(!empty($city) || !empty($state)) : ?>

      <?php if (!empty($city)) : ?>
      <?php print $city ?>,
      <?php endif; ?>

      <?php if (!empty($state)) : ?>
      <?php print $state ?>
      <?php endif; ?>
      <br />

    <?php endif; ?>

    <?php if (!empty($phones)) : ?>
      <?php foreach($phones as $phone) : ?>
        <?php
          $phone_number = trim($phone->number);
          $phone_number = preg_replace('/-/','',$phone_number);
          $formatted_phone = substr($phone_number, 0,3) . '-' . substr($phone_number, 3,3) . '-' . substr($phone_number, 6,4);
        ?>
        <?php print $phone->description ?>: <?php print $formatted_phone ?><br />
      <?php endforeach ?>
    <?php endif; ?>

    <?php if (!empty($urls)) : ?>
      <ul class="orgunit-links">
      <?php foreach($urls as $url) : ?>
        <?php $text = !empty($url->description) ? $url->description : $url->url ?>
        <li><?php print l($text, $url->url) ?></li>
      <?php endforeach; ?>
      </ul>
    <?php endif; ?>

    <?php if (!empty($parent_id)) : ?>
      <div class="atoz-partof">Part of  <a href="/atoz/show/<?php print $parent_id ?>"><?php print $part_of ?></a></div>
    <?php endif; ?>
  </div>
  <?php if(!empty($members)): ?>
  <div class="orgunit-members" id="unit<?php print $id; ?>">
    <ul>
    <?php foreach($members as $member): ?>
      <?php
        /**
         * $member->rolephone can be manually entered for a user per ou in the admin
         * panel, whereas $member->workphone comes from the peoplesoft import for the person.
         * Rolephone should be used if it exists.
         */
        // Strip out any non digit characters, this was manually entered in the admin panel with no validation.
        // This logic doesn't belong in the view, but nobody likes to write Perl.
        $rolephone = preg_replace('/[^\d]/', '', $member->rolephone);
        $workphone = trim($member->workphone);
        // Use rolephone if we have it, otherwise use workphone from peoplesoft
        $phone = empty($rolephone) ? $workphone : $rolephone;
        $formatted_phone = substr($phone, 0,3) . '-' . substr($phone, 3,3) . '-' . substr($phone, 6,4);
      ?>
      <li class="orgunit-member"><span class="orgunit-member-desc"><?php print $member->description; ?></span>, <?php print $member->roledesc; ?>
        <ul class="orgunit-member-meta">
          <li><a href="mailto:<?php print $member->email; ?>"><?php print $member->email; ?></a></li>
          <?php if(strlen($formatted_phone) == 12): ?>
            <li><?php print $formatted_phone; ?></li>
          <?php endif; ?>
          <li><?php print $member->campusbox; ?></li>
        </ul>
      </li>
    <?php endforeach; ?>
    </ul>
  </div>
  <?php endif; ?>
</div>