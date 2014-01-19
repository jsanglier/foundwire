<?php 

/**
 * Tabs Template
 *
 */

include("./includes/head.inc"); 
?>

<!-- Main Page Markup goes here -->

<div class="wrapper"><!-- Using a wrapper to give the main contents area a background colour -->

	<div class="row">
	  <div class="small-12 large-12 columns">
	  	<h1><?php echo $page->title; ?></h1>
	  	<?php echo $page->body; ?>
	  </div>
	</div>
	<div class="row">
		<div class="columns">

		<!-- This is the tabs function from functions.inc -->
		<?php tabs(); ?>
		</div>
	</div>

</div><!--/wrapper-->
<!-- /End main page markup -->
<?php 
/* Included common footer markup */
include("./includes/footer.inc");
?>

<!-- add any post footer markup specific to the page here -->

<?php
/* Included common <scripts> */
include("./includes/footscripts.inc");
?>

<!-- add any scripts like foundation plugins specific to this page here -->

<script src="<?php echo $config->urls->templates?>js/foundation/foundation.tab.js"></script>

<?php
/* Wrapping up the page */
include("./includes/foot.inc"); 