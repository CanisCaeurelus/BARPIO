/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2017.12.05   ANDRZE  Initial version that complete tests
 */

#include <stdio.h>
#include "ANDRZE_task_1.h"

/* Every public function in your module should start with   "MODULENAME_"   prefix */
/* Every private function in your module should start with  "MODULENAME__"  prefix */

eErr_t ANDRZE_setBit(int bit, unsigned int* reg) {
    *reg = *reg | (1 << bit);
    return ERROR_OK;
}

eErr_t ANDRZE_clearBit(int bit, unsigned int* reg) {
    return ERROR_NOT_IMPLEMENTED;
}

eErr_t ANDRZE_invertBit(int bit, unsigned int* reg) {
    return ERROR_NOT_IMPLEMENTED;
}