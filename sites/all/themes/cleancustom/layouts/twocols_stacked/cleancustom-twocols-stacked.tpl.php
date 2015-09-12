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

<div class="two-cols-stacked row">
  <div class="two-cols-stacked-left col-7 col-8-m col-12-sm fl-left">
    <?php print $content['left']; ?>
  </div>
  <div class="two-cols-stacked-right col-4 col-12-sm fl-right">
    <?php print $content['right']; ?>
    <?php print $content['right_block']; ?>
  </div>
</div>