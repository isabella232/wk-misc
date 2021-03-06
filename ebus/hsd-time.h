/* hsd-time.c - Time functions for housed and housectl
 * Copyright (C) 2011 g10 Code GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HSD_TIME_H
#define HSD_TIME_H


#define INVALID_TIME ((uint16_t)(-1))

uint16_t timestr_to_ebustime (const char *string, char **endp);
char * ebustime_to_timestr (uint16_t ebustime);


#endif /*HSD_TIME_H*/
