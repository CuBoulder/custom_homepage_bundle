<?php
declare(strict_types=1);

class DirectorySearch {

  const DEFAULT_PARAMS = [
    'query' => '',
    'task' => '-Any-',
    'type' => '-Any-',
    'letter' => '-Any-',
  ];

  private $orgs;

  private $filteredOrgs;

  private $params;

  private $tasks;

  private $types;

  private $letters;

  public function __construct(array $data) {
    $this->orgs = $this->formatData($data);

    // @todo Split out setting params from this function.
    $this->filterOrgs($this->orgs);

    $this->tasks = ['one', 'two', 'three'];

    $types = array_unique(array_map(function ($org) {
      return $org->Type;
    }, $this->orgs));

    // Need to do this since some types are blank.
    $this->types = array_filter($types, function($type) {
      return !empty($type);
    });

    $this->letters = range('A', 'Z');

    $this->setDefaultsForOptions(['tasks', 'types', 'letters']);
  }

  private function formatData(array $data): array {
    return array_map(function ($el) {
      // Add org name.
      $el->Name = explode('|', $el->orgNames)[0];

      return $el;
    }, $data);
  }

  private function filterOrgs(array $orgs) {
    $params = [];

    if (!empty($_POST['directory-search-box'])) {
      $query = $params['query'] = $_POST['directory-search-box'];
      $orgs = array_filter($orgs, function ($el) use ($query) {
        return preg_match("/$query/i", $el->Name);
      });
    }

    if (!empty($_POST['d-type-select']) && $_POST['d-type-select'] !== '-Any-') {
      $type = $params['type'] = $_POST['d-type-select'];
      $orgs = array_filter($orgs, function ($el) use ($type) {
        return $type === $el->Type;
      });
    }

    if (!empty($_POST['d-task-select']) && $_POST['d-task-select'] !== '-Any-') {
      $task = $params['task'] = $_POST['d-task-select'];
      // @todo Implement selecting by task.
      //      $orgs = array_filter($orgs, function($el) use ($task) {
      //        return $task === $el->type;
      //      });
    }

    if (!empty($_POST['d-letter-select']) && $_POST['d-letter-select'] !== '-Any-') {
      $letter = $params['letter'] = $_POST['d-letter-select'];
      $orgs = array_filter($orgs, function ($el) use ($letter) {
        return strtoupper($el->Name[0]) === $letter;
      });
    }

    $this->params = array_merge(self::DEFAULT_PARAMS, $params);
    $this->filteredOrgs = $orgs;
  }

  /**
   * @return array
   */
  public function getParams(): array {
    return $this->params;
  }

  /**
   * @return array
   */
  public function getOrgs(): array {
    return $this->orgs;
  }

  /**
   * @return array
   */
  public function getFilteredOrgs(): array {
    return $this->filteredOrgs;
  }

  /**
   * @return mixed
   */
  public function getTasks() {
    return $this->tasks;
  }

  /**
   * @return mixed
   */
  public function getTypes(): array {
    return $this->types;
  }

  /**
   * @return mixed
   */
  public function getLetters(): array {
    return $this->letters;
  }

  private function setDefaultsForOptions(array $optionTypes) {
    foreach ($optionTypes as $type) {
      array_unshift($this->$type, '-Any-');
    }
  }
}
