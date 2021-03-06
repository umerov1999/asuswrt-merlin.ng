/*
   Copyright (c) 2015 Broadcom
   All Rights Reserved

    <:label-BRCM:2015:DUAL/GPL:standard

    Unless you and Broadcom execute a separate written software license
    agreement governing use of this software, this software is licensed
    to you under the terms of the GNU General Public License version 2
    (the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
    with the following added to such license:

       As a special exception, the copyright holders of this software give
       you permission to link this software with independent modules, and
       to copy and distribute the resulting executable under terms of your
       choice, provided that you also meet, for each linked independent
       module, the terms and conditions of the license of that module.
       An independent module is a module which is not derived from this
       software.  The special exception does not apply to any modifications
       of the software.

    Not withstanding the above, under no circumstances may you combine
    this software in any way with any other Broadcom software provided
    under a license other than the GPL, without Broadcom's express prior
    written consent.

:>
*/

#include "ru.h"

/******************************************************************************
 * Register: NATC_CONTROL_STATUS
 ******************************************************************************/
const ru_reg_rec NATC_CONTROL_STATUS_REG = 
{
    "CONTROL_STATUS",
#if RU_INCLUDE_DESC
    "NAT Cache Control and Status Register",
    "NAT Cache Control and Status Register.",
#endif
    NATC_CONTROL_STATUS_REG_OFFSET,
    0,
    0,
    1043,
};

/******************************************************************************
 * Register: NATC_CONTROL_STATUS2
 ******************************************************************************/
const ru_reg_rec NATC_CONTROL_STATUS2_REG = 
{
    "CONTROL_STATUS2",
#if RU_INCLUDE_DESC
    "NAT Cache Control and Status Register2",
    "NAT Cache Control and Status Register",
#endif
    NATC_CONTROL_STATUS2_REG_OFFSET,
    0,
    0,
    1044,
};

/******************************************************************************
 * Register: NATC_TABLE_CONTROL
 ******************************************************************************/
const ru_reg_rec NATC_TABLE_CONTROL_REG = 
{
    "TABLE_CONTROL",
#if RU_INCLUDE_DESC
    "NAT Cache Table Control Register",
    "NAT Cache Table Control Register",
#endif
    NATC_TABLE_CONTROL_REG_OFFSET,
    0,
    0,
    1045,
};

/******************************************************************************
 * Register: NATC_STAT_COUNTER_CONTROL_0
 ******************************************************************************/
const ru_reg_rec NATC_STAT_COUNTER_CONTROL_0_REG = 
{
    "STAT_COUNTER_CONTROL_0",
#if RU_INCLUDE_DESC
    "NAT cache stat counter control register 0",
    "NAT cache stat counter control register 0",
#endif
    NATC_STAT_COUNTER_CONTROL_0_REG_OFFSET,
    0,
    0,
    1046,
};

/******************************************************************************
 * Register: NATC_STAT_COUNTER_CONTROL_1
 ******************************************************************************/
const ru_reg_rec NATC_STAT_COUNTER_CONTROL_1_REG = 
{
    "STAT_COUNTER_CONTROL_1",
#if RU_INCLUDE_DESC
    "NAT cache stat counter control register 1",
    "NAT cache stat counter control register 1",
#endif
    NATC_STAT_COUNTER_CONTROL_1_REG_OFFSET,
    0,
    0,
    1047,
};

/******************************************************************************
 * Block: NATC
 ******************************************************************************/
static const ru_reg_rec *NATC_REGS[] =
{
    &NATC_CONTROL_STATUS_REG,
    &NATC_CONTROL_STATUS2_REG,
    &NATC_TABLE_CONTROL_REG,
    &NATC_STAT_COUNTER_CONTROL_0_REG,
    &NATC_STAT_COUNTER_CONTROL_1_REG,
};

unsigned long NATC_ADDRS[] =
{
    0x82e50000,
};

const ru_block_rec NATC_BLOCK = 
{
    "NATC",
    NATC_ADDRS,
    1,
    5,
    NATC_REGS
};

/* End of file XRDP_NATC.c */
