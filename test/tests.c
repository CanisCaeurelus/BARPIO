/**
 * Responsible: Piotr Ciesielczyk
 *
 * History log:
 * 2018.01.08   PioCie  Initial version
 */

#include <stdio.h>
#include "../common/COMMON_interface.h"
#include "../PIOCIE/PIOCIE_interface.h"
//#include "../BARCIE/BARCIE_interface.h"
#include "test_1_setbitinterface.h"
#include "test_2_clearbitinterface.h"
#include "tests.h"

int main() {
    printf("Run tests\n");
    printf("\n--------- TASK 1 ---------\n");
    TEST_1__SET_BIT_INTERFACE(PIOCIE);
    //TEST_1__SET_BIT_INTERFACE(BARCIE);

    TEST_2__CLEAR_BIT_INTERFACE(PIOCIE);

    return 0;
}
