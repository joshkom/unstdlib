#ifndef UNSTDLIB_UNSTDTYPES_H
#define UNSTDLIB_UNSTDTYPES_H

#include "unstdinttypes.h"

#define unstdtypes_type_mallocM(type) ((type *)malloc(sizeof(type)))
#define unstdtypes_type_callocM(type) ((type *)calloc(1, sizeof(type)))

#define unstdtypes_deref_u8M(p_arg)   (*(const u8t *)(p_arg))
#define unstdtypes_deref_s8M(p_arg)   (*(const s8t *)(p_arg))
#define unstdtypes_deref_u16M(p_arg)  (*(const u16t *)(p_arg))
#define unstdtypes_deref_s16M(p_arg)  (*(const s16t *)(p_arg))
#define unstdtypes_deref_u32M(p_arg)  (*(const u32t *)(p_arg))
#define unstdtypes_deref_s32M(p_arg)  (*(const s32t *)(p_arg))
#define unstdtypes_deref_u64M(p_arg)  (*(const u64t *)(p_arg))
#define unstdtypes_deref_s64M(p_arg)  (*(const s64t *)(p_arg))
#define unstdtypes_deref_uptrM(p_arg) (*(const uptrt *)(p_arg))
#define unstdtypes_deref_sptrM(p_arg) (*(const sptrt *)(p_arg))

#endif //UNSTDLIB_UNSTDTYPES_H
