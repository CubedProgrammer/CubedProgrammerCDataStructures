#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_DEQUE_H
#define INCLUDED_CPCDS_DEQUE_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_deque/cpcds_deque_maker.h"
#include"cpcds_impl/cpcds_deque/cpcds_deque_append.h"
#include"cpcds_impl/cpcds_deque/cpcds_deque_aliases.h"
#define define_cpcds_deque(name,__t__)define_cpcds_dqmk(name,__t__)define_cpcds_dqappend(name,__t__)typedef cpcds_deque_##name*cpcds_deque_##name##p;
#define cpcds_deque_define(__t__)define_cpcds_deque(__t__,__t__)
#define deftypes_cpcds_deque cpcds_deque_define(char)cpcds_deque_define(short)cpcds_deque_define(int)cpcds_deque_define(long)cpcds_deque_define(float)cpcds_deque_define(double)define_cpcds_deque(uc,unsigned char)define_cpcds_deque(us,unsigned short)define_cpcds_deque(ui,unsigned int)define_cpcds_deque(ul,unsigned long)define_cpcds_deque(ll,long long)define_cpcds_deque(ull,unsigned long long)define_cpcds_deque(str,cppstring)
#define defstruct_cpcds_deque(s)define_cpcds_deque(s,struct s)
#endif
#endif
