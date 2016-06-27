<?php
/*----------------- php source file -----------------
  @file      : assets/lib/fu_html.inc
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [27.06.2016 17:21:02] -->
  ------HoC------
 ----------------------------------------------------*/

function HTML_Header(){
  $z  = "
    <!DOCTYPE html>\n
    <!--[if IE 8]>			<html class=\"ie ie8\"> <![endif]-->\n
    <!--[if IE 9]>			<html class=\"ie ie9\"> <![endif]-->\n
    <!--[if gt IE 9]><!-->	<html> <!--<![endif]-->\n
      <head>\n
    		<meta charset=\"utf-8\" />\n
    		<title>TSV&Ouml; Entry System</title>\n
    		<meta name=\"keywords\" content=\"\" />\n
    		<meta name=\"description\" content=\"\" />\n
    		<meta name=\"Author\" content=\"Andreas Steiner\" />\n

    		<!-- mobile settings -->\n
    		<meta name=\"viewport\" content=\"width=device-width, maximum-scale=1, initial-scale=1, user-scalable=0\" />\n
    		<!--[if IE]><meta http-equiv=\"X-UA-Compatible' content='IE=edge,chrome=1\"><![endif]-->\n
    
    		<!-- WEB FONTS : use %7C instead of | (pipe) -->\n
    		<link href=\"https://fonts.googleapis.com/css?family=Open+Sans:300,400%7CRaleway:300,400,500,600,700%7CLato:300,400,400italic,600,700\" rel=\"stylesheet\" type=\"text/css\" />\n
    
    		<!-- CORE CSS -->\n
    		<link href=\"assets/plugins/bootstrap/css/bootstrap.min.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    
    		<!-- REVOLUTION SLIDER -->\n
    		<link href=\"assets/plugins/slider.revolution/css/extralayers.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    		<link href=\"assets/plugins/slider.revolution/css/settings.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    
    		<!-- THEME CSS -->\n
    		<link href=\"assets/css/essentials.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    		<link href=\"assets/css/layout.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    
    		<!-- PAGE LEVEL SCRIPTS -->\n
    		<link href=\"assets/css/header-1.css\" rel=\"stylesheet\" type=\"text/css\" />\n
    		<link href=\"assets/css/color_scheme/default.css\" rel=\"stylesheet\" type=\"text/css\" id=\"color_scheme\" />\n
    	</head>\n
    	<body class=\"smoothscroll enable-animation\">\n
    ";
  return $z;
}

function HTML_Bottom($mo = ""){
  $z = "
    		<!-- JAVASCRIPT FILES -->\n
    		<script type=\"text/javascript\">var plugin_path = 'assets/plugins/';</script>\n
    		<script type=\"text/javascript\" src=\"assets/plugins/jquery/jquery-2.1.4.min.js\"></script>\n
    
    		<!-- REVOLUTION SLIDER -->\n
    		<script type=\"text/javascript\" src=\"assets/plugins/slider.revolution/js/jquery.themepunch.tools.min.js\"></script>\n
    		<script type=\"text/javascript\" src=\"assets/plugins/slider.revolution/js/jquery.themepunch.revolution.min.js\"></script>\n
    		<script type=\"text/javascript\" src=\"assets/js/revolution_slider.js\"></script>\n

        <!-- SCRIPTS -->
        <script type=\"text/javascript\" src=\"assets/js/scripts.js\"></script>\n";
  if($mo == "con"){
    $z .= "
    		<!-- PAGELEVEL SCRIPTS -->\n
    		<script type=\"text/javascript\" src=\"assets/js/contact.js\"></script>\n
    		
        <!-- GMAP.JS -->
		    <script type=\"text/javascript\" src=\"//maps.google.com/maps/api/js?key=AIzaSyCqCn84CgZN6o1Xc3P4dM657HIxkX3jzPY\"></script>
		    <script type=\"text/javascript\" src=\"assets/plugins/gmaps.js\"></script>\n
        <script type=\"text/javascript\" src=\"assets/js/tsvoe.gmaps.js\"></script>\n";
  }
  $z.= "  		
    	</body>\n
    </html>\n";
  return $z;
}

?>