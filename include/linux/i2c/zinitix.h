// kernel/include/linux/i2c

/*
 *
 * Zinitix bt532 touch driver
 *
 * Copyright (C) 2013 Samsung Electronics Co.Ltd
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */


#ifndef _LINUX_BT532_TS_H
#define _LINUX_BT532_TS_H

#define TS_DRVIER_VERSION	"1.0.18_1"
#define ZINITIX_NAME		"zinitix_touch"

#define GPIO_TSP_VENDOR1	20
#define GPIO_TSP_VENDOR2	21

#define zinitix_debug_msg(fmt, args...) \
	do { \
		if (m_ts_debug_mode) \
			printk(KERN_INFO "bt532_ts[%-18s:%5d] " fmt, \
					__func__, __LINE__, ## args); \
	} while (0);

#define zinitix_printk(fmt, args...) \
	do { \
		printk(KERN_INFO "bt532_ts[%-18s:%5d] " fmt, \
				__func__, __LINE__, ## args); \
	} while (0);

struct bt532_ts_platform_data {
	u32		gpio_int;
	u32		gpio_scl;	
	u32		gpio_sda;
	u32		sda_gpio_flags;	
	u32		scl_gpio_flags;	
	u32		gpio_ldo_en;
	u32		gpio_led_en;
	u16		x_resolution;
	u16		y_resolution;
	u16		page_size;

	int		(*power) (bool enable);
	int		(*is_vdd_on)(void);

	u8		orientation;

	const char *project_name;
};

extern struct class *sec_class;

#endif /* LINUX_BT532_TS_H */
