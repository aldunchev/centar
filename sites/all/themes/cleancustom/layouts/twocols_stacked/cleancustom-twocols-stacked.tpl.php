<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a one column panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   @author <Aleksandar Dunchev aldunchev@gmail.com>
 */
?>

<div class="row">
  <div class="col-7 fl-left offer-left">
    <?php print $content['left']; ?>
  </div>
  <div class="col-5 fl-left">
    <?php print $content['right']; ?>
  </div>
</div>