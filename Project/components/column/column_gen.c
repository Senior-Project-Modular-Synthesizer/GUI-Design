/**
 * @file column_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "column_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define SPACE_MD 5

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

lv_obj_t * column_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t column;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&column);
        lv_style_set_bg_opa(&column, 0);
        lv_style_set_border_width(&column, 0);
        lv_style_set_pad_row(&column, SPACE_MD);
        lv_style_set_width(&column, LV_SIZE_CONTENT);
        lv_style_set_height(&column, LV_SIZE_CONTENT);
        lv_style_set_layout(&column, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&column, LV_FLEX_FLOW_COLUMN);
        lv_style_set_radius(&column, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_0, &column, 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "column_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/