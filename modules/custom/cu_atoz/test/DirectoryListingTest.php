<?php
declare(strict_types=1);

use CU\Drupal\Directory\DirectoryListing;
use CU\Drupal\Directory\DirectorySearch;
use CU\Drupal\TwigHelper;
use PHPUnit\Framework\TestCase;

class DirectoryListingTest extends TestCase {

  /**
   * @var DirectoryListing
   */
  private $dl;

  /**
   * @var DirectorySearch
   */
  private $ds;

  public function setUp() {
    $this->dl = new DirectoryListing();

    $data = json_decode(file_get_contents(__DIR__ . '/test_data.json'));
    $this->ds = new DirectorySearch($data, []);
  }

  public function testFindOrgBySlug() {

    $twig_helper = new TwigHelper(
      __DIR__ . '/twig_templates',
      __DIR__ . '/twig_cache'
    );

    $result = $this->dl->findOrgBySlug($this->ds->getOrgs(), 'arts-and-sciences-college-of', $twig_helper);

    $expected_result = [
      'orgNames' => 'Arts and Sciences, College of|Academic Affairs',
      'Type' => 'College',
      'Listing Owner' => '',
      'Primary Website' => '',
      'Primary Email' => '',
      'Staff Listing (URL)' => '',
      'Campus Box' => '',
      'Room' => '',
      'Phone' => '',
      'Campus Bird ID' => '',
      'Contact 1 Label' => '',
      'Contact 1 field' => '',
      'Contact 2 Label' => '',
      'Contact 2 Field' => '',
      'Summary' => '',
      'Name' => 'Arts and Sciences, College of',
    ];

    $this->assertSame($expected_result, $result);
  }
}
