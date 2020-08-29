/*
 * Generic GPIO ops
 *
 * Copyright (C) 2019 - 2020 Andy Green <andy@warmcat.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * This is like an abstract class for gpio, a real implementation provides
 * functions for the ops that use the underlying OS gpio arrangements.
 */

#if !defined(__LWS_GPIO_H__)
#define __LWS_GPIO_H__

typedef int _lws_plat_gpio_t;

typedef struct lws_gpio_ops {
	void (*mode_write)(_lws_plat_gpio_t gpio);
	void (*mode_read)(_lws_plat_gpio_t gpio);
	int (*read)(_lws_plat_gpio_t gpio);
	void (*set)(_lws_plat_gpio_t gpio, int val);
} lws_gpio_ops_t;

#endif
