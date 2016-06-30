<?php
/*----------------- php source file -----------------
  @file      : frontend/mo_secure.xxx
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [30.06.2016 10:32:44] -->
  ------HoC------
 ----------------------------------------------------*/

if($a == "1"){
  $z = "
  <!-- PAGE HEADER -->\n
  <section class=\"page-header page-header-xs\">\n
    <div class=\"container\">\n
      <h1>".$secure["header"]."</h1>\n
      <!-- breadcrumbs -->\n
      <ol class=\"breadcrumb\">\n
	      <li><a href=\"#\">Home</a></li>\n
				<li><a href=\"#\">Pages</a></li>\n
				<li class=\"active\">".$secure["header"]."</li>\n
			</ol><!-- /breadcrumbs -->\n
		</div>\n
  </section>\n
	<!-- /PAGE HEADER -->\n";
  $z .= getForm($a, $secure);
  return $z;
  
}
elseif($a == "10"){
  $z = "
  <!-- PAGE HEADER -->\n
  <section class=\"page-header page-header-xs\">\n
    <div class=\"container\">\n
      <h1>".$secure["header"]."</h1>\n
      <!-- breadcrumbs -->\n
      <ol class=\"breadcrumb\">\n
	      <li><a href=\"#\">Home</a></li>\n
				<li><a href=\"#\">Pages</a></li>\n
				<li class=\"active\">".$secure["header"]."</li>\n
			</ol><!-- /breadcrumbs -->\n
		</div>\n
  </section>\n
	<!-- /PAGE HEADER -->\n";
  $z .= getForm($a, $secure);
  return $z;
}

function getForm($a, $secure){
  if($a == "10"){
    $l = "";
    $r = " active";
  }else{
    $l = " active";
    $r = "";
  }
  $z = "
  <!-- Registration first -->\n
  <section>\n
    <div class=\"container\">\n
      <div class=\"row\">\n
        <div class=\"col-md-6 col-md-offset-3\">\n
          <div class=\"toggle toggle-transparent toggle-accordion toggle-noicon\">\n
            <div class=\"toggle".$l."\">\n
						  <label class=\"size-20\"><i class=\"fa fa-leaf\"></i> &nbsp; ".$secure["return_user"]."</label>\n
			        <div class=\"toggle-content\">\n
							  
                <!-- ALERT -->
								<!--
                <div id=\"alert_mandatory\" class=\"alert alert-mini alert-danger margin-bottom-30\">\n
			            <strong>Oh snap!</strong> ".$secure["login_false"]."
								</div>
                -->
                <!-- /ALERT -->\n
								
                <form class=\"sky-form\" method=\"post\" action=\"#\" autocomplete=\"off\">\n
                  <div class=\"clearfix\">\n
                    <!-- User -->\n
                    <div class=\"form-group\">\n
                      <label>User</label>\n
                      <label class=\"input margin-bottom-10\" for=\"sec:user\">\n
                        <i class=\"ico-append fa fa-envelope\"></i>\n
                        <input required=\"\" type=\"text\" name=\"sec[user][required]\" id=\"sec:user\">\n
                        <b class=\"tooltip tooltip-top-right\">".$secure["user_info"]."</b>\n
                      </label>\n
                    </div>\n
                        
                    <!-- Password -->\n
                    <div class=\"form-group\">\n
                      <label>Password</label>\n
                      <label class=\"input margin-bottom-10\" for=\"sec:pwd\">\n
                        <i class=\"ico-append fa fa-lock\"></i>\n
                        <input required=\"\" type=\"password\" name=\"sec[pwd][required]\" id=\"sec:pwd\">\n
                        <b class=\"tooltip tooltip-top-right\">".$secure["pass_info"]."</b>\n
                      </label>\n
                    </div>\n
                  </div>\n
                  <div class=\"row\">\n
                    <div class=\"col-md-6 col-sm-6 col-xs-6\">\n
	                    <!-- Inform Tip -->\n                                      
											<div class=\"form-tip pt-20\">\n
												<a class=\"no-text-decoration size-13 margin-top-10 block bold\" href=\"#\">".$secure["forgot_pw"]."?</a>\n
											</div>\n
										</div>\n
                    <div class=\"col-md-6 col-sm-6 col-xs-6 text-right\">\n
                      <button class=\"btn btn-primary\"><i class=\"fa fa-check\"></i> ".$secure["login"]."</button>\n
                    </div>\n
                  </div>\n
                </form>\n
              </div>\n
            </div>\n
						<div class=\"toggle".$r."\">\n
              <label class=\"size-20\"><i class=\"glyphicon glyphicon-user\"></i> &nbsp; ".$secure["no_account"]."</label>\n
              <div class=\"toggle-content\">\n
                
                <!-- ALERT -->\n
                <!--
                <div class=\"alert alert-mini alert-danger margin-bottom-30\">\n
                  <strong>Oh snap!</strong> ".$secure["pw_failure"]."!\n
                </div>
                -->
                <!-- /ALERT -->\n

                <form class=\"nomargin sky-form\" action=\"#\" method=\"post\" enctype=\"multipart/form-data\">\n
                  <fieldset>\n
                    <div class=\"row\">\n
                    <div class=\"form-group\">\n
                      <div class=\"col-md-6 col-sm-6\">\n
                        <label>First Name *</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-user\"></i>\n
                          <input required=\"\" type=\"text\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Your First Name</b>\n
                        </label>\n
                      </div>\n

                      <div class=\"col-md-6 col-sm-6\">\n
                        <label for=\"register:last_name\">Last Name *</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-user\"></i>\n
                          <input required=\"\" type=\"text\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Your Last Name</b>\n
                        </label>\n
                      </div>\n
                    </div>\n
                  </div>\n

                  <div class=\"row\">\n
                    <div class=\"form-group\">\n
                      <div class=\"col-md-6 col-sm-6\">\n
                        <label for=\"register:email\">Email *</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-envelope\"></i>\n
                          <input required=\"\" type=\"text\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Your Email</b>\n
                        </label>\n
                      </div>\n

                      <div class=\"col-md-6 col-sm-6\">\n
                        <label for=\"register:phone\">Phone</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-phone\"></i>\n
                          <input type=\"text\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Your Phone (optional)</b>\n
                        </label>\n
                      </div>\n
                    </div>\n
                  </div>\n

                  <div class=\"row\">\n
                    <div class=\"form-group\">\n
                      <div class=\"col-md-6 col-sm-6\">\n
                        <label for=\"register:pass1\">Password *</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-lock\"></i>\n
                          <input required=\"\" type=\"password\" class=\"err\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Min. 6 characters</b>\n
                        </label>\n
                      </div>\n

                      <div class=\"col-md-6 col-sm-6\">\n
                        <label for=\"register:pass2\">Password Again *</label>\n
                        <label class=\"input margin-bottom-10\">\n
                          <i class=\"ico-append fa fa-lock\"></i>\n
                          <input required=\"\" type=\"password\" class=\"err\">\n
                          <b class=\"tooltip tooltip-bottom-right\">Type the password again</b>
                        </label>\n
                      </div>\n
                    </div>\n
                  </div>\n

                  <hr />\n

                  <label class=\"checkbox nomargin\"><input class=\"checked-agree\" type=\"checkbox\" name=\"checkbox\"><i></i>I agree to the <a href=\"#\" data-toggle=\"modal\" data-target=\"#termsModal\">Terms of Service</a></label>\n
                  <label class=\"checkbox nomargin\"><input type=\"checkbox\" name=\"checkbox\"><i></i>I want to receive news and  special offers</label>\n
                </fieldset>\n
                  <div class=\"row\">\n
                    <div class=\"col-md-12\">\n
                      <button type=\"submit\" class=\"btn btn-primary\"><i class=\"fa fa-check\"></i> REGISTER</button>\n
                    </div>\n
                  </div>\n                
                </form>\n
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>
  <!-- / -->
  
  
  
  ";
return $z;  
}
?>