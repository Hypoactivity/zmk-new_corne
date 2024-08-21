/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xfe, 0xaa, 0x0a, 0x2a, 0x9f, 0xff, 0xff, 0xff, 0xfa, 0xea, 0xaa, 0xae, 0xba, 0xff, 0xff,
        0xfb, 0xff, 0xf0, 0xf1, 0x55, 0x05, 0x15, 0x47, 0xff, 0xff, 0xff, 0xf5, 0xd5, 0x55, 0x5f,
        0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xa4, 0xaa, 0x8a, 0x8a, 0xa1, 0xff, 0xff, 0xfb, 0xea,
        0xaa, 0xaa, 0xbe, 0xbf, 0xef, 0xfb, 0xfb, 0xff, 0xf0, 0x54, 0x55, 0x05, 0x45, 0x54, 0xff,
        0xff, 0x7d, 0x55, 0xd5, 0x75, 0x7f, 0x7f, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xae, 0x2a, 0x82,
        0xa0, 0xaa, 0x3f, 0xff, 0xfe, 0xaa, 0xea, 0xbb, 0xfe, 0xbf, 0xff, 0xfb, 0xfb, 0xfe, 0xf0,
        0x5f, 0x55, 0x01, 0x50, 0x54, 0x1f, 0xff, 0x7f, 0x55, 0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xff,
        0xfd, 0xfd, 0xf0, 0x2f, 0xff, 0x20, 0x28, 0x00, 0x0f, 0xff, 0xae, 0xaa, 0xaa, 0xbf, 0xff,
        0xff, 0xeb, 0xfb, 0xff, 0xff, 0xf0, 0x0e, 0x01, 0x50, 0x14, 0x00, 0x3f, 0xff, 0x57, 0x55,
        0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xfd, 0xff, 0xfd, 0xf0, 0x1e, 0x01, 0xa8, 0x0a, 0x00, 0xff,
        0xff, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xaf, 0xfb, 0xff, 0xff, 0xf0, 0x1f, 0xf9, 0x50,
        0x01, 0x03, 0xff, 0xff, 0x57, 0x55, 0xd5, 0x7d, 0xff, 0x7f, 0xdf, 0xfd, 0xff, 0xfd, 0xf0,
        0x9f, 0xf9, 0xa8, 0x00, 0x8f, 0xff, 0xfe, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xfd, 0xbf, 0xfb,
        0xff, 0xfb, 0xf0, 0x5a, 0x01, 0x54, 0x00, 0x3f, 0xff, 0xff, 0x7f, 0x5d, 0xd5, 0xfd, 0xff,
        0xfd, 0xdf, 0xfd, 0xff, 0xfd, 0xf0, 0x8e, 0x01, 0xaa, 0x00, 0x7f, 0xff, 0xfe, 0xbf, 0xae,
        0xef, 0xff, 0xff, 0xfb, 0xef, 0xfb, 0xff, 0xfa, 0xf0, 0xcf, 0xff, 0xf4, 0x00, 0xf7, 0xff,
        0xff, 0x7f, 0x5d, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xff, 0xff, 0xfd, 0xf0, 0xae, 0x01, 0x2a,
        0x00, 0xfb, 0xff, 0xff, 0xbf, 0xae, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfb, 0xff, 0xfa, 0xf0,
        0xde, 0x01, 0x35, 0x01, 0xfb, 0xff, 0xff, 0x7f, 0x5d, 0xfd, 0xbf, 0xff, 0xff, 0xdf, 0xfd,
        0xff, 0xdd, 0xf0, 0xa7, 0xff, 0xea, 0x81, 0xfc, 0xff, 0x7f, 0xbe, 0xbe, 0xff, 0xe3, 0xff,
        0xff, 0xef, 0xff, 0xf9, 0x3e, 0xf0, 0x56, 0x01, 0x55, 0x41, 0xff, 0x7f, 0xff, 0xff, 0xfd,
        0xfd, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x7d, 0xf0, 0xa6, 0x01, 0x2a, 0x88, 0xfe, 0xff,
        0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xfc, 0xfe, 0xf0, 0x52, 0x79, 0x15,
        0x44, 0x7d, 0xff, 0xff, 0xfd, 0x7f, 0xbd, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xf8, 0xfd, 0xf0,
        0x22, 0x69, 0x2a, 0xa0, 0x3d, 0xff, 0xff, 0xfa, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xe2, 0x48,
        0xfa, 0xff, 0xf0, 0x42, 0x59, 0x15, 0x54, 0x1b, 0xff, 0xff, 0xf7, 0xff, 0xbd, 0xf7, 0xff,
        0xff, 0x95, 0x55, 0x37, 0x7d, 0xf0, 0x02, 0x69, 0x0a, 0xa2, 0x1f, 0xfe, 0xff, 0xee, 0xff,
        0xff, 0xfc, 0xff, 0xff, 0x2a, 0x4a, 0x9f, 0xff, 0xf0, 0x03, 0xff, 0x55, 0x11, 0x4f, 0xff,
        0xff, 0x55, 0x7f, 0xfd, 0xff, 0x00, 0xfc, 0x55, 0x55, 0x4f, 0xff, 0xf0, 0x02, 0x01, 0xaa,
        0x88, 0x8f, 0xde, 0xff, 0xaa, 0xbf, 0xfe, 0xff, 0xff, 0x00, 0xa8, 0x02, 0xa7, 0xff, 0xf0,
        0x02, 0x01, 0x55, 0x55, 0x47, 0xff, 0x7f, 0xd5, 0x5f, 0xff, 0xff, 0xff, 0xc8, 0x47, 0x5c,
        0x53, 0xff, 0xf0, 0x82, 0x49, 0xaa, 0x8a, 0xa7, 0xfe, 0xff, 0xea, 0xbf, 0xff, 0xff, 0xff,
        0xb0, 0x3f, 0x5f, 0x89, 0xff, 0xf0, 0xc2, 0x49, 0x55, 0x45, 0x53, 0xff, 0xff, 0xf5, 0x5f,
        0xff, 0xff, 0xfe, 0x70, 0x7f, 0x5f, 0xe5, 0xff, 0xf0, 0xe2, 0x41, 0xa2, 0xa2, 0xab, 0xfe,
        0xfb, 0xfa, 0xaf, 0xef, 0xff, 0xf9, 0xe2, 0xbf, 0x5f, 0xfa, 0xff, 0xf0, 0xe2, 0x41, 0x51,
        0x51, 0x51, 0xff, 0x77, 0xfd, 0x57, 0xf9, 0xff, 0xe7, 0x85, 0x7f, 0x5f, 0xfc, 0xff, 0xf0,
        0xe3, 0xff, 0xf2, 0xa0, 0xa8, 0xff, 0xfb, 0xbe, 0xaf, 0xfe, 0x1e, 0x80, 0x6a, 0x80, 0x00,
        0x7e, 0xff, 0xb0, 0xe2, 0x60, 0x11, 0x50, 0x54, 0x7f, 0xff, 0xfd, 0x57, 0xff, 0xe0, 0x1f,
        0xc4, 0x15, 0x55, 0x06, 0x7f, 0x70, 0xee, 0x60, 0x18, 0xa8, 0x2a, 0x1f, 0xff, 0xfe, 0xaf,
        0xff, 0xe8, 0xf0, 0x00, 0x0a, 0x4a, 0xa8, 0x7f, 0xf0, 0xdf, 0xff, 0xf1, 0x54, 0x15, 0x43,
        0xff, 0xff, 0x5f, 0xff, 0xe8, 0x7b, 0xc0, 0x05, 0x55, 0x55, 0x7f, 0x70, 0xff, 0x81, 0x28,
        0xaa, 0x0a, 0xa1, 0xff, 0xfe, 0xbf, 0xf7, 0xea, 0x09, 0xe0, 0x0a, 0x4a, 0xaa, 0x7f, 0xf0,
        0xff, 0x81, 0x50, 0x54, 0x05, 0x54, 0x7f, 0xff, 0x7f, 0xfc, 0xe8, 0x4b, 0xc0, 0x05, 0x55,
        0x55, 0x7f, 0x70, 0xfe, 0x7f, 0x28, 0xaa, 0x00, 0xa8, 0xff, 0xfe, 0xbf, 0xff, 0x0a, 0xf0,
        0x00, 0x02, 0x4a, 0xa8, 0x7e, 0xb0, 0xfe, 0x7f, 0x14, 0x55, 0x00, 0x03, 0xff, 0xf7, 0x5f,
        0x7f, 0xe0, 0x1f, 0xc4, 0x01, 0x55, 0x06, 0x7f, 0x70, 0xff, 0x81, 0x08, 0x2a, 0x80, 0x07,
        0xff, 0xf6, 0xaf, 0xff, 0xfe, 0x80, 0x6a, 0x80, 0x00, 0x7e, 0xff, 0xb0, 0x7f, 0x81, 0x14,
        0x55, 0x40, 0x0f, 0xff, 0xed, 0x57, 0x7f, 0xff, 0xe7, 0x85, 0x55, 0x5f, 0xfc, 0xff, 0x70,
        0xbf, 0xff, 0xe8, 0x2a, 0xa8, 0x1f, 0xff, 0xf6, 0xae, 0xff, 0xff, 0xf9, 0xea, 0xaa, 0x5f,
        0xfa, 0xff, 0xf0, 0x5e, 0x01, 0x24, 0x15, 0x54, 0x3f, 0xff, 0xf5, 0x57, 0x7f, 0xfb, 0xfe,
        0xf0, 0x55, 0x5f, 0xe5, 0xff, 0x70, 0xbe, 0x01, 0x22, 0x2a, 0xa0, 0xff, 0xff, 0xba, 0xae,
        0xff, 0xfe, 0x1f, 0x30, 0x2a, 0x0f, 0x89, 0xbf, 0xf0, 0x5f, 0xff, 0xe5, 0x15, 0x41, 0xff,
        0xff, 0xd5, 0x57, 0x7f, 0xff, 0xe0, 0x48, 0x05, 0x54, 0x53, 0xff, 0xf0, 0xbe, 0x01, 0xa2,
        0x02, 0x03, 0xff, 0xff, 0xea, 0xaa, 0xbf, 0xff, 0xff, 0x80, 0x00, 0x02, 0xa7, 0xbf, 0xf0,
        0x5e, 0x01, 0x41, 0x00, 0x06, 0xfd, 0xff, 0xd5, 0x55, 0x5f, 0xff, 0xff, 0xfc, 0x00, 0x40,
        0x4f, 0xff, 0xf0, 0xbe, 0x49, 0x20, 0x80, 0x0f, 0x7f, 0xfe, 0xea, 0xaa, 0xbe, 0xff, 0xff,
        0xff, 0x00, 0x00, 0x1f, 0xbf, 0xf0, 0x7e, 0x49, 0x50, 0x00, 0x0f, 0x7f, 0xff, 0xd5, 0x55,
        0x5f, 0x83, 0xff, 0xff, 0x80, 0x40, 0x3f, 0xff, 0xf0, 0xfe, 0x41, 0x28, 0x00, 0x0f, 0xbf,
        0xff, 0xeb, 0xaa, 0xbf, 0xfc, 0x00, 0x03, 0xe0, 0x00, 0xff, 0xbf, 0xf0, 0xfe, 0x41, 0x14,
        0x00, 0x1f, 0xdf, 0xff, 0xd5, 0xd5, 0x57, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xdf, 0xf0,
        0xff, 0xff, 0x08, 0x00, 0x1f, 0x3f, 0xdf, 0xeb, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xbf, 0xf0, 0xfe, 0x01, 0x14, 0x40, 0x3e, 0xff, 0xbf, 0xf5, 0x55, 0x57, 0xdf, 0xff,
        0xf9, 0xff, 0xff, 0xff, 0xdf, 0xf0, 0xfe, 0x01, 0x0a, 0x20, 0x3f, 0xff, 0xdf, 0xfa, 0xaa,
        0xab, 0xbf, 0xff, 0xf3, 0xff, 0xff, 0xdf, 0xbf, 0xf0, 0xde, 0x7f, 0x05, 0x10, 0x7f, 0xff,
        0xff, 0xfd, 0x55, 0x55, 0xdf, 0xff, 0xe4, 0xff, 0xff, 0xbf, 0x7f, 0xf0, 0xee, 0x7e, 0x02,
        0x88, 0x7f, 0xff, 0xff, 0xfa, 0xaa, 0xab, 0xbf, 0xff, 0xe3, 0xff, 0xbf, 0xbf, 0xbf, 0xf0,
        0xde, 0x05, 0x41, 0x54, 0x3f, 0xff, 0xff, 0xdd, 0x55, 0x55, 0xff, 0xff, 0xd7, 0xff, 0xdf,
        0x7f, 0x7f, 0xf0, 0xee, 0x06, 0xa2, 0xaa, 0x3f, 0xff, 0xff, 0xbe, 0xaa, 0xab, 0xbf, 0xff,
        0xf7, 0xff, 0xbf, 0x3f, 0xbf, 0xf0, 0xde, 0x7d, 0x55, 0x55, 0x1f, 0xfb, 0xff, 0xff, 0x55,
        0x55, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xbf, 0xff, 0xf0, 0xfe, 0x7f, 0xaa, 0xaa, 0x8f, 0xff,
        0xff, 0xba, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0xbf, 0xf0, 0xfe, 0x01, 0x55,
        0x55, 0x47, 0xff, 0xff, 0xf7, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
        0xfe, 0x01, 0xaa, 0xaa, 0xa1, 0xff, 0xff, 0xbf, 0xea, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf,
        0xff, 0xff, 0xf0, 0xff, 0xff, 0x55, 0x55, 0x54, 0xff, 0xff, 0x5f, 0xf5, 0x57, 0xff, 0xfd,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xda, 0xaa, 0xaa, 0xaa, 0x7f, 0xff, 0xbf, 0xfa,
        0xab, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x9d, 0x55, 0x55, 0x00, 0xff,
        0xff, 0x7f, 0xfd, 0x57, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xbf, 0xa2,
        0xa8, 0x03, 0xff, 0xfb, 0xbf, 0xfa, 0xaa, 0xbf, 0xfb, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0,
        0xff, 0x3f, 0xc0, 0x00, 0x07, 0xff, 0xff, 0x5f, 0xfd, 0x57, 0x57, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf0, 0xff, 0x3f, 0x80, 0x00, 0x0f, 0xff, 0xfb, 0xaf, 0xfe, 0xae, 0xaa, 0xfb,
        0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0, 0xf6, 0x7f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0x57, 0xfd,
        0x55, 0x55, 0x77, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf0,
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x00, 0x00, 0x00, 0x90, 0x00, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xa0, 0x00, 0x00,
        0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x10, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf4, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0x10, 0x80, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x01, 0xfe, 0x03, 0xe0, 0x0f, 0x9e, 0x01, 0x90,
        0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0xff, 0x07, 0xe0, 0x1f,
        0x9e, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x7f,
        0x8f, 0xe0, 0x1f, 0xbe, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
        0x00, 0x00, 0x3f, 0xcf, 0xf0, 0x1f, 0xbc, 0x00, 0x90, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xcf, 0xf0, 0x3f, 0xbc, 0x00, 0x90, 0x80, 0x7f, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x1f, 0xe7, 0xf0, 0x7f, 0x3c, 0x00, 0x90,
        0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x0f, 0xe7, 0xf8, 0x7f,
        0x78, 0x01, 0xb0, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x00, 0x00, 0x00, 0x07,
        0xf3, 0xf8, 0x3f, 0x78, 0x03, 0xd0, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xc0, 0x00,
        0x00, 0x00, 0x07, 0xfb, 0xf8, 0x3f, 0xf8, 0x0f, 0x90, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff,
        0xec, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfd, 0xfc, 0x3f, 0xf8, 0x0f, 0x10, 0xc0, 0x1e, 0xff,
        0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x3f, 0xf0, 0x0e, 0x10,
        0xc0, 0x0c, 0x27, 0xff, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x7f,
        0xf0, 0x1e, 0x30, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x7f, 0xfe, 0x7f, 0xf3, 0xfc, 0x50, 0xe0, 0x00, 0x3f, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x7f, 0xfe, 0x7f, 0xf7, 0xf8, 0x90, 0xe0, 0x00, 0x7f, 0xfe, 0xb0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x7f, 0xe7, 0xf1, 0x90, 0xe0, 0x00, 0x7f,
        0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x7f, 0xef, 0xe3, 0x90,
        0xf0, 0x00, 0x7f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7f,
        0xff, 0xe7, 0x90, 0xb0, 0x10, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0xff, 0xbf, 0xff, 0xcf, 0x90, 0xf0, 0x30, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xff, 0xf9, 0xff, 0x9f, 0x90, 0xb0, 0x30, 0xff, 0xff, 0xff, 0xf2,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf6, 0xff, 0x3e, 0x90, 0xf8, 0x70, 0xff,
        0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf6, 0xfe, 0x7c, 0x90,
        0xf8, 0x78, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf9,
        0xfe, 0xf8, 0x90, 0xa8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x03, 0xff, 0xfd, 0xf3, 0x90, 0xdc, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfb, 0xef, 0x90, 0xf5, 0xac, 0xff, 0xff, 0xff, 0xfe,
        0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x90, 0xff, 0xd6, 0x7f,
        0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x90,
        0xff, 0xfa, 0x7f, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
        0xff, 0xff, 0x90, 0xdd, 0xff, 0x7f, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0xea, 0xbf, 0x3f, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x10, 0xff, 0x4f, 0xbf, 0xf5, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x10, 0xff, 0xff, 0x9f,
        0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0,
        0xff, 0xb0, 0xcb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
        0xff, 0xff, 0x90, 0xcd, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x1f, 0xff, 0xff, 0x90, 0xb2, 0xe0, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0x90, 0xff, 0xc0, 0x3f, 0x40, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x90, 0xfe, 0xc0, 0x7f,
        0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0xff, 0xff, 0x7c, 0x90,
        0xfd, 0x80, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc3, 0xff,
        0xff, 0xb8, 0x90, 0xff, 0x80, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3f, 0x87, 0xff, 0xff, 0xc8, 0x90, 0x9f, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x7f, 0x1f, 0xff, 0xff, 0xe0, 0x90, 0x86, 0x01, 0xff, 0xff, 0xd0, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xfe, 0x3f, 0xff, 0xff, 0xe0, 0x90, 0x80, 0x01, 0xff,
        0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x83, 0xfe, 0x7f, 0xff, 0xff, 0xf0, 0x90,
        0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xc7, 0xee, 0x7f, 0xff,
        0xff, 0xf8, 0x90, 0x80, 0x1a, 0xbf, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x98, 0xff, 0xff,
        0xc6, 0x7f, 0xff, 0xff, 0xfc, 0x90, 0x80, 0x3f, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
        0xf1, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xfe, 0x90, 0x80, 0x3f, 0xf8, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x07, 0xe3, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0x90, 0x80, 0x7f, 0xfe,
        0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc7, 0xff, 0xfe, 0x18, 0xff, 0xef, 0xff, 0xff, 0x90,
        0x80, 0x7f, 0xff, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x8f, 0xff, 0xfc, 0x7f, 0xff, 0xef,
        0xfd, 0xff, 0x90, 0x80, 0xff, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x9f, 0xff, 0xf8,
        0xff, 0xff, 0xef, 0xfc, 0xf7, 0x90, 0x80, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x3f,
        0x1f, 0xff, 0xf1, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x90, 0x80, 0xff, 0xff, 0xff, 0xf4, 0x00,
        0x00, 0x00, 0x7f, 0x3f, 0xff, 0xe3, 0xff, 0xff, 0xcf, 0xfe, 0x60, 0x90, 0x81, 0xff, 0xff,
        0xff, 0xfe, 0x80, 0x00, 0x00, 0x7f, 0x3f, 0xff, 0xc7, 0xff, 0xff, 0xdf, 0xfe, 0x40, 0x90,
        0x81, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x01, 0xfe, 0x3f, 0xff, 0xcf, 0xbf, 0xff, 0xdf,
        0xfe, 0x00, 0x90, 0x81, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x07, 0xfe, 0x7f, 0xff, 0x8f,
        0x7f, 0xff, 0x9f, 0xfe, 0x00, 0x90, 0x80, 0xff, 0xff, 0xff, 0xe6, 0x00, 0x00, 0x1f, 0xfe,
        0x7f, 0xff, 0x1e, 0xff, 0xff, 0x91, 0xfe, 0x00, 0x90, 0x80, 0xff, 0xff, 0xfe, 0xc0, 0x00,
        0x00, 0x3f, 0xfc, 0x7f, 0xfe, 0x3c, 0xff, 0xff, 0x81, 0xff, 0x00, 0x90, 0x80, 0x7f, 0xff,
        0xec, 0x00, 0x00, 0x3c, 0xff, 0xf8, 0xff, 0xfc, 0x79, 0xfd, 0xff, 0x80, 0xff, 0x00, 0x90,
        0x80, 0x27, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xff, 0xf9, 0xff, 0xfc, 0xf3, 0xfb, 0xff, 0x00,
        0xff, 0x00, 0x90, 0x80, 0x5f, 0xff, 0xd8, 0x00, 0x00, 0xff, 0xff, 0xf1, 0xff, 0xc8, 0xe7,
        0xf3, 0xff, 0x00, 0x7f, 0x00, 0x90, 0x80, 0xff, 0xff, 0xfd, 0x80, 0x01, 0xff, 0xff, 0xe3,
        0xff, 0x81, 0xcf, 0xf7, 0xff, 0x00, 0x7f, 0x00, 0x90, 0x80, 0xff, 0xff, 0xff, 0xd8, 0x03,
        0xff, 0xff, 0x87, 0xff, 0x03, 0x8f, 0xe7, 0xff, 0x00, 0x3f, 0x81, 0x90, 0x81, 0xff, 0xff,
        0xff, 0xfe, 0x83, 0xff, 0xfe, 0x0f, 0xfe, 0x3f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x10,
        0x80, 0x00, 0x00, 0x00, 0x2f, 0xc6, 0x00, 0x00, 0x38, 0x00, 0x60, 0x00, 0x48, 0x00, 0x00,
        0x00, 0x00, 0x10, 0xc0, 0x00, 0x00, 0x00, 0x17, 0xf4, 0x00, 0x00, 0xe0, 0x00, 0xc0, 0x00,
        0x88, 0x00, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};

#ifndef LV_ATTRIBUTE_IMG_WUKONG
#define LV_ATTRIBUTE_IMG_WUKONG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WUKONG uint8_t wukong_map[] = {
  0x15, 0x15, 0x15, 0xff, 	/*Color of index 0*/
  0x63, 0x63, 0x63, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xf9, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xc0, 0x30, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xe0, 0x17, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xe8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xf3, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfb, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x57, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa6, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x84, 0x00, 0x02, 0xbb, 0xff, 0xff, 0xf0, 
  0xb9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x24, 0x04, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 
  0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x40, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x3d, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x06, 0x00, 0x0f, 0x00, 0x80, 0x00, 0x00, 0x01, 0xff, 0xf0, 
  0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x0a, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 
  0x7f, 0xff, 0xf8, 0x6f, 0xff, 0xff, 0xff, 0xf0, 0x0e, 0x30, 0x03, 0x06, 0x00, 0x01, 0x00, 0x01, 0xff, 0xf0, 
  0xff, 0xff, 0xfe, 0x52, 0xff, 0xff, 0xff, 0xe0, 0xbe, 0xb8, 0x83, 0x1f, 0x00, 0x0e, 0x00, 0x00, 0x1f, 0xf0, 
  0xff, 0xff, 0xfe, 0xb4, 0xaf, 0xff, 0xff, 0xa8, 0x7e, 0x0c, 0x4f, 0x07, 0xe0, 0x10, 0x00, 0x00, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xd0, 0x21, 0xff, 0xff, 0xfa, 0xbf, 0x82, 0x1f, 0xa7, 0xf0, 0x20, 0xaa, 0x00, 0xff, 0xf0, 
  0xff, 0xff, 0xef, 0xf0, 0x00, 0x67, 0xff, 0xfd, 0x5e, 0x80, 0x1f, 0x37, 0xa8, 0x28, 0x3f, 0x00, 0x0b, 0xf0, 
  0xff, 0xff, 0xdf, 0xee, 0x06, 0x01, 0xff, 0xfd, 0x7f, 0x00, 0x1f, 0x9f, 0xfe, 0x14, 0x00, 0xe0, 0x05, 0xf0, 
  0xff, 0xfd, 0x7f, 0xff, 0x7e, 0x00, 0xff, 0xff, 0xea, 0xb4, 0x3f, 0xbf, 0xff, 0x57, 0xff, 0xdc, 0x0f, 0xf0, 
  0xff, 0xd7, 0xd7, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xee, 0xa0, 0x3f, 0x9f, 0xfd, 0xbf, 0xff, 0xab, 0x03, 0xf0, 
  0xff, 0xe9, 0x6d, 0x7f, 0xfc, 0x07, 0xff, 0xff, 0xff, 0x81, 0x3f, 0xbf, 0xff, 0xff, 0xfa, 0x36, 0x81, 0xf0, 
  0xff, 0xfe, 0xaa, 0xbf, 0xfe, 0x03, 0xff, 0xff, 0xff, 0x60, 0x7f, 0xdf, 0xff, 0xff, 0xfd, 0xea, 0x03, 0xf0, 
  0xff, 0xff, 0xf4, 0xaf, 0xff, 0x85, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xef, 0xff, 0xff, 0xfa, 0xbf, 0x03, 0xf0, 
  0xff, 0xff, 0xff, 0x0b, 0xff, 0xfd, 0xef, 0xff, 0xff, 0x88, 0xff, 0xef, 0xff, 0xff, 0xff, 0x50, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xa0, 0xff, 0xb4, 0xdf, 0xff, 0xff, 0xb4, 0xbf, 0xdf, 0xff, 0xff, 0xfd, 0x55, 0x0f, 0xf0, 
  0xff, 0xf5, 0xfd, 0x75, 0x7f, 0xff, 0x5f, 0xff, 0xff, 0xf9, 0x7f, 0xff, 0xff, 0xff, 0xfa, 0xaa, 0xf7, 0xf0, 
  0xff, 0xfa, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xf7, 0xbf, 0xff, 0xfe, 0x83, 0xd6, 0x51, 0x5f, 0xf0, 
  0xff, 0xff, 0xbf, 0xef, 0xff, 0xff, 0xf6, 0xfb, 0xef, 0xff, 0xf5, 0xff, 0xfd, 0xff, 0xe8, 0x00, 0x2f, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xa6, 0x77, 0xfe, 0xb5, 0xbf, 0xff, 0x7a, 0xa0, 0x00, 0x1f, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xed, 0xff, 0xfb, 0x71, 0xbd, 0x0f, 0xd9, 0xcf, 0x7f, 0xaf, 0x40, 0x00, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xf9, 0xfe, 0xd7, 0xfc, 0x5e, 0x00, 0x3b, 0xea, 0x9f, 0xc5, 0xfa, 0x57, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xe9, 0xf1, 0x56, 0x80, 0x15, 0x7f, 0xf5, 0xa2, 0xaa, 0x83, 0xff, 0xf0, 
  0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xd0, 0x68, 0x1f, 0x40, 0x1b, 0x8f, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x97, 0x9c, 0x0f, 0x03, 0xff, 0x00, 0x00, 0x02, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0x80, 0x00, 0x07, 0xff, 0xc3, 0xe0, 0xf4, 0x80, 0x00, 0x03, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0x5b, 0xff, 0xff, 0x80, 0x00, 0xab, 0xbf, 0xa7, 0xfa, 0x84, 0x00, 0x00, 0x1f, 0xff, 0xf0, 
  0xbf, 0xff, 0xff, 0xef, 0x7f, 0xd4, 0x40, 0x00, 0x2f, 0xfe, 0xbf, 0x85, 0x40, 0x00, 0x03, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0x7f, 0xea, 0x20, 0x05, 0x5f, 0xff, 0xff, 0xa0, 0x10, 0x00, 0x3f, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0x77, 0xfd, 0xf2, 0xaa, 0x15, 0x6f, 0xff, 0xff, 0xfa, 0x1c, 0x08, 0x0f, 0xff, 0xff, 0xf0, 
  0xed, 0xff, 0xff, 0xdf, 0xfe, 0xf8, 0xa8, 0x0a, 0xb7, 0xbf, 0xff, 0xff, 0x8f, 0xaf, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xee, 0xff, 0xfe, 0xaa, 0x1d, 0xef, 0x7f, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xef, 0xff, 0xfd, 0x7e, 0xab, 0x57, 0x7f, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xf3, 0xff, 0xfd, 0x5f, 0xdf, 0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xdf, 0xff, 0xf7, 0xf5, 0xfe, 0xff, 0xaf, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xf5, 0x0b, 0xff, 0x5f, 0xbf, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfd, 0x55, 0xff, 0xbf, 0xfb, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xfa, 0xab, 0xff, 0xbf, 0xbe, 0x51, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0x7f, 0xd7, 0xfd, 0xab, 0xff, 0xff, 0x78, 0x57, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xdf, 0x7f, 0xfe, 0xef, 0xff, 0xf7, 0xc0, 0xfd, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xfe, 0xfd, 0xff, 0xff, 0x7f, 0xff, 0xdc, 0x01, 0xd6, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xdd, 0xbd, 0xff, 0xfe, 0xff, 0xff, 0xc0, 0x07, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xbf, 0xff, 0xff, 0xff, 0xbf, 0xf6, 0xc0, 0x1f, 0xeb, 0xba, 0xad, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xdf, 0xef, 0xff, 0xff, 0xff, 0xeb, 0x86, 0x3f, 0xfd, 0x57, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xcf, 0xff, 0xff, 0xcf, 0x51, 0x7f, 0x1d, 0xef, 0xea, 0xb5, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
};

const lv_img_dsc_t wukong = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = wukong_map,
};


#ifndef LV_ATTRIBUTE_IMG_LONGZHU
#define LV_ATTRIBUTE_IMG_LONGZHU
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LONGZHU uint8_t longzhu_map[] = {
  0x00, 0x00, 0x00, 0xff,	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xab, 0x6d, 0xbb, 0x6d, 0xbb, 0x6d, 0xdb, 0x76, 0xef, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xb0, 
  0xff, 0xff, 0xdf, 0xff, 0xff, 0xdf, 0x7f, 0xbf, 0xfd, 0xff, 0xdf, 0xff, 0xef, 0xff, 0x7f, 0xdf, 0xbf, 0xf0, 
  0xb6, 0xdb, 0x7d, 0xb6, 0xdb, 0x7d, 0xf5, 0xed, 0xb7, 0xb6, 0xf6, 0xdb, 0x7e, 0xdb, 0xf6, 0xfd, 0xff, 0xf0, 
  0xff, 0xff, 0xf7, 0xff, 0xff, 0xf7, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xb0, 
  0xde, 0xee, 0xff, 0xdf, 0x7d, 0xff, 0xff, 0xbf, 0x7b, 0x7f, 0xbf, 0xff, 0xdb, 0xfe, 0xdf, 0xdb, 0xbf, 0xf0, 
  0xfb, 0xff, 0xbe, 0xf7, 0xdf, 0x6e, 0xfb, 0xed, 0xef, 0xdb, 0xf6, 0xdb, 0xff, 0x6f, 0xf6, 0xff, 0xfb, 0xf0, 
  0xff, 0xbb, 0xfb, 0xdd, 0xf7, 0xff, 0xde, 0xff, 0xfd, 0xfe, 0xff, 0xff, 0x7f, 0xfb, 0xff, 0xff, 0x7f, 0xb0, 
  0xbf, 0xff, 0xdf, 0xb7, 0xff, 0xdf, 0xff, 0xf7, 0x7f, 0xff, 0xbf, 0x7f, 0xdb, 0xff, 0x7f, 0x6d, 0xef, 0xf0, 
  0xf6, 0xf7, 0x77, 0xdf, 0xbe, 0xfd, 0xbb, 0xdf, 0xf7, 0xd7, 0xed, 0xed, 0xff, 0xdf, 0xfb, 0xff, 0xfb, 0x70, 
  0xff, 0xbf, 0xfd, 0xf7, 0xf7, 0xef, 0xfe, 0xfd, 0xdd, 0xfe, 0xff, 0xff, 0xfd, 0xf7, 0xbf, 0xdf, 0xbf, 0xe0, 
  0xdb, 0xfe, 0xfd, 0xdd, 0xbf, 0xbe, 0xef, 0xef, 0xff, 0xbf, 0xff, 0x77, 0xb7, 0x7d, 0xee, 0xfe, 0xff, 0xf0, 
  0xff, 0xdb, 0xdb, 0xf6, 0xfb, 0xfb, 0xfd, 0xfe, 0xff, 0xf7, 0xb7, 0xfd, 0xff, 0xff, 0xff, 0xf7, 0xed, 0xb0, 
  0xff, 0x7f, 0xff, 0x5f, 0xdf, 0xff, 0xdf, 0xbb, 0xdb, 0x7d, 0xfd, 0xdf, 0xdf, 0xef, 0x7d, 0xdf, 0xff, 0xf0, 
  0xb7, 0xff, 0x55, 0xeb, 0x7d, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xbf, 0xef, 0xfd, 0xbf, 0xf0, 
  0xfd, 0xdb, 0xee, 0xbf, 0xff, 0xfe, 0xed, 0xef, 0x77, 0xb7, 0xb7, 0xbb, 0x7f, 0xfe, 0xff, 0xbf, 0xfd, 0xb0, 
  0xff, 0xff, 0xfb, 0xd5, 0xdb, 0xff, 0xff, 0xbf, 0xfd, 0xfe, 0xfd, 0xff, 0xde, 0xf7, 0xfb, 0xef, 0x6f, 0xf0, 
  0xdb, 0xbd, 0xbd, 0x6f, 0x7f, 0xdb, 0xdf, 0xfd, 0xdf, 0xff, 0xff, 0xed, 0xf7, 0xdf, 0xde, 0xfd, 0xff, 0x70, 
  0xff, 0xef, 0xef, 0x75, 0xfe, 0xfe, 0xf6, 0xff, 0xfe, 0xdb, 0xb7, 0x7f, 0xff, 0xfd, 0xff, 0xff, 0xf7, 0xd0, 
  0x77, 0x7f, 0xf5, 0xde, 0xb7, 0xff, 0xff, 0xf7, 0x7b, 0xff, 0xff, 0xff, 0xbf, 0x7f, 0x77, 0xb7, 0xbf, 0xf0, 
  0xff, 0xd6, 0xdf, 0x6f, 0xff, 0xb7, 0xdf, 0xbf, 0xef, 0xf7, 0xdd, 0xdb, 0xf7, 0xef, 0xff, 0xfe, 0xfb, 0x70, 
  0xde, 0xff, 0xfb, 0xbb, 0xfe, 0xfe, 0xfe, 0xfd, 0xfe, 0xdf, 0x7f, 0xff, 0x7d, 0xfd, 0xfe, 0xef, 0xff, 0xf0, 
  0xf7, 0xd5, 0xad, 0xff, 0x6f, 0xff, 0xf7, 0xff, 0xbf, 0xff, 0xef, 0x7f, 0xff, 0xbf, 0xb7, 0xfd, 0xdf, 0xf0, 
  0xff, 0xfe, 0xff, 0xf7, 0xff, 0xb7, 0xbf, 0xb7, 0xff, 0xfe, 0xfd, 0xed, 0xee, 0xff, 0xff, 0xff, 0xf6, 0xd0, 
  0xdb, 0x57, 0x57, 0x7f, 0xfb, 0xff, 0xff, 0xfe, 0xed, 0xb7, 0xdf, 0xfb, 0xbf, 0xed, 0xfe, 0xdf, 0x7f, 0xf0, 
  0xff, 0xfa, 0xfd, 0xde, 0xdf, 0xfe, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xfa, 0xbf, 0x77, 0xfb, 0xff, 0xf0, 
  0xfd, 0xef, 0x5f, 0x77, 0xfe, 0xdf, 0xdf, 0xdf, 0xbf, 0xfd, 0xf7, 0xf6, 0xb7, 0xdf, 0xff, 0xff, 0xdb, 0x70, 
  0x6f, 0x7a, 0xed, 0xdf, 0xf7, 0xfd, 0xff, 0xfd, 0xfb, 0x6f, 0xbf, 0x7b, 0xfd, 0x75, 0x6f, 0x6e, 0xff, 0xf0, 
  0xff, 0xdf, 0xb7, 0x7f, 0x7f, 0xf7, 0xfd, 0xf7, 0xef, 0xff, 0xfa, 0xd6, 0xdf, 0xaf, 0xf5, 0xff, 0xf7, 0x60, 
  0xfd, 0xed, 0xdd, 0xff, 0xff, 0xbf, 0xef, 0xbf, 0x7f, 0xfe, 0xe9, 0x6d, 0x7d, 0x69, 0x4f, 0xfb, 0xdf, 0xf0, 
  0xdf, 0xbf, 0xbf, 0xdb, 0xed, 0xfe, 0xff, 0xff, 0xfd, 0xb7, 0xaa, 0xab, 0x17, 0xd5, 0x7a, 0xbf, 0x7d, 0xf0, 
  0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xdf, 0xfe, 0xa5, 0x57, 0x45, 0x5a, 0xd7, 0xef, 0xff, 0xb0, 
  0xf6, 0xef, 0xd6, 0xfe, 0xff, 0xdb, 0xbf, 0xfd, 0xff, 0xd4, 0xaa, 0x2c, 0x17, 0xfe, 0xaa, 0xbd, 0xef, 0xf0, 
  0xdf, 0xfe, 0xff, 0xff, 0xf7, 0xff, 0xff, 0x7f, 0xf7, 0x7b, 0x35, 0x1f, 0xc1, 0x51, 0xad, 0xdf, 0xfe, 0xf0, 
  0xfb, 0xbb, 0xff, 0xb7, 0xbe, 0xff, 0xef, 0xff, 0xff, 0xee, 0xca, 0x79, 0x2f, 0xee, 0x4a, 0x76, 0xf7, 0xd0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xed, 0xde, 0x9e, 0x00, 0x5a, 0x5d, 0x1d, 0xb5, 0x9b, 0xdf, 0xf0, 
  0xfe, 0xff, 0x6d, 0xff, 0xff, 0xbb, 0xfd, 0xff, 0xf5, 0xf8, 0x29, 0x39, 0xbb, 0xea, 0xdd, 0xd7, 0x7d, 0xf0, 
  0xdb, 0xfb, 0xff, 0xfd, 0xbb, 0xff, 0xdf, 0xff, 0xfd, 0x7e, 0xa2, 0x7c, 0x57, 0xb5, 0x7b, 0xa5, 0xff, 0xb0, 
  0xff, 0xbf, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xbe, 0xc6, 0xba, 0xa8, 0x1d, 0xfd, 0xd4, 0xb5, 0x7f, 0xdf, 0xf0, 
  0xff, 0xff, 0xfd, 0xf7, 0xff, 0xef, 0xff, 0xf7, 0xfb, 0x7f, 0xfe, 0xef, 0xd5, 0x6b, 0xda, 0x5b, 0x7b, 0x70, 
  0xf7, 0xff, 0xef, 0xde, 0xed, 0xfe, 0xed, 0xff, 0xae, 0xfb, 0xcb, 0xfa, 0xfb, 0xaa, 0x6f, 0xae, 0xff, 0xd0, 
  0xfd, 0xff, 0xff, 0xff, 0xf7, 0x5f, 0xff, 0xff, 0xbb, 0xfe, 0x7e, 0xbd, 0xbe, 0x55, 0x5f, 0x7b, 0xcd, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xeb, 0xff, 0xff, 0xef, 0xf9, 0x6b, 0xfd, 0x77, 0xaf, 0xa5, 0xde, 0x7b, 0xf0, 
  0xff, 0x6f, 0x7f, 0x7f, 0xff, 0xee, 0xad, 0xee, 0xff, 0xbe, 0xaa, 0xfb, 0xff, 0x62, 0xf7, 0x7b, 0xdf, 0xb0, 
  0xdb, 0xff, 0xff, 0xdf, 0xff, 0xab, 0xbf, 0x7f, 0xf5, 0xed, 0xb5, 0xfe, 0xff, 0xe9, 0xda, 0xff, 0xf7, 0xf0, 
  0x7f, 0xfd, 0xff, 0xfb, 0xdb, 0xf5, 0x55, 0xff, 0xff, 0x7a, 0xda, 0xff, 0xfd, 0xed, 0x7f, 0xdd, 0xdd, 0x70, 
  0xfe, 0xdf, 0xb7, 0xff, 0xff, 0xb8, 0x2a, 0xbf, 0xaf, 0xef, 0xb6, 0xfb, 0xff, 0xfe, 0xd7, 0xef, 0x7b, 0xe0, 
  0xf7, 0xfb, 0xff, 0x7f, 0xff, 0xde, 0xd5, 0x6d, 0xff, 0xb5, 0xbf, 0xff, 0xff, 0x5f, 0xfe, 0xbf, 0xff, 0xf0, 
  0xff, 0x7e, 0xed, 0xff, 0xff, 0xfb, 0xf5, 0x5f, 0xfd, 0xff, 0x4b, 0xfb, 0xff, 0xff, 0xdf, 0xef, 0xd6, 0xf0, 
  0xfd, 0xff, 0xff, 0xb7, 0xff, 0xfe, 0xee, 0xdf, 0xff, 0xf6, 0xbb, 0x7f, 0xff, 0xfe, 0xff, 0x7f, 0x7b, 0xb0, 
  0xff, 0x6f, 0x7f, 0xfe, 0xff, 0xff, 0xe9, 0x6f, 0xff, 0xff, 0x6b, 0xff, 0xbf, 0xef, 0xfb, 0xfb, 0xee, 0xf0, 
  0xff, 0xfd, 0xed, 0xdf, 0xbf, 0xff, 0x92, 0xab, 0xff, 0xff, 0xd5, 0xfb, 0xf7, 0x7f, 0xff, 0xef, 0x7f, 0xf0, 
  0xdf, 0xb7, 0x7b, 0xf7, 0xef, 0xff, 0xea, 0xaf, 0xef, 0xfe, 0x77, 0xfe, 0xff, 0xff, 0xbf, 0xdb, 0xb5, 0xb0, 
  0xff, 0xff, 0xff, 0xbf, 0x7f, 0xff, 0xff, 0xbd, 0xff, 0xff, 0xdb, 0xff, 0xff, 0xed, 0xfe, 0xfe, 0xdf, 0xf0, 
  0xff, 0xff, 0xf7, 0xed, 0xed, 0xff, 0xfb, 0xf7, 0xff, 0x7f, 0xf7, 0x7f, 0xff, 0xff, 0xf7, 0xbf, 0xf7, 0xf0, 
  0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xff, 0xfe, 0xff, 0xff, 0xeb, 0x6e, 0xd0, 
  0xff, 0xfd, 0xff, 0xed, 0xbf, 0x7e, 0xbf, 0x7f, 0xbf, 0xff, 0xbd, 0xdb, 0xf7, 0xff, 0xba, 0xff, 0xdb, 0xf0, 
  0xff, 0xef, 0xbb, 0x7f, 0xed, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xed, 0xff, 0x55, 0xbf, 0xf0, 
  0xff, 0xff, 0xff, 0xee, 0xff, 0xff, 0xde, 0xff, 0xff, 0xef, 0xff, 0xbf, 0x7f, 0xff, 0x7e, 0xfe, 0xde, 0xf0, 
  0xff, 0xff, 0xff, 0xfb, 0xfe, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xfd, 0xed, 0xdf, 0xeb, 0xeb, 0x49, 0x77, 0xd0, 
  0xff, 0xff, 0x6d, 0xbf, 0x6f, 0xff, 0xff, 0xdd, 0xff, 0xfb, 0x77, 0xbf, 0xfd, 0xdd, 0x5d, 0xd7, 0xbd, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf6, 0xfe, 0x7f, 0xbf, 0xdf, 0xff, 0xef, 0xf7, 0xbb, 0xb4, 0xff, 0xf0, 
  0xff, 0xf7, 0xff, 0x6d, 0xf7, 0xdf, 0xbf, 0xf7, 0xdf, 0xf5, 0x6a, 0xef, 0xfa, 0xfa, 0xed, 0x6b, 0xdf, 0x70, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xbf, 0xeb, 0xb5, 0x5b, 0xbb, 0x7f, 0xed, 0x37, 0x54, 0xfd, 0xf0, 
  0xff, 0xfe, 0xdb, 0xff, 0xbf, 0xff, 0xed, 0xf5, 0xbf, 0xf5, 0x8d, 0xff, 0x7f, 0xba, 0xa9, 0x52, 0xb7, 0xd0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x7f, 0xde, 0xfa, 0xef, 0x6a, 0xfd, 0x4e, 0xee, 0x95, 0x00, 0x3f, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf7, 0x7f, 0xb7, 0xfa, 0xd7, 0xfe, 0xbb, 0xda, 0xb4, 0x8a, 0xfe, 0xf0, 
  0xff, 0xff, 0xff, 0xdb, 0x7f, 0xdf, 0xbd, 0xdb, 0xff, 0x7f, 0x75, 0xaf, 0xc7, 0x76, 0xc5, 0x0b, 0xf7, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x76, 0xf5, 0xbf, 0xfe, 0xeb, 0xbd, 0xaa, 0xa9, 0x7f, 0xff, 0xb0, 
  0xff, 0xff, 0xfe, 0xf7, 0xff, 0xff, 0xfd, 0xef, 0xfb, 0x7d, 0xf7, 0xb7, 0xf7, 0xdd, 0x04, 0x17, 0xde, 0xf0, 
  0xff, 0xff, 0xff, 0xfe, 0xef, 0xff, 0xff, 0x5a, 0xfe, 0xdf, 0xde, 0xfc, 0xab, 0x52, 0xa1, 0x7d, 0xfb, 0xf0, 
  0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xdd, 0xf7, 0xaa, 0xfe, 0xfe, 0xff, 0xfd, 0xaa, 0x9f, 0xff, 0x7f, 0xf0, 
  0xff, 0xff, 0xfd, 0xbf, 0xff, 0xbf, 0xfb, 0x6a, 0xdf, 0x7f, 0xfb, 0xff, 0xd4, 0xe4, 0xa5, 0xbf, 0xef, 0x70, 
  0xff, 0xff, 0xff, 0xff, 0xdf, 0xf7, 0xff, 0xad, 0xfb, 0x6f, 0x7f, 0xf6, 0xff, 0xb3, 0x1f, 0xed, 0xff, 0xf0, 
  0xff, 0xff, 0xf7, 0xf7, 0xf5, 0xff, 0xea, 0xd7, 0x6d, 0xbf, 0xdb, 0xbf, 0xf5, 0x7f, 0xff, 0xff, 0xbb, 0xb0, 
  0xff, 0xff, 0xff, 0xbf, 0xfe, 0xbf, 0xfe, 0xa9, 0xbb, 0x5f, 0x7f, 0xff, 0xff, 0xdf, 0xfb, 0x7f, 0xff, 0xf0, 
  0xff, 0xff, 0xfe, 0xff, 0xf7, 0xfd, 0xab, 0x56, 0xfd, 0xf7, 0xfe, 0xf7, 0x7f, 0xfd, 0xff, 0xed, 0xee, 0xf0, 
  0xff, 0xff, 0xf7, 0xff, 0xdd, 0x7f, 0xfd, 0x6d, 0xd7, 0x5f, 0xff, 0xff, 0xef, 0xff, 0xef, 0xff, 0xbf, 0xf0, 
  0xfa, 0xff, 0x7f, 0xff, 0xff, 0xdf, 0xae, 0xd7, 0x7d, 0xff, 0xb7, 0xdf, 0xfd, 0xb7, 0x7d, 0xbf, 0xfb, 0xb0, 
  0xfe, 0x0f, 0xff, 0xff, 0xd5, 0x7f, 0xdb, 0xdd, 0xef, 0x6f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xf6, 0xff, 0xf0, 
  0xdc, 0xaf, 0xfb, 0xff, 0x7f, 0xff, 0xf7, 0x6b, 0x7b, 0xdf, 0x7d, 0xf7, 0xf7, 0xff, 0xef, 0xff, 0xde, 0xf0, 
  0xf2, 0xe7, 0xff, 0xff, 0xfb, 0xf7, 0xee, 0xaf, 0xfe, 0xff, 0xef, 0xbf, 0xff, 0xde, 0xff, 0xbf, 0xf7, 0xb0, 
  0xc4, 0xef, 0xff, 0xff, 0x5f, 0xff, 0xbf, 0x75, 0xbf, 0xbe, 0xff, 0xfd, 0xbd, 0xfb, 0xfb, 0xed, 0xff, 0xf0, 
  0xfc, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xdf, 0xfb, 0xde, 0xff, 0xef, 0xff, 0xff, 0xde, 0xff, 0xbd, 0xf0, 
  0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xef, 0x6f, 0xfd, 0xdb, 0x7f, 0xef, 0x7f, 0xff, 0xff, 0xff, 0x70, 
  0xf7, 0xff, 0xff, 0xff, 0xed, 0xaf, 0xfb, 0xfd, 0xff, 0xd7, 0xff, 0xfb, 0x7f, 0xdb, 0x7f, 0xdb, 0x77, 0xf0, 
  0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xdf, 0xdb, 0xff, 0x7f, 0xff, 0xfb, 0xff, 0xed, 0xff, 0xff, 0xb0, 
  0xfc, 0x7f, 0xff, 0x7f, 0xf7, 0xb7, 0xf5, 0xf6, 0xff, 0xff, 0xee, 0xef, 0xef, 0xff, 0xff, 0xff, 0xee, 0xf0, 
  0xff, 0x7f, 0xff, 0xff, 0xfb, 0x6f, 0xff, 0xff, 0xbe, 0x5b, 0xff, 0xfd, 0xfe, 0xed, 0xfe, 0xdb, 0x7f, 0xf0, 
  0xb7, 0x7f, 0xfb, 0xfb, 0xff, 0xff, 0xfb, 0xee, 0xf6, 0xff, 0xfb, 0xbf, 0xbf, 0xff, 0xdb, 0xff, 0xfb, 0xb0, 
  0xf5, 0x7f, 0xff, 0xff, 0xf7, 0xbf, 0xff, 0x7b, 0x54, 0xfe, 0xff, 0xf7, 0xf7, 0xbf, 0x7f, 0xef, 0xbf, 0xf0, 
  0xff, 0xff, 0xde, 0xff, 0xfa, 0xf7, 0xff, 0xda, 0xa3, 0xf7, 0xef, 0xfe, 0xfd, 0xfb, 0xff, 0xbe, 0xfe, 0xf0, 
  0xf7, 0xff, 0xff, 0xff, 0xff, 0xaf, 0xf6, 0xea, 0x9f, 0xdf, 0xfd, 0xbf, 0xdf, 0xff, 0xed, 0xfb, 0xef, 0xb0, 
  0xf6, 0x7f, 0xf7, 0x6f, 0xfe, 0xff, 0xfb, 0xd4, 0x16, 0xff, 0xbf, 0xff, 0xff, 0x6f, 0x7f, 0xff, 0xfb, 0xf0, 
  0xf5, 0xfd, 0xbf, 0xff, 0xff, 0xaf, 0xbe, 0x29, 0x7f, 0xfd, 0xf7, 0xdb, 0xf7, 0xfd, 0xff, 0x6f, 0x7f, 0xf0, 
  0xfc, 0x7f, 0xfe, 0xfb, 0xfd, 0xff, 0xfd, 0x6c, 0xff, 0xef, 0xfe, 0xff, 0xbf, 0xff, 0xfb, 0xff, 0xde, 0xd0, 
  0xf6, 0xff, 0x7b, 0xdf, 0xff, 0x77, 0xfd, 0xef, 0xfb, 0x7f, 0xbf, 0xfe, 0xfd, 0xb7, 0xbf, 0xfb, 0xff, 0xf0, 
  0xf2, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xea, 0xf7, 0xff, 0xfd, 0xff, 0xb7, 0xef, 0xff, 0xee, 0xde, 0xfd, 0xf0, 
  0xff, 0x7f, 0xef, 0x7f, 0xfe, 0xf7, 0xbb, 0xff, 0xbf, 0xff, 0xef, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xdf, 0x70, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xdf, 0xfd, 0xb7, 0x7e, 0xff, 0x7b, 0x6f, 0xfb, 0xf7, 0xfb, 0xf0, 
  0xff, 0xff, 0x7d, 0xef, 0x7f, 0x7f, 0xef, 0xfd, 0xf7, 0xff, 0xfb, 0xdb, 0xff, 0xff, 0x7f, 0x7e, 0xff, 0xd0, 
  0xff, 0xff, 0xff, 0xfd, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xfb, 0xef, 0xff, 0xee, 0xf0, 
};

const lv_img_dsc_t longzhu = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 104,
  .data_size = 1880,
  .data = longzhu_map,
};
