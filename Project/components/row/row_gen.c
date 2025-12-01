/**
 * @file row_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "row_gen.h"
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

lv_obj_t * row_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t row;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&row);
        lv_style_set_bg_opa(&row, 0);
        lv_style_set_border_width(&row, 0);
        lv_style_set_pad_all(&row, 0);
        lv_style_set_width(&row, LV_SIZE_CONTENT);
        lv_style_set_height(&row, LV_SIZE_CONTENT);
        lv_style_set_layout(&row, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&row, LV_FLEX_FLOW_ROW);
        lv_style_set_radius(&row, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_0, &row, 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "row_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/