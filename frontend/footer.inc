<?php
/*----------------- php source file -----------------
  @file      : frontend/footer.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [01.07.2016 16:02:14] -->
  ------HoC------
 ----------------------------------------------------*/

$z = "
  <!-- FOOTER -->\n
	<footer id=\"footer\">\n
    <div class=\"container\">\n
      <div class=\"row margin-top-20 margin-bottom-20 size-13\">\n
				<!-- col #1 -->		
        <div class=\"col-md-3 col-sm-3\">\n
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
        <!-- /col #1 -->
        
        <!-- col #2 -->	
				<div class=\"col-md-5 col-sm-5\">\n
          <h4 class=\"letter-spacing-1\">Links</h4>\n
          <div class=\"owl-carousel text-center owl-mini-testimonial nomargin\" data-plugin-options='{\"singleItem\": true, \"autoPlay\": 4000, \"navigation\": false, \"pagination\": true, \"transitionStyle\":\"goDown\"}'>\n
						
            <div class=\"testimonial\">\n
							<figure>\n
								<img class=\"\" src=\"assets/images/sportmin.jpg\" alt=\"\" />\n
							</figure>\n
							<div class=\"testimonial-content nopadding\">\n
								<p>Antidopping Agentur Österreich</p>\n
								<cite>\n
									Joana Doe\n
									<span>Company Ltd.</span>\n
								</cite>\n
							</div>\n
						</div>\n

						<div class=\"testimonial\">\n
						  <figure>
								<img class=\"\" src=\"assets/images/nada.jpg\" alt=\"\" />
							</figure>
							<div class=\"testimonial-content nopadding\">
                <p>Quod necessitatibus quis expedita harum provident eos obcaecati id culpa.</p>
								<cite>
											Melissa Doe
											<span>Company Ltd.</span>
										</cite>
							</div>\n
						</div>\n

          </div>\n
          <hr />

          <!-- Social Icons -->
          <div class=\"clearfix\">\n
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
          <!-- /Social Icons -->
				</div>
        <!-- /col #2 -->	
        
       
        <!-- col #3 -->
        <div class=\"col-md-4 col-sm-4\">\n
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
					<!-- /Social Icons -->\n
        </div>\n
        <!-- /col #3 -->
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