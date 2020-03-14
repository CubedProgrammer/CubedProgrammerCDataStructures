#ifndef __cplsetplset
#ifndef INCLUDED_CPCDS_SET_H
#define INCLUDED_CPCDS_SET_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_set/cpcds_set_maker.h"
#include"cpcds_impl/cpcds_set/cpcds_set_iter.h"
#include"cppstring.h"
#define define_cpcds_set(name,__t__)define_cpcds_smk(name,__t__)define_cpcds_siter(name,__t__)cppstring cpcds_set_to_str_ptr_##name(cpcds_set_##name*set,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_siter_##name __it__=cpcds_set_iter_begin_##name(set);while(!cpcds_set_iter_equal_##name(__it__,cpcds_set_iter_end_##name(set))){tmp=str(cpcds_set_iter_get_##name(&__it__));str_combine(&ans,&tmp);cpcds_destr_str(tmp);cpcds_set_iter_next_##name(&__it__);if(!cpcds_set_iter_equal_##name(__it__,cpcds_set_iter_end_##name(set))){tmp=mk_from_cstr(",");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('{');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str('}');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}cppstring cpcds_set_to_str_##name(cpcds_set_##name set,cppstring(*str)(__t__)){return cpcds_set_to_str_ptr_##name(&set,str);}
#define cpcds_set_define(__t__)define_cpcds_set(__t__,__t__)
#define deftypes_cpcds_set cpcds_set_define(char)cpcds_set_define(short)cpcds_set_define(int)cpcds_set_define(long)cpcds_set_define(float)cpcds_set_define(double)define_cpcds_set(uc,unsigned char)define_cpcds_set(set,unsigned short)define_cpcds_set(ui,unsigned int)define_cpcds_set(ul,unsigned long)define_cpcds_set(ll,long long)define_cpcds_set(ull,unsigned long long)
#define defstruct_cpcds_set(s)define_cpcds_set(s,struct s)
#endif
#endif
