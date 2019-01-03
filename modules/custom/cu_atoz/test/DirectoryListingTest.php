<?php
declare(strict_types=1);

use CU\Drupal\Directory\DirectoryListing;
use CU\Drupal\TwigHelper;
use PHPUnit\Framework\TestCase;

class DirectoryListingTest extends TestCase {

  /**
   * @var DirectoryListing
   */
  private $dl;

  /**
   * @var array
   */
  private $data;

  public function setUp() {
    $this->dl = new DirectoryListing();
    $this->data = json_decode(file_get_contents(__DIR__ . '/test_data.json'));
  }

  public function testFindOrgBySlug() {

    $twig_helper = new TwigHelper(
      __DIR__ . '/twig_templates',
      __DIR__ . '/twig_cache'
    );

    $this->dl->findOrgBySlug($this->data, '', $twig_helper);
  }
}
