<?php
declare(strict_types=1);

use CU\Drupal\Directory\DirectorySearch;
use PHPUnit\Framework\TestCase;

class DirectorySearchTest extends TestCase {

  /**
   * @var array
   */
  private $data;

  public function setUp() {
    $this->data = json_decode(file_get_contents(__DIR__ . '/test_data.json'));
  }

  public function testDefaultSearch() {
    $post = [];
    $ds = new DirectorySearch($this->data, $post);

    $this->assertSame($this->data, $ds->getFilteredOrgs());
  }

  public function testSearchWithQuery() {
    $post = [
      'directory-search-box' => 'aca',
    ];

    $expected_result = '{"0":{"orgNames":"Academic Affairs","Type":"Executive Vice Chancellor","Listing Owner":"","Primary Website":"","Primary Email":"","Staff Listing (URL)":"","Campus Box":"","Room":"","Phone":"","Campus Bird ID":"","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Academic Affairs"},"3":{"orgNames":"Arts and Sciences Academic Advising Center|Arts and Sciences, College of|Academic Affairs","Type":"Academic Support","Listing Owner":"firestjc","Primary Website":"https:\/\/www.colorado.edu\/artssciences-advising\/","Primary Email":"","Staff Listing (URL)":"https:\/\/www.colorado.edu\/artssciences-advising\/meet-your-advisor","Campus Box":"290 UCB","Room":"WDBY 109","Phone":"303-492-7885","Campus Bird ID":"194006","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Arts and Sciences Academic Advising Center"},"4":{"orgNames":"Baker Residential Academic Program|Arts and Sciences, College of|Academic Affairs","Type":"Academic","Listing Owner":"figel","Primary Website":"https:\/\/www.colorado.edu\/bakerrap\/","Primary Email":"","Staff Listing (URL)":"https:\/\/www.colorado.edu\/bakerrap\/contact-us\/administrators","Campus Box":"176 UCB","Room":"Baker 200","Phone":"","Campus Bird ID":"193803","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Baker Residential Academic Program"}}';
    $ds = new DirectorySearch($this->data, $post);

    $this->assertEquals((array) json_decode($expected_result), $ds->getFilteredOrgs());
  }

  public function testSearchWithType() {
    $post = [
      'd-type-select' => 'College',
    ];
    $expected_result = '{"1":{"orgNames":"Arts and Sciences, College of|Academic Affairs","Type":"College","Listing Owner":"","Primary Website":"","Primary Email":"","Staff Listing (URL)":"","Campus Box":"","Room":"","Phone":"","Campus Bird ID":"","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Arts and Sciences, College of"}}';

    $ds = new DirectorySearch($this->data, $post);
    $this->assertEquals((array) json_decode($expected_result), $ds->getFilteredOrgs());
  }

  public function testSearchWithLetter() {
    $post = [
      'd-letter-select' => 'C',
    ];
    $expected_result = '{"5":{"orgNames":"Center to Advance Research and Teaching in the Social Sciences (CARTSS)|Arts and Sciences, College of|Academic Affairs","Type":"Center","Listing Owner":"nneumann","Primary Website":"https:\/\/www.colorado.edu\/cartss\/","Primary Email":"cartss@colorado.edu","Staff Listing (URL)":"https:\/\/www.colorado.edu\/cartss\/cartss-steering-committee","Campus Box":"481 UCB","Room":"1B73","Phone":"303-735-3721","Campus Bird ID":"193898","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Center to Advance Research and Teaching in the Social Sciences (CARTSS)"},"6":{"orgNames":"Center of the American West|Arts and Sciences, College of|Academic Affairs","Type":"Center","Listing Owner":"ires","Primary Website":"https:\/\/www.centerwest.org\/","Primary Email":"admin@centerwest.org","Staff Listing (URL)":"https:\/\/www.centerwest.org\/about\/staff","Campus Box":"282 UCB","Room":"229","Phone":"303.492.4879","Campus Bird ID":"193924","Contact 1 Label":"Academic Program Information:","Contact 1 field":"303-735-1399","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Center of the American West"},"7":{"orgNames":"Center for Asian Studies|Arts and Sciences, College of|Academic Affairs","Type":"Center","Listing Owner":"toakes","Primary Website":"https:\/\/www.colorado.edu\/cas\/","Primary Email":"cas@colorado.edu","Staff Listing (URL)":"https:\/\/www.colorado.edu\/cas\/people\/cas-staff","Campus Box":"366 UCB","Room":"","Phone":"303-735-5122","Campus Bird ID":"226113","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Center for Asian Studies"},"8":{"orgNames":"Center for Astrophysics and Space Astronomy|Arts and Sciences, College of|Academic Affairs","Type":"Center","Listing Owner":"kaha0714","Primary Website":"https:\/\/www.colorado.edu\/casa\/","Primary Email":"","Staff Listing (URL)":"https:\/\/www.colorado.edu\/casa\/people","Campus Box":"389 UCB","Room":"DUAN C333","Phone":"303-492-4050","Campus Bird ID":"193841","Contact 1 Label":"Astrophysics Research Lab","Contact 1 field":"303-492-5859","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Center for Astrophysics and Space Astronomy"},"9":{"orgNames":"Center for British and Irish Studies|Arts and Sciences, College of|Academic Affairs","Type":"Center","Listing Owner":"hammerp","Primary Website":"https:\/\/www.colorado.edu\/center\/british-irish-studies\/","Primary Email":"cbis@colorado.edu","Staff Listing (URL)":"https:\/\/www.colorado.edu\/center\/british-irish-studies\/our-people","Campus Box":"84 UCB","Room":"room M549","Phone":"","Campus Bird ID":"193942","Contact 1 Label":"","Contact 1 field":"","Contact 2 Label":"","Contact 2 Field":"","Summary":"","Name":"Center for British and Irish Studies"}}';

    $ds = new DirectorySearch($this->data, $post);
    $this->assertEquals((array) json_decode($expected_result), $ds->getFilteredOrgs());
  }

  // @todo Implement test.
//  public function testSearchWithTask() {
//    $post = [
//      'd-task-select' => 'C',
//    ];
//    $expected_result = '';
//
//    $ds = new DirectorySearch($this->data, $post);
//    $this->assertEquals((array) json_decode($expected_result), $ds->getFilteredOrgs());
//  }
}
