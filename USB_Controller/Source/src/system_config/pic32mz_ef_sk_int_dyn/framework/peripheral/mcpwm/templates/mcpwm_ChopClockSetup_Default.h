/*******************************************************************************
  MCPWM Peripheral Library Template Implementation

  File Name:
    mcpwm_ChopClockSetup_Default.h

  Summary:
    MCPWM PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ChopClockSetup
    and its Variant : Default
    For following APIs :
        PLIB_MCPWM_ChopClockSetup
        PLIB_MCPWM_ExistsChopClockSetup

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _MCPWM_CHOPCLOCKSETUP_DEFAULT_H
#define _MCPWM_CHOPCLOCKSETUP_DEFAULT_H
#include "mcpwm_registers.h"

//******************************************************************************
/* Function :  MCPWM_ChopClockSetup_Default

  Summary:
    Implements Default variant of PLIB_MCPWM_ChopClockSetup 

  Description:
    This template implements the Default variant of the PLIB_MCPWM_ChopClockSetup function.
*/

PLIB_TEMPLATE void MCPWM_ChopClockSetup_Default( MCPWM_MODULE_ID index , uint16_t mcpwm_chop_clk_divider , MCPWM_CHOP_CLOCK_CONTROL mcpwm_chop_clk_control )
{
   volatile mcpwm_module_registers_t *module_regs = (mcpwm_module_registers_t *)index;
   module_regs->CHOP.CHOPCLK = mcpwm_chop_clk_divider;
   module_regs->CHOP.CHPCLKEN = mcpwm_chop_clk_control;
}


//******************************************************************************
/* Function :  MCPWM_ExistsChopClockSetup_Default

  Summary:
    Implements Default variant of PLIB_MCPWM_ExistsChopClockSetup

  Description:
    This template implements the Default variant of the PLIB_MCPWM_ExistsChopClockSetup function.
*/

#define PLIB_MCPWM_ExistsChopClockSetup PLIB_MCPWM_ExistsChopClockSetup
PLIB_TEMPLATE bool MCPWM_ExistsChopClockSetup_Default( MCPWM_MODULE_ID index )
{
    return true;
}


#endif /*_MCPWM_CHOPCLOCKSETUP_DEFAULT_H*/

/******************************************************************************
 End of File
*/

