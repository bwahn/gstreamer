/* GStreamer
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * glib-compat.h: Public GLib compatibility shims
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


/*
 * Modified by the GLib Team and others 1997-2000. See the AUTHORS file from
 * glib-2.8.0 for a list of people on the GLib Team. See the ChangeLog files
 * from glib-2.8.0 for a list of changes. These files are distributed with GLib
 * at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __GST_GLIB_COMPAT_H__
#define __GST_GLIB_COMPAT_H__

G_BEGIN_DECLS

/* FIXME: Remove this once we depend on GLib >= 2.13.0 */
#ifndef G_PARAM_STATIC_STRINGS
#define G_PARAM_STATIC_STRINGS (G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB)
#endif

G_END_DECLS

#endif /* __GST_GLIB_COMPAT_H__ */
