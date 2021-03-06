/*
 * Copyright (C) 2010 Samsung Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */


#ifndef __LINUX_GP2A_H
#define __LINUX_GP2A_H

#include <linux/types.h>

#ifdef __KERNEL__
#define GP2A_OPT "gp2a-opt"
struct gp2a_platform_data {
	int p_out; /* proximity-sensor-output gpio */
	void (*power)(bool); /* power to the chip */
	void (*led_on)(bool); /* power to the led */
	void (*ldo_on)(bool); /* power to the sensor ldo */
	int (*light_adc_value)(void); /* get light level from adc */
};
#endif /* __KERNEL__ */

#endif

