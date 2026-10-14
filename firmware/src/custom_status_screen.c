/*
 * Custom OLED status screen (128x32, 1-bit).
 * Currently shows sample text. Replace the labels below with anything
 * you like (battery, layer, BLE profile, ...) later on.
 *
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>
#include <zephyr/kernel.h>

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_obj_create(NULL);

    lv_obj_t *label = lv_label_create(screen);
    lv_obj_set_style_text_font(label, &lv_font_unscii_8, LV_PART_MAIN);
    lv_label_set_text(label, "PLANCK WIRELESS\n"
                             "ZMK + nice!nano v2\n"
                             "48x SK6812mini-e\n"
                             "Hello, world!");
    lv_obj_align(label, LV_ALIGN_TOP_LEFT, 0, 0);

    return screen;
}
