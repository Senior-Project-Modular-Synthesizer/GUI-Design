/**
 * @file home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_gen.h"
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

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t cell;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&cell);
        lv_style_set_border_side(&cell, LV_BORDER_SIDE_FULL);

        style_inited = true;
    }

    if (home == NULL) home = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = home;
    lv_obj_set_name_static(lv_obj_0, "home_#");

    lv_obj_t * lv_buttonmatrix_0 = lv_buttonmatrix_create(lv_obj_0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

