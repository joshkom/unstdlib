#ifndef UNSTDLIB_UNSTDTYPES_H
#define UNSTDLIB_UNSTDTYPES_H

#include "unstdinttypes.h"

#define unstdtypes_type_mallocM(type) ((type *)malloc(sizeof(type)))
#define unstdtypes_type_callocM(type) ((type *)calloc(1, sizeof(type)))

#endif //UNSTDLIB_UNSTDTYPES_H
