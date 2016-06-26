<?php
/*----------------- php source file -----------------
  @file      : frontend/sliders.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [26.06.2016 13:14:38] -->
  ------HoC------
 ----------------------------------------------------*/
// TODO: setup to new slider revolution Version

function getRevolutionSlider(){
  $z = "
    <!-- REVOLUTION SLIDER -->\n
		<section id=\"slider\" class=\"slider fullwidthbanner-container roundedcorners\">\n
		  <div class=\"fullwidthbanner\" data-height=\"450\" data-navigationStyle=\"\">
		    <ul class=\"hide\">\n
					<!-- SLIDE  1-->\n
					<li data-transition=\"fade\" data-slotamount=\"1\" data-masterspeed=\"1000\" data-saveperformance=\"off\"  data-title=\"Slide\">\n
            <img src=\"assets/images/1x1.png\" data-lazyload=\"assets/images/slide_1.jpg\" alt=\"\" data-bgposition=\"center center\" 
              data-kenburns=\"on\" data-duration=\"10000\" data-ease=\"Linear.easeNone\" data-bgfit=\"100\" data-bgfitend=\"110\" data-bgpositionend=\"center bottom\" />\n
							
              <div class=\"tp-dottedoverlay twoxtwo\"></div>\n
							<div class=\"overlay dark-3\"></div>\n
							
              <div class=\"tp-caption customin ltl tp-resizeme text_white\"
								data-x=\"center\"
								data-y=\"105\"
								data-customin=\"x:0;y:150;z:0;rotationZ:0;scaleX:1;scaleY:1;skewX:0;skewY:0;opacity:0;transformPerspective:200;transformOrigin:50% 0%;\"
								data-speed=\"800\"
								data-start=\"1000\"
								data-easing=\"easeOutQuad\"
								data-splitin=\"none\"
								data-splitout=\"none\"
								data-elementdelay=\"0.01\"
								data-endelementdelay=\"0.1\"
								data-endspeed=\"1000\"
								data-endeasing=\"Power4.easeIn\" style=\"z-index: 10;\">
								<span class=\"weight-300\">APNOEA / ORIENTEERING / SPORT DIVING / UNDERWATER RUGBY / FINSWIMMING</span>\n
							</div>\n

							<div class=\"tp-caption customin ltl tp-resizeme large_bold_white\"
								data-x=\"center\"
								data-y=\"155\"
								data-customin=\"x:0;y:150;z:0;rotationZ:0;scaleX:1;scaleY:1;skewX:0;skewY:0;opacity:0;transformPerspective:200;transformOrigin:50% 0%\"
								data-speed=\"800\"
								data-start=\"1200\"
								data-easing=\"easeOutQuad\"
								data-splitin=\"none\"
								data-splitout=\"none\"
								data-elementdelay=\"0.01\"
								data-endelementdelay=\"0.1\"
								data-endspeed=\"1000\"
								data-endeasing=\"Power4.easeIn\" style=\"z-index: 10;\">\n
								Tauchsportverband Österreich
							</div>\n

							<div class=\"tp-caption customin ltl tp-resizeme small_light_white font-lato\"
								data-x=\"center\"
								data-y=\"245\"
								data-customin=\"x:0;y:150;z:0;rotationZ:0;scaleX:1;scaleY:1;skewX:0;skewY:0;opacity:0;transformPerspective:200;transformOrigin:50% 0%;\"
								data-speed=\"800\"
								data-start=\"1400\"
								data-easing=\"easeOutQuad\"
								data-splitin=\"none\"
								data-splitout=\"none\"
								data-elementdelay=\"0.01\"
								data-endelementdelay=\"0.1\"
								data-endspeed=\"1000\"
								data-endeasing=\"Power4.easeIn\" style=\"z-index: 10; width: 100%; max-width: 750px; white-space: normal; text-align:center; font-size:20px;\">\n
								The World Anti-Doping Agency's (WADA) mission is to lead a collaborative worldwide campaign for doping-free sport.
							</div>\n

							<div class=\"tp-caption customin ltl tp-resizeme\"
								data-x=\"center\"
								data-y=\"313\"
								data-customin=\"x:0;y:150;z:0;rotationZ:0;scaleX:1;scaleY:1;skewX:0;skewY:0;opacity:0;transformPerspective:200;transformOrigin:50% 0%;\"
								data-speed=\"800\"
								data-start=\"1550\"
								data-easing=\"easeOutQuad\"
								data-splitin=\"none\"
								data-splitout=\"none\"
								data-elementdelay=\"0.01\"
								data-endelementdelay=\"0.1\"
								data-endspeed=\"1000\"
								data-endeasing=\"Power4.easeIn\" style=\"z-index: 10;\">\n
								<a href=\"#purchase\" class=\"btn btn-default btn-lg\">\n
									<span>Purchase Smarty Now</span>\n
								</a>\n
							</div>\n
						</li>\n

						<!-- SLIDE  2-->\n
						<li data-transition=\"slideup\" data-slotamount=\"1\" data-masterspeed=\"1000\" data-saveperformance=\"off\"  data-title=\"Slide\">\n
							<img src=\"assets/images/1x1.png\" data-lazyload=\"assets/images/slide_2.jpg\" alt=\"\" data-bgposition=\"center center\"
               data-kenburns=\"on\" data-duration=\"10000\" data-ease=\"Linear.easeNone\" data-bgfit=\"100\" data-bgfitend=\"120\" />

							<div class=\"caption customin customout tp-resizeme\"
								data-x=\"left\" 
								data-hoffset=\"0\" 
								data-y=\"center\" 
								data-voffset=\"0\" 
								data-customin=\"x:50;y:150;z:0;rotationX:0;rotationY:0;rotationZ:0;scaleX:0.5;scaleY:0.5;skewX:0;skewY:0;opacity:0;transformPerspective:0;transformOrigin:50% 50%;\" 
								data-customout=\"x:0;y:0;z:0;rotationX:0;rotationY:0;rotationZ:0;scaleX:0.75;scaleY:0.75;skewX:0;skewY:0;opacity:0;transformPerspective:600;transformOrigin:50% 50%;\" 
								data-speed=\"800\" 
								data-start=\"1800\" 
								data-startslide=\"1\" 
								data-easing=\"Power4.easeOut\" 
								data-endspeed=\"500\" 
								data-endeasing=\"Power4.easeIn\" 
								data-autoplay=\"false\"
								data-autoplayonlyfirsttime=\"false\">
								<img src=\"./assets/images/a-timing_logo.png\" style=\"witdh: 100px !important;\" />
							</div>\n

							<div class=\"tp-caption medium_light_white lfb ltt tp-resizeme\"
								data-x=\"left\" data-hoffset=\"350\"
								data-y=\"center\" data-voffset=\"10\"
								data-speed=\"600\"
								data-start=\"900\"
								data-easing=\"Power4.easeOut\"
								data-splitin=\"none\"
								data-splitout=\"none\"
								data-elementdelay=\"0.01\"
								data-endelementdelay=\"0.1\"
								data-endspeed=\"500\"
								data-endeasing=\"Power4.easeIn\">\n
								The Live Timing Portal for swimming<br/>\n
								and Finswimming.<br/>\n
								<span style=\"font-size:24px;font-weight:400;\">www.a-timing.wien</span>\n
							</div>\n

						</li>\n

					</ul>\n
					<div class=\"tp-bannertimer\"></div>\n
				</div>\n
			</section>\n
			<!-- /REVOLUTION SLIDER -->\n";
  
  
  return $z;
}

?>