/**	CONTACT FORM
*************************************************** **/
var _hash = window.location.hash;

/**
	BROWSER HASH - from php/secure.php redirect!

	#alert_success 		= email sent
	#alert_failed		= email not sent - internal server error (404 error or SMTP problem)
	#alert_mandatory	= email not sent - required fields empty
**/	
jQuery(_hash).show();

/**
	Checkbox on "I agree" modal Clicked!
**/
jQuery("#terms-agree").click(function(){
	jQuery('#termsModal').modal('toggle');

	// Check Terms and Conditions checkbox if not already checked!
	if(!jQuery("#checked-agree").checked) {
		jQuery("input.checked-agree").prop('checked', true);
	}
	
});

