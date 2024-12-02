#ifndef _MAIN_H_
#define _MAIN_H_

static void lvgl_flush_display_cb(lv_display_t *disp, const lv_area_t *area, uint8_t *color_map);
static bool lcd_on_color_transfer_done_cb(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_io_event_data_t *edata, void *user_ctx);
static void lvgl_tick_increment_cb(void* arg);
static void lcd_configure_gpio(void);
static void lvgl_initialize(void);
static void lvgl_create_timers(void);

#endif /* _MAIN_H_ */