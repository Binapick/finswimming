<?php
/*----------------- php source file -----------------
  @file      : frontend/footer.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [28.06.2016 10:37:46] -->
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
					<img class=\"footer-logo\" src=\"assets/images/a-timing_logo.png\" alt=\"\" />\n
					<ul class=\"footer-posts list-unstyled\">
						<li>
							<a href=\"#\">Donec sed odio dui. Nulla vitae elit libero, a pharetra augue</a>
							<small>29 June 2015</small>
						</li>
						<li>
							<a href=\"#\">Nullam id dolor id nibh ultricies</a>
							<small>29 June 2015</small>
						</li>
						<li>
							<a href=\"#\">Duis mollis, est non commodo luctus</a>
							<small>29 June 2015</small>
						</li>
					</ul>
					<!-- /Latest Blog Post -->
				</div>

						<div class=\"col-md-2\">

							<!-- Links -->
							<h4 class=\"letter-spacing-1\">EXPLORE SMARTY</h4>
							<ul class=\"footer-links list-unstyled\">
								<li><a href=\"#\">Home</a></li>
								<li><a href=\"#\">About Us</a></li>
								<li><a href=\"#\">Our Services</a></li>
								<li><a href=\"#\">Our Clients</a></li>
								<li><a href=\"#\">Our Pricing</a></li>
								<li><a href=\"#\">Smarty Tour</a></li>
								<li><a href=\"#\">Contact Us</a></li>
							</ul>
							<!-- /Links -->

						</div>

						<div class=\"col-md-4\">

							<!-- Newsletter Form -->
							<h4 class=\"letter-spacing-1\">KEEP IN TOUCH</h4>
							<p>Subscribe to Our Newsletter to get Important News &amp; Offers</p>

							<form class=\"validate\" action=\"php/newsletter.php\" method=\"post\" data-success=\"Subscribed! Thank you!\" data-toastr-position=\"bottom-right\">
								<div class=\"input-group\">
									<span class=\"input-group-addon\"><i class=\"fa fa-envelope\"></i></span>
									<input type=\"email\" id=\"email\" name=\"email\" class=\"form-control required\" placeholder=\"Enter your Email\">
									<span class=\"input-group-btn\">
										<button class=\"btn btn-success\" type=\"submit\">Subscribe</button>
									</span>
								</div>
							</form>
							<!-- /Newsletter Form -->

							<!-- Social Icons -->
							<div class=\"margin-top-20\">
								<a href=\"#\" class=\"social-icon social-icon-border social-facebook pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Facebook\">

									<i class=\"icon-facebook\"></i>
									<i class=\"icon-facebook\"></i>
								</a>

								<a href=\"#\" class=\"social-icon social-icon-border social-twitter pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Twitter\">
									<i class=\"icon-twitter\"></i>
									<i class=\"icon-twitter\"></i>
								</a>

								<a href=\"#\" class=\"social-icon social-icon-border social-gplus pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Google plus\">
									<i class=\"icon-gplus\"></i>
									<i class=\"icon-gplus\"></i>
								</a>

								<a href=\"#\" class=\"social-icon social-icon-border social-linkedin pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Linkedin\">
									<i class=\"icon-linkedin\"></i>
									<i class=\"icon-linkedin\"></i>
								</a>

								<a href=\"#\" class=\"social-icon social-icon-border social-rss pull-left\" data-toggle=\"tooltip\" data-placement=\"top\" title=\"Rss\">
									<i class=\"icon-rss\"></i>
									<i class=\"icon-rss\"></i>
								</a>
					
							</div>
							<!-- /Social Icons -->

						</div>

					</div>

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