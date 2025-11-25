/**
 * @file icon_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "icon_gen.h"
#include "c_repos_GUI_Design_Project.h"

/*********************
 *      DEFINES
 *********************/

#define SIZE 14

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

lv_obj_t * icon_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t icon;
    static lv_style_t off;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&icon);
        lv_style_set_width(&icon, SIZE);
        lv_style_set_height(&icon, SIZE);
        lv_style_set_image_recolor(&icon, lv_color_hex(0xffffff));
        lv_style_set_image_recolor_opa(&icon, 255);

        lv_style_init(&off);
        lv_style_set_image_opa(&off, 128);

        style_inited = true;
    }

    lv_obj_t * lv_image_0 = lv_image_create(parent);
    lv_obj_set_name_static(lv_image_0, "icon_#");
    lv_image_set_src(lv_image_0, img_bell);
    lv_image_set_inner_align(lv_image_0, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_add_style(lv_image_0, &icon, 0);
    lv_obj_add_style(lv_image_0, &off, LV_STATE_DISABLED);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_image_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

