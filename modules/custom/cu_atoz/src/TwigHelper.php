<?php
declare(strict_types=1);

namespace CU\Drupal;

use Twig_Environment;
use Twig_Filter;
use Twig_Loader_Filesystem;

class TwigHelper {

  private $twig;

  public function __construct(string $loader_path, string $cache_path) {
    $loader = new Twig_Loader_Filesystem($loader_path);
    $this->twig = new Twig_Environment($loader, ['cache' => $cache_path]);

    // Add slugify filter.
    $filter = new Twig_Filter('slugify', [$this, 'slugifyFilter']);
    $this->twig->addFilter($filter);
  }

  public function slugifyFilter(string $string): string {
    // Lowercase the whole string.
    $slug = strtolower($string);

    // Create an array of all the words/characters.
    $slug_array = explode(' ', $slug);

    // Replace all special characters with empty strings.
    array_walk($slug_array, function (&$item, $key) {
      $item = preg_replace('/[^a-z0-9]/', '', $item);
      return $item;
    });

    // Remove empty items from the array.
    $slug_array = array_filter($slug_array);

    // Reconstruct the string.
    return implode('-', $slug_array);
  }

  public function render(string $template, array $vars): string {
    return $this->twig->render($template, $vars);
  }

  /**
   * @return mixed
   */
  static function getFormToken(): string {
    return 'token';
  }
}
