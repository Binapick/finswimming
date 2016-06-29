<?php
/*----------------- php source file -----------------
  @file      : frontend/footer.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [29.06.2016 10:50:22] -->
  ------HoC------
 ----------------------------------------------------*/

$z = "
  <!-- FOOTER -->\n
	<footer id=\"footer\">\n
    <div class=\"container\">\n
      <div class=\"row\">\n
						
        <div class=\"col-md-3\">\n
          <!-- Footer Logo -->\n
					<img class=\"footer-logo\" src=\"assets/images/tsvoe_cmas_logo.png\" alt=\"\" />\n

          <!-- Contact Address -->\n
          <address>\n
            <ul class=\"list-unstyled\">\n
              <li class=\"footer-sprite address\">\n
                Slamastra&szlig;e 23<br>
								Obj. 3<br>
								1230 Wien, Austria<br>
              </li>\n
  						<li class=\"footer-sprite phone\">\n
  						  +43 664 466 2112\n
  						</li>\n
  						<li class=\"footer-sprite email\">\n
  						  <a href=\"mailto:office@tsvoe.at\">office@tsvoe.at</a>\n
  						</li>\n
            </ul>\n
          </address>\n
          <!-- /Contact Address -->\n
        </div>\n

				<div class=\"col-md-3\">\n
					<!-- a-timing.wien -->\n
					<img class=\"footer-logo\" src=\"assets/images/a-timing_logo.png\" alt=\"\" height=\"52\"/>\n
          <address>\n
  					<ul class=\"list-unstyled\">
              <li class=\"footer-sprite address\">\n
                <br>
								<br>
								<br>
              </li>\n
  						<li class=\"footer-sprite phone\">\n
  						  +43 664 662 8492\n
  						</li>\n
  						<li class=\"footer-sprite email\">\n
  						  <a href=\"mailto:office@tsvoe.at\">office@tsvoe.at</a>\n
  						</li>\n
  					</ul>
          </address>\n
					<!-- /timing.wien -->\n
				</div>
        <div class=\"col-md-2\">
					<!-- Links -->
					<h4 class=\"letter-spacing-1\">".$footer["explore"]."</h4>\n
					<ul class=\"footer-links list-unstyled\">\n
						<li><a href=\"#\">Home</a></li>\n
						<li><a href=\"#\">About Us</a></li>\n
						<li><a href=\"#\">??</a></li>\n
						<li><a href=\"#\">??</a></li>\n
						<li><a href=\"#\">??</a></li>\n
						<li><a href=\"#\">Tour</a></li>\n
						<li><a href=\"index.php?l=".$top_bar["set_language"]."&mo=con\">Contact Us</a></li>\n
					</ul>\n
					<!-- /Links -->\n
				</div>
        <div class=\"col-md-4\">\n
					<!-- Newsletter Form -->\n
					<h4 class=\"letter-spacing-1\">Newsletter</h4>\n
					<p>".$footer["subscribe"]."</p>\n

					<form class=\"validate\" action=\"assets/php/newsletter.php\" method=\"post\" data-success=\"".$footer["sub_succsess"]."\" data-toastr-position=\"bottom-right\">\n
						<div class=\"input-group\">\n
							<span class=\"input-group-addon\"><i class=\"fa fa-envelope\"></i></span>\n
							<input type=\"email\" id=\"email\" name=\"email\" class=\"form-control required\" placeholder=\"".$footer["sub_email"]."\">\n
							<span class=\"input-group-btn\">\n
								<button class=\"btn btn-success\" type=\"submit\">".$footer["sub_send"]."</button>\n
							</span>\n
						</div>\n
					</form>\n
					<!-- /Newsletter Form -->\n
					<!-- Social Icons -->\n
					<div class=\"margin-top-20\">\n
						<a href=\"#\" class=\"social-icon social-icon-border social-facebook pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Facebook\">\n
							<i class=\"icon-facebook\"></i>\n
							<i class=\"icon-facebook\"></i>\n
						</a>\n
						<a href=\"#\" class=\"social-icon social-icon-border social-twitter pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Twitter\">\n
							<i class=\"icon-twitter\"></i>\n
							<i class=\"icon-twitter\"></i>\n
						</a>\n
						<a href=\"#\" class=\"social-icon social-icon-border social-gplus pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Google plus\">\n
							<i class=\"icon-gplus\"></i>\n
							<i class=\"icon-gplus\"></i>\n
						</a>
						<a href=\"#\" class=\"social-icon social-icon-border social-linkedin pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Linkedin\">\n
							<i class=\"icon-linkedin\"></i>\n
							<i class=\"icon-linkedin\"></i>\n
						</a>\n
						<a href=\"#\" class=\"social-icon social-icon-border social-rss pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Rss\">\n
							<i class=\"icon-rss\"></i>\n
							<i class=\"icon-rss\"></i>\n
						</a>\n			
					</div>\n
					<!-- /Social Icons -->\n
        </div>\n
			</div>\n
    </div>\n
		<div class=\"copyright\">\n
			<div class=\"container\">\n
				<ul class=\"pull-right nomargin list-inline mobile-block\">\n
					<li><a href=\"#\">Terms &amp; Conditions</a></li>\n
					<li>&bull;</li>\n
					<li><a href=\"#\">Privacy</a></li>\n
				</ul>
				&copy; ".$footer["copyright"].", a-timing.wien\n
			</div>\n
		</div>\n
	</footer>\n
  <!-- /FOOTER -->\n";

  return $z;
?>