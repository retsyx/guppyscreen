#ifndef __WIFI_PANEL_H__
#define __WIFI_PANEL_H__

#include "wpa_event.h"
#include "button_container.h"
#include "lvgl/lvgl.h"
#include <mutex>

#include <map>
#include <set>
#include <string>

class WifiPanel {
 public:
  WifiPanel(std::mutex &l);

  ~WifiPanel();

  void foreground();
  void handle_back_btn(lv_event_t *event);
  void handle_callback(lv_event_t *event);
  void handle_wpa_event(const std::string &events);
  void handle_kb_input(lv_event_t *e);
  void connect(const char *);
  bool find_current_network();

  static void _handle_back_btn(lv_event_t *event) {
    WifiPanel *panel = (WifiPanel*)event->user_data;
    panel->handle_back_btn(event);
  };

  static void _handle_callback(lv_event_t *event) {
    WifiPanel *panel = (WifiPanel*)event->user_data;
    panel->handle_callback(event);
  };

  static void _handle_kb_input(lv_event_t *e) {
    WifiPanel *panel = (WifiPanel*)e->user_data;
    panel->handle_kb_input(e);
  };

 private:
  std::mutex &lv_lock;
  WpaEvent wpa_event;
  lv_obj_t *cont;
  lv_obj_t *spinner;
  lv_obj_t *top_cont;
  lv_obj_t *wifi_table;
  lv_obj_t *wifi_right;
  lv_obj_t *prompt_cont;
  lv_obj_t *wifi_label;
  lv_obj_t *password_input;
  ButtonContainer back_btn;
  lv_obj_t *kb;
  std::string selected_network;
  std::string cur_network;
  std::map<std::string, std::string> list_networks;
  std::map<std::string, int> wifi_name_db;

};

#endif // __WIFI_PANEL_H__
