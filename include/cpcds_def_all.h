#ifndef __cplusplus
#ifndef Included_cpcds_def_all_h
#define Included_cpcds_def_all_h
#include<assert.h>
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
#include<stdint.h>
#include<stdio.h>
#include<string.h>
#include<tgmath.h>
#include<time.h>
#include<uchar.h>
#include<wchar.h>
#include<wctype.h>
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
#define CPCDS____NEW(x,y)x=(y*)malloc(sizeof(y))
#define CPCDS____NEWARRAY(x,y,size)x=(y*)malloc(sizeof(y)*size)
#define cpcds_mk_ptr(t,v,p)do{p=(t*)malloc(sizeof(t));*p=v;}while(0)
deftypes_cpcds_deque
deftypes_cpcds_list
deftypes_cpcds_set
deftypes_cpcds_us
deftypes_cpcds_vector
#endif
#endif
