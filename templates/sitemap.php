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


<?php
// bundle up the first level pages and prepend the root home page
$root = $pages->get(1);
$pa = $root->children;
$pa = $pa->prepend($root);

function renderMenu($pa, $root = null, $output = '', $level = 0) {
    if(!$root) $root = wire("pages")->get(1);
    $output = '';
    $level++;
    foreach($pa as $child) {

        $has_children = count($child->children) ? true : false;
  
        $output .= "<li><a href='$child->url'>$child->title</a>";
 
        // If this child is itself a parent and not the root page, then render its children in their own menu too...
        if($has_children && $child !== $root) {
            $output .= renderMenu($child->children, $root, $output, $level);
        }
        $output .= '</li>';
    }

    return "<ul>$output</ul>";
}
 
// Set the ball rolling...
echo renderMenu($pa);
?>

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
    <script>
      $(document).foundation();
    </script>
<?php
/* Wrapping up the page */
include("./includes/foot.inc"); 