<?php
namespace Foodie;

/**
 * Wrapper for EntityFieldQuery to ensure we always run all our queries
 * as UID = 1
 */
class EFQ extends \EntityFieldQuery {
  public function __construct() {
    $this->addMetaData('account', user_load(1));
  }
}