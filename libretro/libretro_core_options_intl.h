#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/


struct retro_core_option_v2_category option_cats_es[] = {
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "prboom-resolution",
      "Resolución interna (es necesario reiniciar)",
      NULL,
      "Cambia la resolución.",
      NULL,
      NULL,
      {
         { "320x200",   NULL },
         { "640x400",   NULL },
         { "960x600",   NULL },
         { "1280x800",  NULL },
         { "1600x1000", NULL },
         { "1920x1200", NULL },
         { "2240x1400", NULL },
         { "2560x1600", NULL },
         { NULL, NULL },
      },
      "320x200"
   },
   {
      "prboom-mouse_on",
      "Usar el ratón al utilizar un mando",
      NULL,
      "Permite usar entradas de ratón incluso cuando el dispositivo del usuario 1 no sea un RetroKeyboard/Mouse.",
      NULL,
      NULL,
      {
         { "disabled", "No" },
         { "enabled",  "Sí" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "prboom-find_recursive_on",
      "Buscar IWAD en las carpetas primarias",
      NULL,
      "Busca IWAD en las carpetas primarias. NOTA: Debes desactivar esta opción para poder jugar a SIGIL.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "prboom-rumble",
      "Vibración",
      NULL,
      "Activa la respuesta háptica al utilizar un mando compatible con vibración.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "prboom-analog_deadzone",
      "Zona muerta analógica (en porcentaje)",
      NULL,
      "Asigna la zona muerta de los sticks analógicos cuando el dispositivo de entrada sea un mando moderno.",
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { NULL, NULL },
      },
      "15"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

#ifdef __cplusplus
}
#endif

#endif
