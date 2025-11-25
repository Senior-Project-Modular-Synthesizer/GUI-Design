/**
 * @file c_repos_GUI_Design_Project_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "c_repos_GUI_Design_Project_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

#ifndef LV_EDITOR_PREVIEW
    static const char * translation_languages[] = {"en", "de", NULL};
    static const char * translation_tags[] = {"settings", "about", "back", "info", NULL};
    static const char * translation_texts[] = {
        "Settings", "Einstellungen", /* settings */
        "About", "Über", /* about */
        "Back", "Zurück", /* back */
        "This UI was created with LVGL's UI Editor", "Diese Benutzeroberfläche wurde mit dem UI-Editor von LVGL erstellt.", /* info */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * home = NULL;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_title;
extern uint8_t Inter_SemiBold_ttf_data[];
extern size_t Inter_SemiBold_ttf_data_size;
lv_font_t * font_subtitle;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

lv_subject_t hours;
lv_subject_t mins;
lv_subject_t age;
lv_subject_t bluetooth_on;
lv_subject_t wifi_on;
lv_subject_t notification_on;
lv_subject_t hour_edited;
lv_subject_t min_edited;
lv_subject_t arc1;
lv_subject_t arc2;
lv_subject_t slide;
lv_subject_t check;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void c_repos_GUI_Design_Project_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/

    /* create tiny ttf font 'font_title' from C array */
    font_title = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 20);
    /* create tiny ttf font 'font_subtitle' from C array */
    font_subtitle = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 14);


    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&hours, 17);
    lv_subject_init_int(&mins, 45);
    lv_subject_init_int(&age, 17);
    lv_subject_init_int(&bluetooth_on, 0);
    lv_subject_init_int(&wifi_on, 0);
    lv_subject_init_int(&notification_on, 0);
    lv_subject_init_int(&hour_edited, 0);
    lv_subject_init_int(&min_edited, 0);
    lv_subject_init_int(&arc1, 50);
    lv_subject_init_int(&arc2, 50);
    lv_subject_init_int(&slide, 50);
    lv_subject_init_int(&check, 0);

    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
    #endif

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_title", font_title);
    lv_xml_register_font(NULL, "font_subtitle", font_subtitle);

    /* Register subjects */
    lv_xml_register_subject(NULL, "hours", &hours);
    lv_xml_register_subject(NULL, "mins", &mins);
    lv_xml_register_subject(NULL, "age", &age);
    lv_xml_register_subject(NULL, "bluetooth_on", &bluetooth_on);
    lv_xml_register_subject(NULL, "wifi_on", &wifi_on);
    lv_xml_register_subject(NULL, "notification_on", &notification_on);
    lv_xml_register_subject(NULL, "hour_edited", &hour_edited);
    lv_xml_register_subject(NULL, "min_edited", &min_edited);
    lv_xml_register_subject(NULL, "arc1", &arc1);
    lv_xml_register_subject(NULL, "arc2", &arc2);
    lv_xml_register_subject(NULL, "slide", &slide);
    lv_xml_register_subject(NULL, "check", &check);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "arc_changed", arc_changed);
    lv_xml_register_event_cb(NULL, "slider_changed", slider_changed);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    home = lv_obj_create(NULL);

    home_create();
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) arc_changed(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("arc_changed was called\n");
}
void __attribute__((weak)) slider_changed(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("slider_changed was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/