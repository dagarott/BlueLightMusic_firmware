/* Copyright (c) 2015 Takafumi Naka. All Rights Reserved.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

#ifndef LEDSPATTERNS_H__
#define LEDSPATTERNS_H__

#include	"ws2812b_drive.h"
#include 	"stdlib.h"

#define FADE 0
#define CYCLON 1


uint8_t	FadeInOut(void);
uint8_t Cyclon(void);

#endif // LEDSPATTERNS_H