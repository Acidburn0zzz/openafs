/*
 * Copyright 2000, International Business Machines Corporation and others.
 * All Rights Reserved.
 *
 * This software has been released under the terms of the IBM Public
 * License.  For details, see the LICENSE file in the top-level source
 * directory or online at http://www.openafs.org/dl/license10.html
 */

#define PT_EXIT(evalue)                                 \
        {                                               \
           osi_audit (PTS_ExitEvent, evalue, AUD_END); \
	   exit(evalue);                                \
	}
