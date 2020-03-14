#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_SET_H
#define INCLUDED_CPCDS_UNORDERED_SET_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_unordered_set/cpcds_unordered_set_maker.h"
#include"cpcds_impl/cpcds_unordered_set/cpcds_unordered_set_iter.h"
#include"cppstring.h"
#define define_cpcds_us(name,__t__)define_cpcds_usmk(name,__t__)define_cpcds_usiter(name,__t__)cppstring cpcds_us_to_str_ptr_##name(cpcds_us_##name*us,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_usiter_##name __it__=cpcds_us_iter_begin_##name(us);while(!cpcds_us_iter_equal_##name(__it__,cpcds_us_iter_end_##name(us))){tmp=str(cpcds_us_iter_get_##name(&__it__));str_combine(&ans,&tmp);cpcds_destr_str(tmp);cpcds_us_iter_next_##name(&__it__);if(!cpcds_us_iter_equal_##name(__it__,cpcds_us_iter_end_##name(us))){tmp=mk_from_cstr(",");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('{');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str('}');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}cppstring cpcds_us_to_str_##name(cpcds_us_##name us,cppstring(*str)(__t__)){return cpcds_us_to_str_ptr_##name(&us,str);}
#define cpcds_us_define(__t__)define_cpcds_us(__t__,__t__)
#define deftypes_cpcds_us cpcds_us_define(char)cpcds_us_define(short)cpcds_us_define(int)cpcds_us_define(long)cpcds_us_define(float)cpcds_us_define(double)define_cpcds_us(uc,unsigned char)define_cpcds_us(us,unsigned short)define_cpcds_us(ui,unsigned int)define_cpcds_us(ul,unsigned long)define_cpcds_us(ll,long long)define_cpcds_us(ull,unsigned long long)
#define defstruct_cpcds_us(s)define_cpcds_us(s,struct s)
#endif
#endif
