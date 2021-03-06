/*
 * Copyright (C) 2010 gonzoj
 *
 * Please check the CREDITS file for further information.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <util/types.h>

typedef enum {
	CLIENT_CONNECTED, CLIENT_DISCONNECTED
} client_status_t;

typedef enum {
	BNCS_CLIENT_ENGINE, MCP_CLIENT_ENGINE, D2GS_CLIENT_ENGINE
} client_engine_t;

extern bool cm_fatal_error;

void start_client_engine(client_engine_t, void *);

void stop_client_engine(client_engine_t);

void start_client_manager();

void stop_client_manager();

#endif /* CLIENT_H_ */
