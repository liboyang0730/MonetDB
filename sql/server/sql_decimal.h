/*
 * The contents of this file are subject to the MonetDB Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.monetdb.org/Legal/MonetDBLicense
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is the MonetDB Database System.
 *
 * The Initial Developer of the Original Code is CWI.
 * Portions created by CWI are Copyright (C) 1997-July 2008 CWI.
 * Copyright August 2008-2015 MonetDB B.V.
 * All Rights Reserved.
 */

#ifndef _SQL_DECIMAL_H
#define _SQL_DECIMAL_H

#include "sql_mem.h"
#include "sql_types.h"
#include <gdk.h>

#ifdef HAVE_HGE
extern hge decimal_from_str(char *dec, char **end);
extern char * decimal_to_str(hge v, sql_subtype *t);
#else
extern lng decimal_from_str(char *dec, char **end);
extern char * decimal_to_str(lng v, sql_subtype *t);
#endif

#endif /* _SQL_DECIMAL_H */

