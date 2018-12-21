<?php
declare(strict_types=1);

class DirectoryListing {
  public function findOrgBySlug(array $orgs, string $slug, TwigHelper $twig_helper): array {
    $org = array_filter($orgs, function ($el) use ($slug, $twig_helper) {
      return $twig_helper->slugifyFilter($el->Name) === $slug;
    });

    return (array) array_values($org)[0];
  }
}
