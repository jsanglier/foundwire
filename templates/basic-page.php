<?php 

/**
 * basic-page template
 * Use this as the basis for any other template for this profile
 */

include("./includes/head.inc"); 
?>

<!-- Main Page Markup goes here -->

<div class="wrapper"><!-- Using a wrapper to give the main contents area a background colour -->

<div class="row">
  <div class="small-12 large-12 columns">
  	<h1><?php echo $page->title; ?></h1>
  </div>
</div>

</div><!--/wrapper-->
<!-- /End main page markup -->
<?php 
/* Included common footer markup */
include("./includes/footer.inc");
?>

<!-- add any post footer specific to the page here -->

<?php
/* Included common <scripts> */
include("./includes/footscripts.inc");
?>

<!-- add any scripts like foundation plugins specific to this page here -->

<?php
/* Wrapping up the page */
include("./includes/foot.inc"); 