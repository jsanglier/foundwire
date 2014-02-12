<?php

/* This is for any common footer markup that goes BEFORE both included scripts and the /body */

?>
<div class="footer">
	<div class="row">

		<div class="medium-8 columns">
      <?php 

      if($pages->get("/content/settings/")->single_image){

        echo "<img src='{$pages->get("/content/settings/")->single_image->url}' alt='{$pages->get("/content/settings/")->single_image->description}'>";
      }else{
        echo $pages->get("/content/settings/")->site_title;
      }
      ?>
      <p><a class="lightlink" href="http://processwire.com">ProcessWire 2.4</a> © 2014 by Ryan Cramer Design, LLC<br>
      <a class="lightlink" href="http://foundation.zurb.com/">Foundation 5.1.1</a> © 1998‐2014 ZURB, Inc. All rights reserved.</p>
		</div>

		<div class="medium-4 columns">
			<p><?=$pages->get("/content/settings/")->basic_textarea ?></p>
		</div>

	</div><!-- /row -->
</div><!-- /footer -->