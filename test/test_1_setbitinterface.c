/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2018.01.08   PioCie  Initial version - interface test
 */
#include "test_1_setbitinterface.h"

void TEST_1_setBitInterface(
    char * module_name,
    eErr_t (*setBit)(int bit, int* reg),
    eErr_t (*clearBit)(int bit, int* reg),
    eErr_t (*invertBit)(int bit, int* reg)
    ) {
        START_TEST(1);
        int v = 0;
        
        ASSERT( setBit(0, &v),     ERROR_NOT_IMPLEMENTED, "" );
        ASSERT( clearBit(0, &v),   ERROR_NOT_IMPLEMENTED, "" );
        ASSERT( invertBit(0, &v),  ERROR_NOT_IMPLEMENTED, "" );       
        
        
        STOP_TEST;
    }
