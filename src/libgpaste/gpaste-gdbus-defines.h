/*
 *      This file is part of GPaste.
 *
 *      Copyright 2012-2015 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
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

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_GDBUS_DEFINES_H__
#define __G_PASTE_GDBUS_DEFINES_H__

#include <glib.h>

G_BEGIN_DECLS

#define G_PASTE_BUS_NAME "org.gnome.GPaste"

#define G_PASTE_DAEMON_OBJECT_PATH    "/org/gnome/GPaste"
#define G_PASTE_DAEMON_INTERFACE_NAME "org.gnome.GPaste"

#define G_PASTE_DAEMON_ABOUT                      "About"
#define G_PASTE_DAEMON_ADD                        "Add"
#define G_PASTE_DAEMON_ADD_FILE                   "AddFile"
#define G_PASTE_DAEMON_ADD_PASSWORD               "AddPassword"
#define G_PASTE_DAEMON_BACKUP_HISTORY             "BackupHistory"
#define G_PASTE_DAEMON_DELETE                     "Delete"
#define G_PASTE_DAEMON_DELETE_HISTORY             "DeleteHistory"
#define G_PASTE_DAEMON_DELETE_PASSWORD            "DeletePassword"
#define G_PASTE_DAEMON_EMPTY                      "Empty"
#define G_PASTE_DAEMON_GET_ELEMENT                "GetElement"
#define G_PASTE_DAEMON_GET_HISTORY                "GetHistory"
#define G_PASTE_DAEMON_GET_HISTORY_SIZE           "GetHistorySize"
#define G_PASTE_DAEMON_GET_RAW_ELEMENT            "GetRawElement"
#define G_PASTE_DAEMON_GET_RAW_HISTORY            "GetRawHistory"
#define G_PASTE_DAEMON_LIST_HISTORIES             "ListHistories"
#define G_PASTE_DAEMON_MERGE                      "Merge"
#define G_PASTE_DAEMON_ON_EXTENSION_STATE_CHANGED "OnExtensionStateChanged"
#define G_PASTE_DAEMON_REEXECUTE                  "Reexecute"
#define G_PASTE_DAEMON_RENAME_PASSWORD            "RenamePassword"
#define G_PASTE_DAEMON_SEARCH                     "Search"
#define G_PASTE_DAEMON_SELECT                     "Select"
#define G_PASTE_DAEMON_SET_PASSWORD               "SetPassword"
#define G_PASTE_DAEMON_SHOW_HISTORY               "ShowHistory"
#define G_PASTE_DAEMON_SWITCH_HISTORY             "SwitchHistory"
#define G_PASTE_DAEMON_TRACK                      "Track"
#define G_PASTE_DAEMON_UPLOAD                     "Upload"

#define G_PASTE_DAEMON_SIG_REEXECUTE_SELF "ReexecuteSelf"
#define G_PASTE_DAEMON_SIG_SHOW_HISTORY   "ShowHistory"
#define G_PASTE_DAEMON_SIG_TRACKING       "Tracking"
#define G_PASTE_DAEMON_SIG_UPDATE         "Update"

#define G_PASTE_DAEMON_PROP_ACTIVE  "Active"
#define G_PASTE_DAEMON_PROP_VERSION "Version"

#define G_PASTE_DAEMON_INTERFACE                                               \
        "<node>"                                                               \
        "   <interface name='" G_PASTE_DAEMON_INTERFACE_NAME "'>"              \
        "       <method name='" G_PASTE_DAEMON_ABOUT "' />"                    \
        "       <method name='" G_PASTE_DAEMON_ADD "'>"                        \
        "           <arg type='s' direction='in' name='text' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_ADD_FILE "'>"                   \
        "           <arg type='s' direction='in' name='file' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_ADD_PASSWORD "'>"               \
        "           <arg type='s' direction='in' name='name'     />"           \
        "           <arg type='s' direction='in' name='password' />"           \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_BACKUP_HISTORY "'>"             \
        "           <arg type='s' direction='in' name='name' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_DELETE "'>"                     \
        "           <arg type='u' direction='in' name='index' />"              \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_DELETE_HISTORY "'>"             \
        "           <arg type='s' direction='in' name='name' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_DELETE_PASSWORD "'>"            \
        "           <arg type='s' direction='in' name='name' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_EMPTY "' />"                    \
        "       <method name='" G_PASTE_DAEMON_GET_ELEMENT "'>"                \
        "           <arg type='u' direction='in'  name='index' />"             \
        "           <arg type='s' direction='out' name='value' />"             \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_GET_HISTORY "'>"                \
        "           <arg type='as' direction='out' name='history' />"          \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_GET_HISTORY_SIZE "'>"           \
        "           <arg type='u' direction='out' name='size' />"              \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_GET_RAW_ELEMENT "'>"            \
        "           <arg type='u' direction='in'  name='index' />"             \
        "           <arg type='s' direction='out' name='value' />"             \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_GET_RAW_HISTORY "'>"            \
        "           <arg type='as' direction='out' name='history' />"          \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_LIST_HISTORIES "'>"             \
        "           <arg type='as' direction='out' name='histories' />"        \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_MERGE "'>"                      \
        "           <arg type='s' direction='in'  name='decoration' />"        \
        "           <arg type='s' direction='in'  name='separator'  />"        \
        "           <arg type='au' direction='in' name='indexes'    />"        \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_ON_EXTENSION_STATE_CHANGED "'>" \
        "           <arg type='b' direction='in' name='extension-state' />"    \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_REEXECUTE "' />"                \
        "       <method name='" G_PASTE_DAEMON_RENAME_PASSWORD "'>"            \
        "           <arg type='s' direction='in' name='old-name' />"           \
        "           <arg type='s' direction='in' name='new-name' />"           \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_SEARCH "'>"                     \
        "           <arg type='s' direction='in'   name='query'   />"          \
        "           <arg type='au' direction='out' name='results' />"          \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_SELECT "'>"                     \
        "           <arg type='u' direction='in' name='index' />"              \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_SET_PASSWORD "'>"               \
        "           <arg type='u' direction='in' name='index' />"              \
        "           <arg type='s' direction='in' name='name'  />"              \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_SHOW_HISTORY "' />"             \
        "       <method name='" G_PASTE_DAEMON_SWITCH_HISTORY "'>"             \
        "           <arg type='s' direction='in' name='name' />"               \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_TRACK "'>"                      \
        "           <arg type='b' direction='in' name='tracking-state' />"     \
        "       </method>"                                                     \
        "       <method name='" G_PASTE_DAEMON_UPLOAD "'>"                     \
        "           <arg type='u' direction='in' name='index' />"              \
        "       </method>"                                                     \
        "       <signal name='" G_PASTE_DAEMON_SIG_REEXECUTE_SELF "' />"       \
        "       <signal name='" G_PASTE_DAEMON_SIG_SHOW_HISTORY "' />"         \
        "       <signal name='" G_PASTE_DAEMON_SIG_TRACKING "'>"               \
        "           <arg type='b' direction='out' name='tracking-state' />"    \
        "       </signal>"                                                     \
        "       <signal name='" G_PASTE_DAEMON_SIG_UPDATE "'>"                 \
        "           <arg type='s' direction='out' name='action' />"            \
        "           <arg type='s' direction='out' name='target' />"            \
        "           <arg type='u' direction='out' name='index'  />"            \
        "       </signal>"                                                     \
        "       <property name='" G_PASTE_DAEMON_PROP_ACTIVE "'"               \
        "                 type='b' access='read' />"                           \
        "       <property name='" G_PASTE_DAEMON_PROP_VERSION "'"              \
        "                 type='s' access='read' />"                           \
        "   </interface>"                                                      \
        "</node>"

#define G_PASTE_SEARCH_PROVIDER_OBJECT_PATH    "/org/gnome/GPaste/SearchProvider"
#define G_PASTE_SEARCH_PROVIDER_INTERFACE_NAME "org.gnome.Shell.SearchProvider2"

#define G_PASTE_SEARCH_PROVIDER_GET_INITIAL_RESULT_SET   "GetInitialResultSet"
#define G_PASTE_SEARCH_PROVIDER_GET_SUBSEARCH_RESULT_SET "GetSubsearchResultSet"
#define G_PASTE_SEARCH_PROVIDER_GET_RESULT_METAS         "GetResultMetas"
#define G_PASTE_SEARCH_PROVIDER_ACTIVATE_RESULT          "ActivateResult"
#define G_PASTE_SEARCH_PROVIDER_LAUNCH_SEARCH            "LaunchSearch"

#define G_PASTE_SEARCH_PROVIDER_INTERFACE                                              \
        "<node>"                                                                       \
        "    <interface name='" G_PASTE_SEARCH_PROVIDER_INTERFACE_NAME "'>"            \
        "        <method name='" G_PASTE_SEARCH_PROVIDER_GET_INITIAL_RESULT_SET "'>"   \
        "            <arg type='as' name='terms' direction='in'    />"                 \
        "            <arg type='as' name='results' direction='out' />"                 \
        "        </method>"                                                            \
        "        <method name='" G_PASTE_SEARCH_PROVIDER_GET_SUBSEARCH_RESULT_SET "'>" \
        "            <arg type='as' name='previous_results' direction='in' />"         \
        "            <arg type='as' name='terms' direction='in'            />"         \
        "            <arg type='as' name='results' direction='out'         />"         \
        "        </method>"                                                            \
        "        <method name='" G_PASTE_SEARCH_PROVIDER_GET_RESULT_METAS "'>"         \
        "            <arg type='as' name='identifiers' direction='in' />"              \
        "            <arg type='aa{sv}' name='metas' direction='out'  />"              \
        "        </method>"                                                            \
        "        <method name='" G_PASTE_SEARCH_PROVIDER_ACTIVATE_RESULT "'>"          \
        "            <arg type='s' name='identifier' direction='in' />"                \
        "            <arg type='as' name='terms' direction='in'     />"                \
        "            <arg type='u' name='timestamp' direction='in'  />"                \
        "        </method>"                                                            \
        "        <method name='" G_PASTE_SEARCH_PROVIDER_LAUNCH_SEARCH "'>"            \
        "            <arg type='as' name='terms' direction='in'    />"                 \
        "            <arg type='u' name='timestamp' direction='in' />"                 \
        "        </method>"                                                            \
        "    </interface>"                                                             \
        "</node>"

G_END_DECLS

#endif /*__G_PASTE_GDBUS_DEFINES_H__*/
