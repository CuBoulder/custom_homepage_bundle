<?php
declare(strict_types=1);

namespace CU\Drupal\Directory;

class DirectorySearch {

  private const DEFAULT_PARAMS = [
    'query' => '',
    'task' => '-Any-',
    'type' => '-Any-',
    'letter' => '-Any-',
  ];

  private $orgs;

  private $filteredOrgs;

  private $tasks;

  private $types;

  private $letters;

  /**
   * @var array Variables gathered from POST request.
   */
  private $post;

  // @todo Should setters be used in constructors?
  // https://softwareengineering.stackexchange.com/questions/329806/why-did-it-not-become-a-common-pattern-to-use-setters-in-the-constructor
  public function __construct(array $data, array $post) {
    $this->setPost($post);
    $this->setOrgs($this->formatData($data));

    // @todo Split out setting params from this function.
    $this->filterOrgs($this->orgs);

    $tasks = ['one', 'two', 'three'];
    array_unshift($tasks, '-Any-');
    $this->setTasks($tasks);

    $types = array_unique(array_map(function ($org) {
      return $org->Type;
    }, $this->orgs));

    // Need to do this since some types are blank.
    $filtered_types = array_filter($types, function($type) {
      return !empty($type);
    });
    array_unshift($filtered_types, '-Any-');
    $this->setTypes($filtered_types);

    $letters = range('A', 'Z');
    array_unshift($letters, '-Any-');
    $this->setLetters($letters);
  }

  private function formatData(array $data): array {
    return array_map(function ($el) {
      // Add org name.
      $el->Name = explode('|', $el->orgNames)[0];
      return $el;
    }, $data);
  }

  private function filterOrgs(array $orgs): void {

    if ($this->post['query'] !== '') {
      $query = $this->post['query'];
      $orgs = array_filter($orgs, function ($el) use ($query) {
        return preg_match("/$query/i", $el->Name);
      });
    }

    if (($type = $this->post['type']) !== '-Any-') {
      $orgs = array_filter($orgs, function ($el) use ($type) {
        return $type === $el->Type;
      });
    }

    if (($task = $this->post['task']) !== '-Any-') {
      // @todo Implement selecting by task.
      //      $orgs = array_filter($orgs, function($el) use ($task) {
      //        return $task === $el->type;
      //      });
    }

    if (($letter = $this->post['letter']) !== '-Any-') {
      $orgs = array_filter($orgs, function ($el) use ($letter) {
        return strtoupper($el->Name[0]) === $letter;
      });
    }

    $this->setFilteredOrgs($orgs);
  }

  /**
   * @return array
   */
  public function getOrgs(): array {
    return $this->orgs;
  }

  /**
   * @param array $orgs
   */
  public function setOrgs(array $orgs): void {
    $this->orgs = $orgs;
  }

  /**
   * @return array
   */
  public function getFilteredOrgs(): array {
    return $this->filteredOrgs;
  }

  /**
   * @param mixed $filteredOrgs
   */
  public function setFilteredOrgs($filteredOrgs): void {
    $this->filteredOrgs = $filteredOrgs;
  }

  /**
   * @return mixed
   */
  public function getTasks() {
    return $this->tasks;
  }

  /**
   * @param array $tasks
   */
  public function setTasks(array $tasks): void {
    $this->tasks = $tasks;
  }

  /**
   * @return mixed
   */
  public function getTypes(): array {
    return $this->types;
  }

  /**
   * @param array $types
   */
  public function setTypes(array $types): void {
    $this->types = $types;
  }

  /**
   * @return mixed
   */
  public function getLetters(): array {
    return $this->letters;
  }

  /**
   * @param array $letters
   */
  public function setLetters(array $letters): void {
    $this->letters = $letters;
  }

  /**
   * @return array
   */
  public function getPost(): array {
    return $this->post;
  }

  /**
   * @param array $post
   */
  public function setPost(array $post): void {
    $temp_post = [];

    $temp_post['query'] = !empty($post['directory-search-box']) ? $post['directory-search-box'] : self::DEFAULT_PARAMS['query'];
    $temp_post['type'] = $post['d-type-select'] ?? self::DEFAULT_PARAMS['type'];
    $temp_post['task'] = $post['d-task-select'] ?? self::DEFAULT_PARAMS['task'];
    $temp_post['letter'] = $post['d-letter-select'] ?? self::DEFAULT_PARAMS['letter'];

    $this->post = $temp_post;
  }
}
