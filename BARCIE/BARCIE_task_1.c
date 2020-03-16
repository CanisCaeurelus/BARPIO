/**
 * Responsible: Bar Ciesielczyk
 *
 *
 * History log:
 * 2020.03.16   BarCie  Initial version that complete tests
 */

#include <stdio.h>
#include "BARCIE_task_1.h"

/* Every public function in your module should start with   "MODULENAME_"   prefix */
/* Every private function in your module should start with  "MODULENAME__"  prefix */

eErr_t BARCIE_setBit(int bit, unsigned int* reg) {
    *reg = *reg | (1 << bit);
    return ERROR_OK;
}

eErr_t BARCIE_clearBit(int bit, unsigned int* reg) {
    return ERROR_NOT_IMPLEMENTED;
}

eErr_t BARCIE_invertBit(int bit, unsigned int* reg) {
    return ERROR_NOT_IMPLEMENTED;
}
