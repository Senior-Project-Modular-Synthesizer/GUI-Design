/**
 * @file subtitle_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "subtitle_gen.h"
#include "c_repos_GUI_Design_Project.h"

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

lv_obj_t * subtitle_create(lv_obj_t * parent, const char * text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t subtitle;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&subtitle);
        lv_style_set_text_font(&subtitle, font_subtitle);

        style_inited = true;
    }

    lv_obj_t * lv_label_0 = lv_label_create(parent);
    lv_obj_set_name_static(lv_label_0, "subtitle_#");
    lv_label_set_text(lv_label_0, text);

    lv_obj_add_style(lv_label_0, &subtitle, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_label_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

