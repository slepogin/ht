/* 
 *	HT Editor
 *	clipboard.cc - POSIX-specific (OS-)clipboard functions
 *
 *	Copyright (C) 1999-2004 Stefan Weyergraf (stefan@weyergraf.de)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <cstdio>
#include "io/sys.h"
#include "io/types.h"

bool sys_native_clipboard_write(const void *buf, int bufsize)
{
	return false;
}

int sys_native_clipboard_get_size()
{
	return 0;
}

int sys_native_clipboard_read(void *buf, int bufsize)
{
	return false;
}

const char *sys_native_clipboard_name()
{
	return NULL;
}
