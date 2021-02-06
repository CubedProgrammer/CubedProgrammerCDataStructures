#ifndef __cplusplus
#ifndef Included_cpcds_def_all_h
#define Included_cpcds_def_all_h
#include<assert.h>
#include<complex.h>
#include<ctype.h>
#include<errno.h>
#include<fenv.h>
#include<float.h>
#include<inttypes.h>
#include<iso646.h>
#include<limits.h>
#include<locale.h>
#include<math.h>
#include<setjmp.h>
#include<signal.h>
#include<stdarg.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<tgmath.h>
#include<time.h>
#include<wchar.h>
#include<wctype.h>

#if __STDC_VERSION__ >= 201112L
#include<stdalign.h>
#include<stdatomic.h>
#include<stdnoreturn.h>
#include<threads.h>
#include<uchar.h>
#endif

#include"cppstring.h"
#include"cpcds_impl/cpcds_utils/comp_func.h"
#include"cpcds_impl/cpcds_utils/equals_func.h"
#include"cpcds_impl/cpcds_utils/hash_func.h"
#include"cpcds_impl/cpcds_utils/str_func.h"
#include"cpcds_deque.h"
#include"cpcds_list.h"
#include"cpcds_map.h"
#include"cpcds_priority_queue.h"
#include"cpcds_set.h"
#include"cpcds_unordered_map.h"
#include"cpcds_unordered_set.h"
#include"cpcds_vector.h"
#define CPCDS____NEW(__x__,__y__)(__x__=(__y__*)malloc(sizeof(__y__)))
#define CPCDS____NEWARRAY(__x__,__y__,__s__)(__x__=(__y__*)malloc(sizeof(__y__)*__s__))
#define cpcds_mk_ptr(__t__,__v__,__p__)do{__p__=(__t__*)malloc(sizeof(__t__));*__p__=__v__;}while(0)
deftypes_cpcds_deque
deftypes_cpcds_list
deftypes_cpcds_set
deftypes_cpcds_us
deftypes_cpcds_vector
#endif
#endif
