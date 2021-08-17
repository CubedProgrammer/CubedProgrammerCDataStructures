#ifndef __cplusplus
#ifndef Included_cpcds_unordered_set_h
#define Included_cpcds_unordered_set_h
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_unordered_set/cpcds_unordered_set_maker.h"
#include"cpcds_impl/cpcds_unordered_set/cpcds_unordered_set_iter.h"
#include"cppstring.h"
#define define_cpcds_us(name,__t__)define_cpcds_usmk(name,__t__)define_cpcds_usiter(name,__t__)static inline cppstring cpcds_us_to_str_ptr_##name(const cpcds_us_##name*us,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_usiter_##name __it__=cpcds_us_iter_begin_##name((cpcds_us_##name*)us);while(!cpcds_us_iter_equal_##name(__it__,cpcds_us_iter_end_##name((cpcds_us_##name*)us))){tmp=str(cpcds_us_iter_get_##name(&__it__));str_combine(&ans,&tmp);cpcds_destr_str(tmp);cpcds_us_iter_next_##name(&__it__);if(!cpcds_us_iter_equal_##name(__it__,cpcds_us_iter_end_##name((cpcds_us_##name*)us))){tmp=mk_from_cstr(",");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('{');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str('}');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}static inline cppstring cpcds_us_to_str_##name(cpcds_us_##name us,cppstring(*str)(__t__)){return cpcds_us_to_str_ptr_##name(&us,str);}typedef cpcds_us_##name*cpcds_us_##name##ptr;
#define cpcds_us_define(__t__)define_cpcds_us(__t__,__t__)
#define deftypes_cpcds_us define_cpcds_um(char__vptr,char,void*,cpcds_equals_char,cpcds_hash_char)define_cpcds_um(short__vptr,short,void*,cpcds_equals_short,cpcds_hash_short)define_cpcds_um(int__vptr,int,void*,cpcds_equals_int,cpcds_hash_int)define_cpcds_um(long__vptr,long,void*,cpcds_equals_long,cpcds_hash_long)define_cpcds_um(float__vptr,float,void*,cpcds_equals_float,cpcds_hash_float)define_cpcds_um(double__vptr,double,void*,cpcds_equals_double,cpcds_hash_double)define_cpcds_um(uc__vptr,unsigned char,void*,cpcds_equals_uc,cpcds_hash_uc)define_cpcds_um(us__vptr,unsigned short,void*,cpcds_equals_us,cpcds_hash_us)define_cpcds_um(ui__vptr,unsigned,void*,cpcds_equals_ui,cpcds_hash_ui)define_cpcds_um(ul__vptr,unsigned long,void*,cpcds_equals_ul,cpcds_hash_ul)define_cpcds_um(ll__vptr,long long,void*,cpcds_equals_ll,cpcds_hash_ll)define_cpcds_um(ull__vptr,unsigned long long,void*,cpcds_equals_ull,cpcds_hash_ull)cpcds_us_define(char)cpcds_us_define(short)cpcds_us_define(int)cpcds_us_define(long)cpcds_us_define(float)cpcds_us_define(double)define_cpcds_us(uc,unsigned char)define_cpcds_us(us,unsigned short)define_cpcds_us(ui,unsigned)define_cpcds_us(ul,unsigned long)define_cpcds_us(ll,long long)define_cpcds_us(ull,unsigned long long)
#define defstruct_cpcds_us(s)define_cpcds_us(s,struct s)
#endif
#endif
