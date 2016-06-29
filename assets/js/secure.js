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
