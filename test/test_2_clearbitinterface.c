/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2020.16.03   PioCie  Initial version - interface test
 */
#include "test_2_clearbitinterface.h"

void TEST_2_clearBitInterface(
    char * module_name,
    eErr_t (*clearBit)(int bit, unsigned int* reg)
    ) {
        START_TEST(2);
        unsigned int v = 0xff;
        
        ASSERT( clearBit(0, &v),   0xfe, "" );     
    
        STOP_TEST;
    }
