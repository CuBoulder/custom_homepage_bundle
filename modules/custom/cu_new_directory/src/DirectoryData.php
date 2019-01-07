<?php
declare(strict_types=1);

namespace CU\Drupal\Directory;

class DirectoryData {

  public static function getData(string $data_path): array {
    try {
      return json_decode(file_get_contents($data_path));
      //  return json_decode(file_get_contents($data_path. '/test/test_data.json'));
    } catch (Exception $exception) {
      // @todo Log exception.
      return [];
    }
  }

}
