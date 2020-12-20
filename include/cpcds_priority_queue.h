#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_PRIORITY_QUEUE_H
#define INCLUDED_CPCDS_PRIORITY_QUEUE_H
#include<stdlib.h>
#include"cpcds_impl/cpcds_utils/comp_func.h"
#include"cpcds_impl/cpcds_priority_queue/cpcds_priority_queue_maker.h"
#include"cpcds_impl/cpcds_priority_queue/cpcds_priority_queue_push.h"
#define define_cpcds_pq(name,__t__,compar)define_cpcds_pqmk(name,__t__,compar)define_cpcds_pqpush(name,__t__,compar)typedef cpcds_pq_##name*cpcds_pq_##name##ptr;
#define cpcds_pq_define(__t__,compar)define_cpcds_pq(__t__,__t__,compar)
#define deftypes_cpcds_pq cpcds_pq_define(char,cpcds_compar_c)cpcds_pq_define(short,cpcds_compar_s)cpcds_pq_define(int,cpcds_compar_i)cpcds_pq_define(long,cpcds_compar_l)cpcds_pq_define(float,cpcds_compar_f)cpcds_pq_define(double,cpcds_compar_d)define_cpcds_pq(uc,unsigned char,cpcds_compar_uc)define_cpcds_pq(us,unsigned short,cpcds_compar_us)define_cpcds_pq(ui,unsigned int,cpcds_compar_ui)define_cpcds_pq(ul,unsigned long,cpcds_compar_ul)define_cpcds_pq(ll,long long,cpcds_compar_ll)define_cpcds_pq(ull,unsigned long long,cpcds_compar_ull)
#define defstruct_cpcds_pq(s)define_cpcds_pq(s,struct s)
#endif
#endif
