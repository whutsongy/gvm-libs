/* OpenVAS Libraries
 * Copyright (C) 1998 Renaud Deraison
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _OPENVAS_COMM_H
#define _OPENVAS_COMM_H

#include "arglists.h"

int comm_init (int);
void comm_terminate (struct arglist *);
void comm_send_pluginlist (struct arglist *);
void comm_send_preferences (struct arglist *);
void comm_send_rules (struct arglist *);
void comm_wait_order (struct arglist *);
void comm_setup_plugins (struct arglist *, char *);
void client_handler ();
int comm_send_status (struct arglist *, char *, char *, int, int);

#endif