<?php
/**
 * @file
 * Template for a 1 column panel layout.
 *
 * This template provides a one column panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the left column.
 *   - $content['main']: Content in the right column.
 */
?>

<section><?php print $content['top']; ?></section>
<section><?php print $content['main']; ?></section>

