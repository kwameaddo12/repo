/* Generated by wayland-scanner 1.17.0 */

/*
 * Copyright © 2012, 2013 Intel Corporation
 * Copyright © 2015, 2016 Jan Arne Petersen
 *
 * Permission to use, copy, modify, distribute, and sell this
 * software and its documentation for any purpose is hereby granted
 * without fee, provided that the above copyright notice appear in
 * all copies and that both that copyright notice and this permission
 * notice appear in supporting documentation, and that the name of
 * the copyright holders not be used in advertising or publicity
 * pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied
 * warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface gtk_text_input_interface;
extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	&wl_surface_interface,
	&gtk_text_input_interface,
	&wl_seat_interface,
};

static const struct wl_message gtk_text_input_requests[] = {
	{ "destroy", "", types + 0 },
	{ "enable", "uu", types + 0 },
	{ "disable", "", types + 0 },
	{ "set_surrounding_text", "sii", types + 0 },
	{ "set_content_type", "uu", types + 0 },
	{ "set_cursor_rectangle", "iiii", types + 0 },
	{ "commit", "", types + 0 },
};

static const struct wl_message gtk_text_input_events[] = {
	{ "enter", "uo", types + 4 },
	{ "leave", "uo", types + 6 },
	{ "preedit_string", "?su", types + 0 },
	{ "commit_string", "?s", types + 0 },
	{ "delete_surrounding_text", "uu", types + 0 },
};

const struct wl_interface gtk_text_input_interface = {
	"gtk_text_input", 1,
	7, gtk_text_input_requests,
	5, gtk_text_input_events,
};

static const struct wl_message gtk_text_input_manager_requests[] = {
	{ "destroy", "", types + 0 },
	{ "get_text_input", "no", types + 8 },
};

const struct wl_interface gtk_text_input_manager_interface = {
	"gtk_text_input_manager", 1,
	2, gtk_text_input_manager_requests,
	0, NULL,
};

