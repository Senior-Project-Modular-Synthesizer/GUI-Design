/**
 * @file home_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "home_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_pad_all(&main, 0);
        lv_style_set_border_width(&main, 0);
        lv_style_set_radius(&main, 0);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_COLUMN);
        lv_style_set_pad_row(&main, 0);
        lv_style_set_text_font(&main, font_subtitle);

        style_inited = true;
    }

    lv_obj_t * lv_table_0 = lv_table_create(NULL);
    lv_table_set_column_count(lv_table_0, 5);
    lv_table_set_row_count(lv_table_0, 2);
    lv_obj_set_style_bg_color(lv_table_0, lv_color_hex3(0x334), 0);
    lv_obj_set_style_text_color(lv_table_0, lv_color_hex3(0xeee), 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_table_0, "home");

    return lv_table_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/