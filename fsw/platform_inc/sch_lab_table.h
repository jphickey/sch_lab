/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *  This file contains the schedule tables for the SCH Lab app.
 *  It is intended to go in the platform include directory so the SCH_LAB
 *  app source code does not have to be modified.
 */
#ifndef SCH_LAB_TABLE_H
#define SCH_LAB_TABLE_H

#include "cfe_sb_extern_typedefs.h" /* for CFE_SB_MsgId_t */
#include "cfe_msg_api_typedefs.h"   /* For CFE_MSG_FcnCode_t */
#include "cfe_msgids.h"

#include "sch_lab_eds_typedefs.h"

/*
** Defines
*/
#define SCH_TBL_DEFAULT_FILE "/cf/sch_lab_table.tbl"
#define SCH_MAX_MSG_WORDS    SCH_LAB_MAX_SCHEDULE_ENTRIES

/*
 * The EDS defines the table type name as "SchTbl" so it matches
 * the runtime table name, but the source code refers to the type
 * as SCH_LAB_ScheduleTable_t
 *
 * This discrepancy can be worked around with a typedef for now
 */
typedef SCH_LAB_SchTbl_t SCH_LAB_ScheduleTable_t;

#endif
