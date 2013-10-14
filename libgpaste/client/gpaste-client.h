/*
 *      This file is part of GPaste.
 *
 *      Copyright 2012-2013 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 *
 *      GPaste is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      GPaste is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with GPaste.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __G_PASTE_CLIENT_H__
#define __G_PASTE_CLIENT_H__

#include <gpaste-macros.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_CLIENT            (g_paste_client_get_type ())
#define G_PASTE_CLIENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_PASTE_TYPE_CLIENT, GPasteClient))
#define G_PASTE_IS_CLIENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_PASTE_TYPE_CLIENT))
#define G_PASTE_CLIENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), G_PASTE_TYPE_CLIENT, GPasteClientClass))
#define G_PASTE_IS_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_PASTE_TYPE_CLIENT))
#define G_PASTE_CLIENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), G_PASTE_TYPE_CLIENT, GPasteClientClass))

typedef struct _GPasteClient GPasteClient;
typedef struct _GPasteClientClass GPasteClientClass;

G_PASTE_VISIBLE
GType g_paste_client_get_type (void);

gchar   *g_paste_client_get_element                (GPasteClient *self,
                                                    guint32       index,
                                                    GError      **error);
gchar  **g_paste_client_get_history                (GPasteClient *self,
                                                    GError      **error);
void     g_paste_client_add                        (GPasteClient *self,
                                                    const gchar  *text,
                                                    GError      **error);
void     g_paste_client_add_file                   (GPasteClient *self,
                                                    const gchar  *file,
                                                    GError      **error);
void     g_paste_client_select                     (GPasteClient *self,
                                                    guint32       index,
                                                    GError      **error);
void     g_paste_client_delete                     (GPasteClient *self,
                                                    guint32       index,
                                                    GError      **error);
void     g_paste_client_empty                      (GPasteClient *self,
                                                    GError      **error);
void     g_paste_client_track                      (GPasteClient *self,
                                                    gboolean      state,
                                                    GError      **error);
void     g_paste_client_on_extension_state_changed (GPasteClient *self,
                                                    gboolean      state,
                                                    GError      **error);
void     g_paste_client_reexecute                  (GPasteClient *self,
                                                    GError      **error);
void     g_paste_client_backup_history             (GPasteClient *self,
                                                    const gchar  *name,
                                                    GError      **error);
void     g_paste_client_switch_history             (GPasteClient *self,
                                                    const gchar  *name,
                                                    GError      **error);
void     g_paste_client_delete_history             (GPasteClient *self,
                                                    const gchar  *name,
                                                    GError      **error);
gchar  **g_paste_client_list_histories             (GPasteClient *self,
                                                    GError      **error);
gboolean g_paste_client_is_active                  (GPasteClient *self);

GPasteClient *g_paste_client_new (GError **error);

G_END_DECLS

#endif /*__G_PASTE_CLIENT_H__*/
