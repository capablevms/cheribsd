/*
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 *
 * Copyright Tim Tyler
 * Copyright Michael Drake <tlsa@netsurf-browser.org>
 *
 * This font is based on the "Default" font with Zap 1.47 [TEST], which
 * was created for Zap by Tim Tyler.  It was converted to a plain text
 * format and many glyphs added for use in the NetSurf project.
 *
 * Plain text font data:
 *     http://git.netsurf-browser.org/art.git/plain/fonts/netsurf/glyph_data
 *
 *     Zap: http://zap.tartarus.org/
 * NetSurf: http://www.netsurf-browser.org/
 *
 * Thanks to Tim Tyler for the original font and his permission to use it.
 * Thanks to James Aylett for helping track down Tim.
 * Thanks to Christian Ludlam for helping with Zap font info.
 *
 * Please contact Michael Drake if you want to contribute gylphs to
 * this font.
 */

/* Don't edit this file, it was generated from the plain text source data. */

#include "desktop/plotters.h"
#include "utils/utf8.h"

#include "framebuffer/font_internal.h"

#ifndef _WIN32
#   if defined(__FreeBSD__)
#      include <sys/endian.h>
#      define   __BYTE_ORDER    _BYTE_ORDER
#      define   __BIG_ENDIAN    _BIG_ENDIAN
#   else
#      include <endian.h>
#   endif
#else
#define __BYTE_ORDER __BYTE_ORDER__
#define __BIG_ENDIAN __ORDER_BIG_ENDIAN__
#endif

#if __BYTE_ORDER == __BIG_ENDIAN
#   define S	24
#else
#   define S	0
#endif
#define FONTDATAMAX 4096

static const uint32_t fontdata_italic[FONTDATAMAX] = {
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xAA<<S, 0xAA<<S, 0xAA<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xE4<<S, 0xAC<<S, 0xA4<<S, 0xA4<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEC<<S, 0xA2<<S, 0xA4<<S, 0xA8<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEC<<S, 0xA2<<S, 0xAC<<S, 0xA2<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEA<<S, 0xAA<<S, 0xAE<<S, 0xA2<<S, 0xE2<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xA8<<S, 0xAE<<S, 0xA2<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xE6<<S, 0xA8<<S, 0xAE<<S, 0xAA<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xA2<<S, 0xA4<<S, 0xA4<<S, 0xE4<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xAA<<S, 0xAE<<S, 0xAA<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xAA<<S, 0xAE<<S, 0xA2<<S, 0xE2<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xE4<<S, 0xAA<<S, 0xAE<<S, 0xAA<<S, 0xEA<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEC<<S, 0xAA<<S, 0xAC<<S, 0xAA<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xE4<<S, 0xAA<<S, 0xA8<<S, 0xAA<<S, 0xE4<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEC<<S, 0xAA<<S, 0xAA<<S, 0xAA<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xA8<<S, 0xAC<<S, 0xA8<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0xA8<<S, 0xAC<<S, 0xA8<<S, 0xE8<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xCA<<S, 0x4A<<S, 0x4A<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x44<<S, 0xCC<<S, 0x44<<S, 0x44<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4C<<S, 0xC2<<S, 0x44<<S, 0x48<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4C<<S, 0xC2<<S, 0x4C<<S, 0x42<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4A<<S, 0xCA<<S, 0x4E<<S, 0x42<<S, 0xE2<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xC8<<S, 0x4E<<S, 0x42<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x46<<S, 0xC8<<S, 0x4E<<S, 0x4A<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xC2<<S, 0x44<<S, 0x44<<S, 0xE4<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xCA<<S, 0x4E<<S, 0x4A<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xCA<<S, 0x4E<<S, 0x42<<S, 0xE2<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x44<<S, 0xCA<<S, 0x4E<<S, 0x4A<<S, 0xEA<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4C<<S, 0xCA<<S, 0x4C<<S, 0x4A<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x44<<S, 0xCA<<S, 0x48<<S, 0x4A<<S, 0xE4<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4C<<S, 0xCA<<S, 0x4A<<S, 0x4A<<S, 0xEC<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xC8<<S, 0x4C<<S, 0x48<<S, 0xEE<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0x4E<<S, 0xC8<<S, 0x4C<<S, 0x48<<S, 0xE8<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x36<<S, 0x36<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1B<<S, 0x1B<<S, 0x1B<<S, 0x7F<<S, 0x7F<<S, 0x36<<S, 0x36<<S,
	0xFF<<S, 0xFF<<S, 0x6C<<S, 0x6C<<S, 0x6C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x3E<<S, 0x7F<<S, 0x6B<<S, 0x68<<S, 0x78<<S, 0x3C<<S,
	0x1E<<S, 0x16<<S, 0xD6<<S, 0xFE<<S, 0x7C<<S, 0x20<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0xC6<<S, 0xCE<<S, 0x1C<<S,
	0x38<<S, 0x70<<S, 0xE6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1C<<S, 0x3E<<S, 0x36<<S, 0x36<<S, 0x3C<<S, 0x39<<S, 0x7F<<S,
	0x6E<<S, 0xCC<<S, 0xCC<<S, 0xFE<<S, 0x7A<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x06<<S, 0x0E<<S, 0x1C<<S, 0x38<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0xC0<<S,
	0xC0<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0xE0<<S, 0x70<<S, 0x30<<S, 0x00<<S,
	0x18<<S, 0x1C<<S, 0x0E<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x06<<S,
	0x0C<<S, 0x0C<<S, 0x18<<S, 0x38<<S, 0x70<<S, 0xE0<<S, 0xC0<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x36<<S, 0x36<<S, 0x1C<<S, 0x7F<<S,
	0xFE<<S, 0x38<<S, 0x6C<<S, 0x6C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x7E<<S,
	0xFC<<S, 0x30<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x18<<S, 0x38<<S, 0x70<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x7E<<S, 0xFC<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x0E<<S, 0x1C<<S,
	0x38<<S, 0x70<<S, 0xE0<<S, 0xC0<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x67<<S, 0x6E<<S, 0x76<<S,
	0xE6<<S, 0xCC<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x0E<<S, 0x1E<<S, 0x3C<<S, 0x0C<<S, 0x0C<<S, 0x18<<S,
	0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x03<<S, 0x07<<S, 0x1E<<S, 0x7C<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xFC<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x03<<S, 0x06<<S, 0x1E<<S, 0x1E<<S,
	0x06<<S, 0x06<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x01<<S, 0x03<<S, 0x07<<S, 0x0F<<S, 0x1E<<S, 0x36<<S, 0x7F<<S,
	0x7F<<S, 0x0C<<S, 0x0C<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1F<<S, 0x1F<<S, 0x30<<S, 0x30<<S, 0x7C<<S, 0x7E<<S, 0x06<<S,
	0x06<<S, 0x06<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0F<<S, 0x1F<<S, 0x38<<S, 0x30<<S, 0x60<<S, 0x7C<<S, 0x7E<<S,
	0xC6<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S, 0x03<<S, 0x06<<S, 0x06<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x1E<<S, 0x7C<<S,
	0x66<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x7E<<S, 0x3E<<S,
	0x06<<S, 0x0C<<S, 0x1C<<S, 0xF8<<S, 0xF0<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x38<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x0E<<S, 0x1C<<S, 0x38<<S, 0x70<<S, 0x70<<S,
	0x70<<S, 0x38<<S, 0x1C<<S, 0x0C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3E<<S, 0x7C<<S, 0x00<<S, 0x00<<S,
	0x7C<<S, 0xF8<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x0C<<S, 0x0C<<S, 0x06<<S, 0x0E<<S,
	0x1C<<S, 0x38<<S, 0x70<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x03<<S, 0x07<<S, 0x0E<<S,
	0x1C<<S, 0x18<<S, 0x00<<S, 0x30<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x63<<S, 0x6F<<S, 0x6B<<S, 0x6B<<S,
	0xCF<<S, 0xCE<<S, 0xC0<<S, 0xFC<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x66<<S, 0x7E<<S, 0x7E<<S,
	0x66<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3E<<S, 0x3F<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x7E<<S, 0x7C<<S,
	0x66<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S,
	0x60<<S, 0xC0<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3E<<S, 0x3F<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0xC3<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0xF8<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3F<<S, 0x3F<<S, 0x30<<S, 0x30<<S, 0x60<<S, 0x7C<<S, 0x7C<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3F<<S, 0x3F<<S, 0x30<<S, 0x30<<S, 0x60<<S, 0x7C<<S, 0x7C<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x6E<<S,
	0x6E<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S, 0x7E<<S, 0x7E<<S,
	0xC6<<S, 0xC6<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3F<<S, 0x3F<<S, 0x0C<<S, 0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0xFC<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x03<<S, 0x03<<S, 0x03<<S, 0x06<<S, 0x06<<S, 0x06<<S,
	0x06<<S, 0x0C<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x30<<S, 0x30<<S, 0x33<<S, 0x36<<S, 0x7C<<S, 0x78<<S, 0x70<<S,
	0x78<<S, 0xF8<<S, 0xDC<<S, 0xCE<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x3F<<S, 0x3F<<S, 0x7F<<S, 0x6B<<S, 0x66<<S,
	0x66<<S, 0xC6<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x3B<<S, 0x3B<<S, 0x7B<<S, 0x7E<<S, 0x6E<<S,
	0x6E<<S, 0xCE<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S, 0x66<<S,
	0xC6<<S, 0xCC<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x67<<S, 0x7E<<S, 0x7C<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S, 0x66<<S,
	0xC6<<S, 0xF6<<S, 0xDC<<S, 0xF8<<S, 0x7C<<S, 0x0C<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3E<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x7E<<S, 0x7C<<S,
	0x6E<<S, 0xC6<<S, 0xC6<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x60<<S, 0x60<<S, 0x7C<<S, 0x3E<<S,
	0x06<<S, 0x06<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x7F<<S, 0x7F<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x30<<S,
	0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S, 0x66<<S,
	0x66<<S, 0xC6<<S, 0xCC<<S, 0xFC<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x66<<S,
	0x66<<S, 0x6C<<S, 0x38<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x6B<<S,
	0x6B<<S, 0xFE<<S, 0xFE<<S, 0xEE<<S, 0x44<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S, 0x77<<S, 0x3E<<S, 0x1C<<S, 0x38<<S,
	0x7C<<S, 0xEE<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x66<<S, 0x66<<S, 0x66<<S, 0x66<<S, 0x3C<<S, 0x3C<<S, 0x18<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x7F<<S, 0x7F<<S, 0x03<<S, 0x07<<S, 0x0E<<S, 0x0C<<S, 0x18<<S,
	0x38<<S, 0x70<<S, 0xE0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0F<<S, 0x0F<<S, 0x0C<<S, 0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0x3E<<S, 0x3E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0xC0<<S, 0xE0<<S, 0x70<<S,
	0x38<<S, 0x1C<<S, 0x0E<<S, 0x06<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1F<<S, 0x1F<<S, 0x03<<S, 0x03<<S, 0x06<<S, 0x06<<S, 0x06<<S,
	0x06<<S, 0x0C<<S, 0x0C<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x0E<<S, 0x1F<<S, 0x3B<<S, 0x63<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0xFE<<S, 0xFE<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S, 0x0E<<S, 0x0C<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3C<<S, 0x3E<<S, 0x06<<S,
	0x7E<<S, 0xFC<<S, 0xCC<<S, 0xFC<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3C<<S, 0x7E<<S, 0x66<<S,
	0xC0<<S, 0xC0<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x03<<S, 0x03<<S, 0x06<<S, 0x3E<<S, 0x7E<<S, 0x66<<S,
	0xC6<<S, 0xCC<<S, 0xCC<<S, 0xFC<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3C<<S, 0x7E<<S, 0x66<<S,
	0xFE<<S, 0xFC<<S, 0xC0<<S, 0xFC<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x07<<S, 0x0F<<S, 0x0C<<S, 0x18<<S, 0x7E<<S, 0x7E<<S, 0x30<<S,
	0x30<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x0C<<S, 0xFC<<S, 0xF8<<S,
	0x00<<S, 0x00<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x6E<<S, 0x7F<<S, 0x73<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x06<<S, 0x00<<S, 0x1C<<S, 0x3C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x03<<S, 0x03<<S, 0x00<<S, 0x0E<<S, 0x1E<<S, 0x06<<S,
	0x06<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S, 0x18<<S, 0xF8<<S, 0xF0<<S,
	0x00<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x33<<S, 0x67<<S, 0x6E<<S, 0x7C<<S,
	0x7C<<S, 0xDC<<S, 0xCE<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x0E<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x76<<S, 0x7F<<S, 0x7F<<S,
	0x6B<<S, 0xD6<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x6C<<S, 0x7E<<S, 0x76<<S,
	0x66<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0xCC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3C<<S, 0x7E<<S, 0x66<<S,
	0x66<<S, 0xCC<<S, 0xCC<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3E<<S, 0x3F<<S, 0x33<<S,
	0x63<<S, 0x66<<S, 0x66<<S, 0xFE<<S, 0xFC<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x0C<<S, 0x0E<<S, 0x0E<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x6F<<S, 0x7F<<S, 0x70<<S,
	0x60<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x60<<S,
	0x7C<<S, 0x3E<<S, 0x06<<S, 0xFE<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x3F<<S, 0x3F<<S, 0x18<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0x3E<<S, 0x1C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x66<<S,
	0x66<<S, 0x66<<S, 0xCC<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x66<<S, 0x66<<S, 0x66<<S,
	0xCC<<S, 0xCC<<S, 0xF8<<S, 0x70<<S, 0x20<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x6B<<S, 0xDE<<S, 0xFE<<S, 0xFE<<S, 0x6C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x77<<S,
	0x3E<<S, 0x7C<<S, 0xEE<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x0C<<S, 0xFC<<S, 0xF8<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x7F<<S, 0x7F<<S, 0x07<<S,
	0x1E<<S, 0x78<<S, 0xE0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x07<<S, 0x0E<<S, 0x0C<<S, 0x0C<<S, 0x18<<S, 0x70<<S, 0x70<<S,
	0x18<<S, 0x18<<S, 0x30<<S, 0x38<<S, 0x1C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x06<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x00<<S,
	0x00<<S, 0x38<<S, 0x1C<<S, 0x0C<<S, 0x18<<S, 0x18<<S, 0x0E<<S, 0x0E<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0x70<<S, 0xE0<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1D<<S, 0x3F<<S, 0x37<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x7F<<S, 0x00<<S, 0x77<<S, 0x55<<S, 0x55<<S, 0x55<<S, 0x77<<S,
	0x00<<S, 0xEE<<S, 0x28<<S, 0x4C<<S, 0x48<<S, 0x48<<S, 0x00<<S, 0xFE<<S,
	0x00<<S, 0x06<<S, 0x0F<<S, 0x1B<<S, 0x18<<S, 0x7E<<S, 0x30<<S, 0x7C<<S,
	0x60<<S, 0x60<<S, 0x6C<<S, 0x3C<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x10<<S, 0x38<<S, 0x38<<S, 0x6C<<S, 0x54<<S, 0xF6<<S, 0xEE<<S,
	0x6C<<S, 0x7C<<S, 0x28<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x10<<S, 0x20<<S, 0x00<<S,
	0x00<<S, 0x07<<S, 0x0F<<S, 0x0C<<S, 0x18<<S, 0x7E<<S, 0x7E<<S, 0x30<<S,
	0x30<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S, 0xC0<<S, 0x80<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x66<<S, 0x66<<S, 0x44<<S, 0x88<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0xDB<<S, 0xDB<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x1F<<S, 0x3F<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x06<<S, 0x06<<S, 0x1F<<S, 0x3F<<S, 0x0C<<S, 0x3F<<S,
	0x3F<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x3E<<S, 0x63<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x61<<S, 0x63<<S, 0x06<<S,
	0x0C<<S, 0x30<<S, 0x60<<S, 0xDB<<S, 0x9B<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x63<<S, 0x3E<<S, 0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x60<<S, 0x7C<<S,
	0x3E<<S, 0x06<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x0E<<S,
	0x1C<<S, 0x30<<S, 0x38<<S, 0x1C<<S, 0x0C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1F<<S, 0x3F<<S, 0x33<<S, 0x33<<S, 0x66<<S, 0x67<<S, 0x67<<S,
	0x66<<S, 0xCC<<S, 0xCC<<S, 0xFF<<S, 0x7F<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x10<<S, 0x38<<S, 0x38<<S, 0x6C<<S, 0x54<<S, 0xF6<<S, 0xEE<<S,
	0x6C<<S, 0x7C<<S, 0x28<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x63<<S, 0x3E<<S, 0x00<<S, 0x7F<<S, 0x7F<<S, 0x03<<S, 0x07<<S, 0x0E<<S,
	0x18<<S, 0x70<<S, 0xE0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x10<<S, 0x38<<S, 0x38<<S, 0x6C<<S, 0x54<<S, 0xF6<<S, 0xEE<<S,
	0x6C<<S, 0x7C<<S, 0x28<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x10<<S, 0x38<<S, 0x38<<S, 0x6C<<S, 0x54<<S, 0xF6<<S, 0xEE<<S,
	0x6C<<S, 0x7C<<S, 0x28<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x04<<S, 0x08<<S, 0x10<<S, 0x18<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x0C<<S, 0x04<<S, 0x08<<S, 0x10<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x09<<S, 0x12<<S, 0x1B<<S, 0x36<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x09<<S, 0x12<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x1E<<S, 0x3F<<S,
	0x3F<<S, 0x7E<<S, 0x7E<<S, 0x3C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x1E<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x7F<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x19<<S, 0x26<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0xFB<<S, 0xFF<<S, 0x55<<S, 0xA2<<S, 0xA2<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x63<<S, 0x36<<S, 0x1C<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x60<<S,
	0x7C<<S, 0x3E<<S, 0x06<<S, 0xFE<<S, 0xFC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x18<<S, 0x1C<<S,
	0x0E<<S, 0x0C<<S, 0x1C<<S, 0x38<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x36<<S, 0x7F<<S, 0x6D<<S,
	0x6F<<S, 0xDE<<S, 0xD8<<S, 0xFE<<S, 0x6E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x10<<S, 0x38<<S, 0x38<<S, 0x6C<<S, 0x54<<S, 0xF6<<S, 0xEE<<S,
	0x6C<<S, 0x7C<<S, 0x28<<S, 0x38<<S, 0x10<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x63<<S, 0x36<<S, 0x1C<<S, 0x00<<S, 0x7F<<S, 0x7F<<S, 0x07<<S,
	0x1E<<S, 0x78<<S, 0xE0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x33<<S, 0x00<<S, 0x66<<S, 0x66<<S, 0x66<<S, 0x3C<<S, 0x3C<<S,
	0x18<<S, 0x30<<S, 0x30<<S, 0x30<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x00<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x04<<S, 0x04<<S, 0x3E<<S, 0x7F<<S, 0x6B<<S,
	0x68<<S, 0xD0<<S, 0xD6<<S, 0xFE<<S, 0x7C<<S, 0x20<<S, 0x20<<S, 0x00<<S,
	0x00<<S, 0x0F<<S, 0x1F<<S, 0x19<<S, 0x18<<S, 0x30<<S, 0x7C<<S, 0x7C<<S,
	0x30<<S, 0x60<<S, 0xE6<<S, 0xFE<<S, 0xDC<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x19<<S, 0x33<<S, 0x1E<<S, 0x3F<<S,
	0x33<<S, 0x66<<S, 0x7E<<S, 0x3C<<S, 0x66<<S, 0xCC<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x19<<S, 0x19<<S, 0x19<<S, 0x1E<<S, 0x0C<<S, 0x3F<<S,
	0x0C<<S, 0x7E<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x06<<S, 0x0C<<S, 0x0C<<S, 0x00<<S,
	0x00<<S, 0x18<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x07<<S, 0x0E<<S, 0x18<<S, 0x18<<S, 0x3C<<S, 0x7E<<S, 0x66<<S,
	0x7E<<S, 0x3C<<S, 0x18<<S, 0x18<<S, 0x70<<S, 0xE0<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x33<<S, 0x66<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1F<<S, 0x21<<S, 0x21<<S, 0x4D<<S, 0x51<<S, 0x51<<S,
	0x91<<S, 0xA1<<S, 0x9A<<S, 0x82<<S, 0x7C<<S, 0x38<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1C<<S, 0x02<<S, 0x1E<<S, 0x22<<S, 0x3C<<S, 0x00<<S, 0x7C<<S,
	0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x1B<<S,
	0x36<<S, 0xD8<<S, 0xD8<<S, 0x6C<<S, 0x36<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1E<<S, 0x3E<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x3F<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1F<<S, 0x21<<S, 0x49<<S, 0x55<<S, 0x55<<S, 0x59<<S,
	0x99<<S, 0xA5<<S, 0xA5<<S, 0x82<<S, 0x7E<<S, 0x78<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x1F<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x3F<<S, 0x3C<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x06<<S, 0x3F<<S, 0x3F<<S, 0x0C<<S,
	0x0C<<S, 0x00<<S, 0x7E<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x3C<<S, 0x3E<<S, 0x06<<S, 0x3C<<S, 0x78<<S, 0x60<<S,
	0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x3C<<S, 0x3E<<S, 0x06<<S, 0x18<<S, 0x0C<<S, 0x7C<<S,
	0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x33<<S, 0x33<<S,
	0x33<<S, 0x66<<S, 0x66<<S, 0x7E<<S, 0x7C<<S, 0xC0<<S, 0xC0<<S, 0x80<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x3F<<S, 0x6F<<S, 0xDB<<S, 0xDB<<S, 0x7B<<S,
	0x1B<<S, 0x36<<S, 0x36<<S, 0x36<<S, 0x36<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S,
	0x0C<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x18<<S, 0x1C<<S, 0x0C<<S, 0x1C<<S, 0x30<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x38<<S, 0x18<<S, 0x30<<S, 0x30<<S, 0x78<<S,
	0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0C<<S, 0x1E<<S, 0x22<<S, 0x3C<<S, 0x18<<S, 0x00<<S, 0x3C<<S,
	0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x6C<<S,
	0x36<<S, 0x36<<S, 0x36<<S, 0x6C<<S, 0xD8<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x10<<S, 0x30<<S, 0x10<<S, 0x23<<S, 0x76<<S, 0x0C<<S,
	0x18<<S, 0x64<<S, 0xCC<<S, 0x94<<S, 0x3E<<S, 0x08<<S, 0x08<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x10<<S, 0x30<<S, 0x10<<S, 0x23<<S, 0x76<<S, 0x0C<<S,
	0x18<<S, 0x60<<S, 0xDC<<S, 0x82<<S, 0x1C<<S, 0x20<<S, 0x3C<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x38<<S, 0x04<<S, 0x18<<S, 0x0B<<S, 0x76<<S, 0x0C<<S,
	0x18<<S, 0x64<<S, 0xCC<<S, 0x96<<S, 0x3E<<S, 0x08<<S, 0x08<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x06<<S, 0x06<<S, 0x00<<S, 0x0C<<S, 0x0C<<S,
	0x3C<<S, 0x70<<S, 0xC0<<S, 0xC6<<S, 0xC6<<S, 0xFC<<S, 0x78<<S, 0x00<<S,
	0x00<<S, 0x18<<S, 0x0C<<S, 0x00<<S, 0x04<<S, 0x1C<<S, 0x36<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x04<<S, 0x1C<<S, 0x36<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1B<<S, 0x11<<S, 0x04<<S, 0x1C<<S, 0x36<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x37<<S, 0x00<<S, 0x04<<S, 0x1C<<S, 0x36<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1B<<S, 0x1B<<S, 0x04<<S, 0x0E<<S, 0x36<<S, 0x63<<S, 0x7F<<S,
	0x7F<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x11<<S, 0x0E<<S, 0x0E<<S, 0x36<<S, 0x63<<S, 0x7F<<S,
	0x7F<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x07<<S, 0x0F<<S, 0x1F<<S, 0x3B<<S, 0x66<<S, 0x7F<<S, 0x7F<<S,
	0x66<<S, 0xCC<<S, 0xCC<<S, 0xCF<<S, 0xCF<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1E<<S, 0x3F<<S, 0x33<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x60<<S,
	0x60<<S, 0xC0<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x1C<<S, 0xCC<<S, 0x78<<S,
	0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x60<<S, 0x78<<S,
	0x78<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x60<<S, 0x78<<S,
	0x78<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x60<<S, 0x78<<S,
	0x78<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x1B<<S, 0x1B<<S, 0x00<<S, 0x3F<<S, 0x3F<<S, 0x60<<S, 0x60<<S, 0x78<<S,
	0x78<<S, 0xC0<<S, 0xC0<<S, 0xFE<<S, 0xFE<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x1F<<S, 0x1F<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x1F<<S, 0x1F<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x09<<S, 0x1F<<S, 0x1F<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x1F<<S, 0x1F<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x7C<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1E<<S, 0x1F<<S, 0x1B<<S, 0x33<<S, 0x33<<S, 0x7B<<S,
	0x33<<S, 0x66<<S, 0x6E<<S, 0x7C<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x37<<S, 0x00<<S, 0x31<<S, 0x63<<S, 0x73<<S, 0x7B<<S,
	0x7F<<S, 0xDE<<S, 0xCE<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x37<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x63<<S, 0x77<<S, 0x3E<<S,
	0x1C<<S, 0x38<<S, 0x7C<<S, 0xEE<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x3E<<S, 0x37<<S, 0x6B<<S, 0x6B<<S, 0x6B<<S, 0xD6<<S,
	0xD6<<S, 0xD6<<S, 0xEE<<S, 0x7C<<S, 0xB8<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S,
	0x66<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S,
	0x66<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x66<<S,
	0x66<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x1B<<S, 0x1B<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x66<<S, 0xC6<<S, 0xCE<<S, 0xFC<<S, 0x78<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x33<<S, 0x33<<S, 0x66<<S, 0x6E<<S,
	0x7C<<S, 0x38<<S, 0x30<<S, 0x60<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x1F<<S, 0x3F<<S, 0x33<<S, 0x33<<S,
	0x3F<<S, 0x7C<<S, 0x60<<S, 0x60<<S, 0x60<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1F<<S, 0x1B<<S, 0x1B<<S, 0x33<<S, 0x3F<<S, 0x3E<<S,
	0x33<<S, 0x66<<S, 0x66<<S, 0x7E<<S, 0x7C<<S, 0xC0<<S, 0x80<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xCE<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1D<<S, 0x37<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x3F<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x0E<<S, 0x1B<<S, 0x0E<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xCE<<S, 0xFE<<S, 0x76<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3A<<S, 0x3F<<S, 0x0D<<S,
	0x1F<<S, 0x7E<<S, 0xD8<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3E<<S, 0x7F<<S,
	0x63<<S, 0xC0<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x30<<S, 0xF8<<S, 0xF0<<S,
	0x00<<S, 0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC0<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC0<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC0<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x7F<<S, 0xFE<<S, 0xC0<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x0C<<S, 0x06<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x06<<S, 0x0F<<S, 0x19<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x0C<<S,
	0x0C<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1B<<S, 0x1F<<S, 0x3E<<S, 0x37<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x3F<<S, 0x37<<S, 0x00<<S, 0x7E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0xC6<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x0C<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x1D<<S, 0x3F<<S, 0x37<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x0C<<S, 0x0C<<S, 0x00<<S, 0x3F<<S,
	0x7E<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x00<<S, 0x3E<<S, 0x7F<<S, 0x67<<S,
	0x6B<<S, 0xD6<<S, 0xE6<<S, 0xFE<<S, 0x7C<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x0C<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x06<<S, 0x0C<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x04<<S, 0x0E<<S, 0x1B<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x1B<<S, 0x1B<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x00<<S, 0x00<<S, 0x00<<S,
	0x00<<S, 0x00<<S, 0x03<<S, 0x06<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x0C<<S, 0xF8<<S, 0xF0<<S,
	0x00<<S, 0x00<<S, 0x18<<S, 0x18<<S, 0x18<<S, 0x3E<<S, 0x3F<<S, 0x33<<S,
	0x33<<S, 0x66<<S, 0x66<<S, 0x7E<<S, 0x7C<<S, 0xC0<<S, 0xC0<<S, 0xC0<<S,
	0x00<<S, 0x00<<S, 0x00<<S, 0x1B<<S, 0x00<<S, 0x63<<S, 0x63<<S, 0x63<<S,
	0x63<<S, 0xC6<<S, 0xC6<<S, 0xFE<<S, 0x7E<<S, 0x0C<<S, 0xF8<<S, 0xF0<<S,
};

const struct fb_font_desc font_italic = {
	.name = "NetSurf Italic",
	.width = 8,
	.height = 16,
	.encoding = "CP1252",
	.data = fontdata_italic,
};
