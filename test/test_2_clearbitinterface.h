/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2020.03.16   PioCie  Initial version
 */

#ifndef TEST_2_CLEAR_BIT_INTERFACE_H
#define TEST_2_CLEAR_BIT_INTERFACE_H

#include "../common/COMMON_interface.h"

#include "./tests.h"


#define TEST_2__CLEAR_BIT_INTERFACE(MODULE_PREFIX) TEST_2_clearBitInterface( \
    #MODULE_PREFIX,           \
    MODULE_PREFIX##_clearBit  \
    )


void TEST_2_clearBitInterface(
    char* module_name,
    eErr_t (*clearBit)(int bit, unsigned int* reg)
    );

#endif