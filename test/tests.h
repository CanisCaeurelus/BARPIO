/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2018.01.08   PioCie  Initial version
 */
#include <stdio.h>


#define _ASSERT(actual, expected) (actual == expected ? 1 : 0)


#define ASSERT(actual, expected, message)                                                               \
    this_test_ok =  _ASSERT(actual, expected);                                                          \
    ok &= this_test_ok;                                                                                 \
    if( ! this_test_ok){                                                                                \
        printf("%s: fail (file:%s,  line:%d, message:%s\n", module_name, __FILE__, __LINE__, message);  \
    }


#define START_TEST(TEST_NO)     \
    int ok = 1;                 \
    int test_number = TEST_NO;  \
    int this_test_ok;
    

#define STOP_TEST                                                   \
    if(ok == 1) {                                                   \
        printf("%s - test %d: ok\n", module_name, test_number);     \
    }                                                               \
    else{                                                           \
        printf("%s - test %d: failed\n", module_name, test_number); \
    }
    
