/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2018.01.08   PioCie  Initial version
 */

#ifndef TEST_1_SET_BIT_INTERFACE_H
#define TEST_1_SET_BIT_INTERFACE_H

#include "../common/COMMON_interface.h"

#include "./tests.h"


#define TEST_1__SET_BIT_INTERFACE(MODULE_PREFIX) TEST_1_setBitInterface( \
    #MODULE_PREFIX,           \
    MODULE_PREFIX##_setBit,  \
    MODULE_PREFIX##_clearBit,  \
    MODULE_PREFIX##_invertBit \
    )


void TEST_1_setBitInterface(
    char* module_name,
    eErr_t (*setBit)(int bit, int* reg),
    eErr_t (*clearBit)(int bit, int* reg),
    eErr_t (*invertBit)(int bit, int* reg)
    );

#endif