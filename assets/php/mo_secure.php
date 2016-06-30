<?php
/*----------------- php source file -----------------
  @file      : assets/php/mo_secure.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [30.06.2016 10:21:26] -->
  ------HoC------
 ----------------------------------------------------*/

/*	@secure FORM */
if(isset($_POST["action"]) && $_POST["action"] == "contact_send") {
	$array = $required = array();

  // catch post data
	$post_data 	= isset($_POST["sec"]) ? $_POST["sec"] : null;
	$is_ajax 	= (isset($_POST["is_ajax"]) && $_POST["is_ajax"] == "true") ? true : false;

  // Check Action First!
	if($post_data === null) {
		if($is_ajax === false) {
			_redirect("#alert_mandatory");
		} else {
			die("_mandatory_");
		}
	}
	
  // EXTRACT DATA FROM POST
	foreach($post_data as $key=>$value){
    $key_title = ucfirst($key);
			
    //Split words or Converting: first_name => First Name
    $explode = @explode('_', $key_title);
    if(!isset($explode[1])){ $explode = @explode('-', $key_title); }
    if(isset($explode[1])){
    	$key_title = implode(' ', $explode);
    	$key_title = ucwords(strtolower($key_title));
    }

    // ----- extract required -----
    if(isset($post_data[$key]['required'])) {
    	$required[] = $key;
    	
    	// We need the user email&name for AddReplyTo on phpmailer!
    	if($key == 'user')
    		$array['user'] = $post_data[$key]['required'];
    
    	if($key == 'pwd')
    		$array['pwd'] = $post_data[$key]['required'];
    
    	// Build Mail BODY (if succes, use it)
    	$email_body .= "<b>{$key_title}:</b> {$post_data[$key]['required']} <br>";


			// ----- extract non-required -----
			} else {
				$non_required[] = $key;

				// We need the user email&name for AddReplyTo on phpmailer!
				if($key == 'name')
					$array['name'] = $post_data[$key];

				if($key == 'email')
					$array['email'] = $post_data[$key];

				// Build Mail BODY (if succes, use it)
				$email_body .= "<b>{$key_title}:</b> {$post_data[$key]} <br>";
			}


		}
   
  }







  // Check for required! Redirect if something found empty!
  foreach($required as $req) {
  	if(strlen(trim($post_data[$req]['required'])) < 2)  {
  		if($is_ajax === false) {
  			_redirect('#alert_mandatory');
  			exit;
  		} else {
  			die('_mandatory_');
  		}
  	}
  }
  
  // Check Email
  $array['email'] = ckmail($array['email']);
  if($array['email'] === false) {
  	if($is_ajax === false) {
  		_redirect('#alert_mandatory');
  		exit;
  	} else {
  		die('_mandatory_');
  	}
  }
  
  // Visitor IP:
  $ip = ip();
}
/** ******************************** **
 *	@REDIRECT
		#alert_success 		= email sent
		#alert_failed		= email not sent - internal server error (404 error or SMTP problem)
		#alert_mandatory	= email not sent - required fields empty
 ** ******************************** **/
function _redirect($hash) {
	
	$HTTP_REFERER = isset($_SERVER['HTTP_REFERER']) ? $_SERVER['HTTP_REFERER'] : null;

	if($HTTP_REFERER === null)
		die("Invalid Referer. Output Message: {$hash}");

	header("Location: {$HTTP_REFERER}{$hash}");
	exit;
}


/** ********************************** 
 @CHECK EMAIL
/** ******************************* **/
function ckmail($email) {
	$email = trim(strtolower($email));
	if(preg_match('/^[_a-z0-9-]+(\.[_a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,4})$/',trim($email))){
		return $email;
	} else { return false; }
}

 /** ********************************** 
 @VISITOR ip
/** ******************************* **/
function ip() {
	if     (getenv('HTTP_CLIENT_IP'))       { $ip = getenv('HTTP_CLIENT_IP');       } 
	elseif (getenv('HTTP_X_FORWARDED_FOR')) { $ip = getenv('HTTP_X_FORWARDED_FOR'); } 
	elseif (getenv('HTTP_X_FORWARDED'))     { $ip = getenv('HTTP_X_FORWARDED');     } 
	elseif (getenv('HTTP_FORWARDED_FOR'))   { $ip = getenv('HTTP_FORWARDED_FOR');   } 
	elseif (getenv('HTTP_FORWARDED'))       { $ip = getenv('HTTP_FORWARDED');       } 
  else { $ip = $_SERVER['REMOTE_ADDR'];        } 
	return $ip;
}


?>