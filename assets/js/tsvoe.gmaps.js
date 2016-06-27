jQuery(document).ready(function(){

	/**
		@BASIC GOOGLE MAP
	**/
	var map2 = new GMaps({
		div: '#map2',
		lat: 48.136718,
		lng: 16.343144,
		scrollwheel: false
	});

	var marker = map2.addMarker({
		lat: 48.136718,
		lng: 16.343144,
		title: 'Company, Inc.'
	});

});
