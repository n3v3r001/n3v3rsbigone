/*
static int bluetoothvibe;

static GBitmap *bluetooth_connected_image, *bluetooth_disconnected_image; //n3v3r
static BitmapLayer *bluetooth_layer;

// n3v3r: if bluetooth is disconnected change the bitmap and (eventually) vibrate)
static void toggle_bluetooth_icon(bool connected) {
  if(appStarted && !connected) {
    //vibe!
    vibes_short_pulse();
  }
  if(!connected) {
    bitmap_layer_set_bitmap(bluetooth_layer, bluetooth_disconnected_image);  //n3v3r wenn nicht connected, dann anderes symbol zeigen
  }
  else {
    bitmap_layer_set_bitmap(bluetooth_layer, bluetooth_connected_image);
  }
   
}

void bluetooth_connection_callback(bool connected) {
  toggle_bluetooth_icon(connected);
}


//LAyer
  //load bluetooth image
  bluetooth_connected_image = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLUETOOTH_CONNECTED);
  bluetooth_disconnected_image = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLUETOOTH_DISCONNECTED); //n3v3r
  GRect frame3 = (GRect) {
    .origin = { .x = 130, .y = 2 },
    .size = bluetooth_connected_image->bounds.size
  };
  bluetooth_layer = bitmap_layer_create(frame3);
  //bitmap_layer_set_bitmap(bluetooth_layer, bluetooth_connected_image);
  toggle_bluetooth_icon(bluetooth_connection_service_peek()); //n3v3r
  layer_add_child(window_layer, bitmap_layer_get_layer(bluetooth_layer));

   bluetooth_connection_service_subscribe(bluetooth_connection_callback);

static void deinit(void) {
  bluetooth_connection_service_unsubscribe();
  
  layer_remove_from_parent(bitmap_layer_get_layer(bluetooth_layer));
  bitmap_layer_destroy(bluetooth_layer);
  gbitmap_destroy(bluetooth_connected_image);
  gbitmap_destroy(bluetooth_disconnected_image);
}

*/