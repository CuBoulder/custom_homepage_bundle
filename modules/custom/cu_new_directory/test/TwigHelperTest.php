<?php
declare(strict_types=1);

use CU\Drupal\TwigHelper;
use PHPUnit\Framework\TestCase;

class TwigHelperTest extends TestCase {

  /**
   * @var TwigHelper
   */
  private $helper;

  public function setUp() {
    $this->helper = new TwigHelper(
      __DIR__ . '/twig_templates',
      __DIR__ . '/twig_cache'
    );
  }

  public function test__construct() {
    $this->assertInstanceOf(TwigHelper::class, $this->helper);
  }

  public function testGetFormToken() {
    $this->assertSame(
      'token',
      $this->helper::getFormToken(),
      'Form token does not equal expected output.'
    );
  }

  public function testRender() {
    $output_string = '<h1>A Template</h1>
<p>Message: Hello Cruel World!</p>
<p>Slug: hello-earl-is-99</p>
';

    $this->assertSame($output_string, $this->helper->render('index.twig', [
      'message' => 'Hello Cruel World!',
      'path' => 'Hello & Earl is > $99',
    ]));
  }

  public function testSlugifyFilter() {
    $this->assertSame(
      'hello-earl-is-99',
      $this->helper->slugifyFilter('Hello & Earl is > $99'),
      'Slugify filter does not equal expected output.'
    );
  }
}
