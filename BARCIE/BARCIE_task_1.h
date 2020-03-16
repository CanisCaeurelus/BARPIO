/**
 * Responsible: Bart Ciesielczyk
 *
 *
 * History log:
 * 2020.03.16   BarCie  Initial version
 */
#ifndef BARCIE_TASK_1_H
#define BARCIE_TASK_1_H


#include "../common/COMMON_interface.h"

/* every public function in your module should start with "MODULENAME_" prefix */

eErr_t BARCIE_setBit(int bit, unsigned int* reg);

eErr_t BARCIE_clearBit(int bit, unsigned int* reg);

eErr_t BARCIE_invertBit(int bit, unsigned int* reg);

#endif
