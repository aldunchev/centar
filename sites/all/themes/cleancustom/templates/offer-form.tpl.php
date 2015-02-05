<?php
/**
 * @file cleancustom template file for node add/edit form
 * @author 'Aleksandar Dunchev'
 * @email 'aldunchev@gmail.com'
 */
?>
<section>
  <div class="heading-wrapper">
    <h1><?php print t('Add Offer'); ?></h1>
  </div>
  <div class="col-6 clearfix center-margin">
    <?php print drupal_render_children($form); ?>
  </div>
</section>