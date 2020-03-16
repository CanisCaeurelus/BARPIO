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
    eErr_t (*setBit)(int bit, unsigned int* reg),
    eErr_t (*clearBit)(int bit, unsigned int* reg),
    eErr_t (*invertBit)(int bit, unsigned int* reg)
    ) {
        START_TEST(1);
        unsigned int v = 0;
        
        ASSERT( setBit(1, &v),     ERROR_OK, "" );
        ASSERT( v, 2, "" );
        ASSERT( clearBit(0, &v),   ERROR_NOT_IMPLEMENTED, "" );
        ASSERT( invertBit(0, &v),  ERROR_NOT_IMPLEMENTED, "" );       
        
        
        STOP_TEST;
    }
