/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_glcd.h"
#include "r_display_api.h"
#include "r_adc.h"
#include "r_adc_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#ifdef __cplusplus
extern "C"
{
#endif
/* Display on GLCD Instance. */
extern const display_instance_t g_display0;
extern display_runtime_cfg_t g_display0_runtime_cfg_fg;
extern display_runtime_cfg_t g_display0_runtime_cfg_bg;
#if (false)
extern display_clut_cfg_t g_display0_clut_cfg_glcd;
#endif
#ifndef NULL
void NULL(display_callback_args_t *p_args);
#endif
#if (true)
#define DISPLAY_IN_FORMAT_16BITS_RGB565_0
#if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_0) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_0)
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (32)
#elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_0)
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (16)
#elif defined (DISPLAY_IN_FORMAT_CLUT8_0)
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (8)
#elif defined (DISPLAY_IN_FORMAT_CLUT4_0)
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (4)
#else
#define DISPLAY_BITS_PER_PIXEL_INPUT0 (1)
#endif
extern uint8_t g_display0_fb_background[2][((800 * 480) * DISPLAY_BITS_PER_PIXEL_INPUT0) >> 3];
#endif
#if (false)
#define DISPLAY_IN_FORMAT_16BITS_RGB565_1
#if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_1) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_1)
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (32)
#elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_1)
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (16)
#elif defined (DISPLAY_IN_FORMAT_CLUT8_1)
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (8)
#elif defined (DISPLAY_IN_FORMAT_CLUT4_1)
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (4)
#else
#define DISPLAY_BITS_PER_PIXEL_INPUT1 (1)
#endif
extern uint8_t g_display0_fb_foreground[2][((800 * 480) * DISPLAY_BITS_PER_PIXEL_INPUT1) >> 3];
#endif
/** ADC on ADC Instance. */
extern const adc_instance_t g_adc0;
#ifndef NULL
void NULL(adc_callback_args_t *p_args);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer0;
#ifndef NULL
void NULL(timer_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* HAL_DATA_H_ */
