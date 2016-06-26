<?php
/*----------------- php source file -----------------
  @file      : frontend/mo_contact.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [26.06.2016 17:54:47] -->
  ------HoC------
 ----------------------------------------------------*/

$z = "
  <!-- PAGE HEADER -->\n
  <section class=\"page-header page-header-xs\">\n
    <div class=\"container\">\n
      <h1>".$GLOBALS["top_bar_contact"]."</h1>\n
      <!-- breadcrumbs -->\n
      <ol class=\"breadcrumb\">\n
	      <li><a href=\"#\">Home</a></li>\n
				<li><a href=\"#\">Pages</a></li>\n
				<li class=\"active\">".$GLOBALS["top_bar_contact"]."</li>\n
			</ol><!-- /breadcrumbs -->\n
		</div>\n
  </section>\n
	<!-- /PAGE HEADER -->\n";

$z .= "
  <!-- contact form -->\n
  <section>\n
    <div class=\"container\">\n
  		<div class=\"row\">\n
		    <!-- FORM -->\n
				<div class=\"col-md-8 col-sm-8\">\n
          <h3>Drop us a line or just say <strong><em>Hello!</em></strong></h3>
					<!-- Alert Success -->
					<div id=\"alert_success\" class=\"alert alert-success margin-bottom-30\">
						<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-hidden=\"true\">&times;</button>
						<strong>Thank You!</strong> Your message successfully sent!
					</div><!-- /Alert Success -->

					<!-- Alert Failed -->
					<div id=\"alert_failed\" class=\"alert alert-danger margin-bottom-30\">
						<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-hidden=\"true\">&times;</button>
						<strong>[SMTP] Error!</strong> Internal server error!
					</div><!-- /Alert Failed -->

					<!-- Alert Mandatory -->
					<div id=\"alert_mandatory\" class=\"alert alert-danger margin-bottom-30\">
						<button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-hidden=\"true\">&times;</button>
						<strong>Sorry!</strong> You need to complete all mandatory (*) fields!
					</div><!-- /Alert Mandatory -->
					<form action=\"assets/lib/php/contact.php\" method=\"post\" enctype=\"multipart/form-data\">
				    <fieldset>
						  <input type=\"hidden\" name=\"action\" value=\"contact_send\" />
							<div class=\"row\">
								<div class=\"form-group\">
									<div class=\"col-md-4\">
										<label for=\"contact:name\">Full Name *</label>
										<input required type=\"text\" value=\"\" class=\"form-control\" name=\"contact[name][required]\" id=\"contact:name\">
									</div>
									<div class=\"col-md-4\">
										<label for=\"contact:email\">E-mail Address *</label>
										<input required type=\"email\" value=\"\" class=\"form-control\" name=\"contact[email][required]\" id=\"contact:email\">
									</div>
									<div class=\"col-md-4\">
										<label for=\"contact:phone\">Phone</label>
										<input type=\"text\" value=\"\" class=\"form-control\" name=\"contact[phone]\" id=\"contact:phone\">
									</div>
								</div>
							</div>
							<div class=\"row\">
								<div class=\"form-group\">
									<div class=\"col-md-8\">
										<label for=\"contact:subject\">Subject *</label>
										<input required type=\"text\" value=\"\" class=\"form-control\" name=\"contact[subject][required]\" id=\"contact:subject\">
									</div>
									<div class=\"col-md-4\">
										<label for=\"contact_department\">Department</label>
										<select class=\"form-control pointer\" name=\"contact[department]\">
											<option value=\"\">--- Select ---</option>
											<option value=\"Eventmanager\">Eventmanager</option>
											<option value=\"Administrator\">Administrator</option>
											<option value=\"Finswimming \">Finswimming</option>
										</select>
									</div>
								</div>
							</div>
							<div class=\"row\">
								<div class=\"form-group\">
									<div class=\"col-md-12\">
										<label for=\"contact:message\">Message *</label>
										<textarea required maxlength=\"10000\" rows=\"8\" class=\"form-control\" name=\"contact[message]\" id=\"contact:message\"></textarea>
									</div>
								</div>
							</div>
							<div class=\"row\">
								<div class=\"form-group\">
									<div class=\"col-md-12\">
										<label for=\"contact:attachment\">File Attachment</label>

										<!-- custom file upload -->
										<input class=\"custom-file-upload\" type=\"file\" id=\"file\" name=\"contact[attachment]\" id=\"contact:attachment\" data-btn-text=\"Select a File\" />
										<small class=\"text-muted block\">Max file size: 10Mb (zip/pdf/jpg/png/lxf)</small>
									</div>
								</div>
							</div>
            </fieldset>
						<div class=\"row\">
						  <div class=\"col-md-12\">
					      <button type=\"submit\" class=\"btn btn-primary\"><i class=\"fa fa-check\"></i> SEND MESSAGE</button>
						  </div>
						</div>
          </form>

        </div>
				<!-- /FORM -->

      </div>
		</div>
	</section>
	<!-- contact form -->

";

  return $z;
?>