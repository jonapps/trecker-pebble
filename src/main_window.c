#include <pebble.h>
#include "main_window.h"
#include "menu_project_list.h"

void main_window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_frame(window_layer);
  
  MenuLayer *menu_layer = menu_project_list_create(bounds);
  menu_layer_set_click_config_onto_window(menu_layer, window);
  
  layer_add_child(window_layer, menu_layer_get_layer(menu_layer));
  
}

void main_window_unload(Window *window) {
  menu_project_list_destroy();
}