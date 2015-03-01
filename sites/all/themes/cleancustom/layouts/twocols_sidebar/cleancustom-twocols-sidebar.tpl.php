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
 *   - $content['sidebar_left']: Content in the left column.
 *   - $content['main']: Content in the right column.
 *   - $content['search_block']: Content in the right column.
 *   - $content['block_left']: Content in the right column.
 *   - $content['block_right']: Content in the right column.
 *   - $content['sidebar_Second']: Content in the second sidebar column.
 *   - $content['block_right_bottom']: Content in the right bottom column.
 *   - $content['block_left_bottom']: Content in the left bottom column.
 *   @author <Aleksandar Dunchev aldunchev@gmail.com>
 */
?>

<div class="row">
  <aside class="search-block">
    <?php print $content['block_full']; ?>
  </aside>
  <div class="col-3 fl-left sidebar-left">
    <aside>
      <?php print $content['sidebar_left']; ?>
    </aside>
  </div> 

  <div class="col-9 fl-left">
    <div class="clearfix">
      <div class="ad ad-large col-8 fl-left">
        <aside>
          <?php print $content['block_left']; ?>
        </aside>
      </div>
      <div class="ad ad-medium col-4 fl-left">
        <aside>
          <?php print $content['block_right']; ?>
        </aside>
      </div>
    </div>
    <section>
      <?php print $content['main']; ?>
    </section>
  </div>
  <div class="clearfix col-full">
    <div class="col-6 fl-left">
      <aside>
        <?php print $content['sidebar_second']; ?>
      </aside>
    </div>
    <div class="ad ad-medium col-2 fl-left">
      <aside>
        <?php print $content['block_left_bottom']; ?>
      </aside>
    </div>
    <div class="ad ad-large col-4 fl-left">
      <aside>
        <?php print $content['block_right_bottom']; ?>
      </aside>
    </div>
  </div>
</div>

