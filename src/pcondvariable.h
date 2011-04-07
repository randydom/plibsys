/* 
 * 07.04.2011
 * Copyright (C) 2010-2011 Alexander Saprykin <xelfium@gmail.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
 */

#if !defined (__PLIB_H_INSIDE__) && !defined (PLIB_COMPILATION)
#  error "Header files shouldn't be included directly, consider using <plib.h> instead."
#endif

#ifndef __PCONDVARIABLE_H__
#define __PCONDVARIABLE_H__

#include <pmacros.h>
#include <ptypes.h>
#include <pmutex.h>

P_BEGIN_DECLS

typedef struct _PCondVariable PCondVariable;

P_LIB_API PCondVariable *	p_cond_variable_new		(void);
P_LIB_API void			p_cond_variable_free		(PCondVariable *cond);
P_LIB_API pint			p_cond_variable_wait		(PCondVariable *cond, PMutex *mutex);
P_LIB_API pint			p_cond_variable_signal		(PCondVariable *cond);
P_LIB_API pint			p_cond_variable_broadcast	(PCondVariable *cond);

P_END_DECLS

#endif /* __PCONDVARIABLE_H__ */

