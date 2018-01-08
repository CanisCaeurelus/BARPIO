/**
 * Responsible: Piotr Ciesielczyk
 *
 *
 * History log:
 * 2018.01.08   PioCie initial version
 */
#ifndef COMMON_INTERFACE_H
#define COMMON_INTERFACE_H

typedef enum eErr
{
    ERROR_OK=0,
    ERROR_NULL_POINTER_ARG, // Null pointer provided as function argument
    ERROR_INVALID_ARG,      // Invalid argument provided
    ERROR_MALLOC,           // Memory allocation error
    ERROR_NOT_IMPLEMENTED   // Functionality not implemented yet
} eErr_t;

#endif
