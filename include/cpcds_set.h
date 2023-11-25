#ifndef __cplusplus
#ifndef Included_cpcds_set_h
#define Included_cpcds_set_h
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_set/cpcds_set_maker.h"
#include"cpcds_impl/cpcds_set/cpcds_set_iter.h"
#include"cppstring_func_decl.h"
#define define_cpcds_set(name,__t__)define_cpcds_smk(name,__t__)define_cpcds_siter(name,__t__)static inline cppstring cpcds_set_to_str_ptr_##name(const cpcds_set_##name*set,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_siter_##name __it__=cpcds_set_iter_begin_##name((cpcds_set_##name*)set);while(!cpcds_set_iter_equal_##name(__it__,cpcds_set_iter_end_##name((cpcds_set_##name*)set))){tmp=str(cpcds_set_iter_get_##name(&__it__));str_combine(&ans,&tmp);cpcds_destr_str(tmp);cpcds_set_iter_next_##name(&__it__);if(!cpcds_set_iter_equal_##name(__it__,cpcds_set_iter_end_##name((cpcds_set_##name*)set))){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('{');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str('}');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}static inline cppstring cpcds_set_to_str_##name(cpcds_set_##name set,cppstring(*str)(__t__)){return cpcds_set_to_str_ptr_##name(&set,str);}typedef cpcds_set_##name*cpcds_set_##name##ptr;
#define cpcds_set_define(__t__)define_cpcds_set(__t__,__t__)
#define deftypes_cpcds_set define_cpcds_map(char__vptr,char,void*,cpcds_compar_c)define_cpcds_map(short__vptr,short,void*,cpcds_compar_s)define_cpcds_map(int__vptr,int,void*,cpcds_compar_i)define_cpcds_map(long__vptr,long,void*,cpcds_compar_l)define_cpcds_map(float__vptr,float,void*,cpcds_compar_f)define_cpcds_map(double__vptr,double,void*,cpcds_compar_d)define_cpcds_map(uc__vptr,unsigned char,void*,cpcds_compar_uc)define_cpcds_map(us__vptr,unsigned short,void*,cpcds_compar_us)define_cpcds_map(ui__vptr,unsigned,void*,cpcds_compar_ui)define_cpcds_map(ul__vptr,unsigned long,void*,cpcds_compar_ul)define_cpcds_map(ll__vptr,long long,void*,cpcds_compar_ll)define_cpcds_map(ull__vptr,unsigned long long,void*,cpcds_compar_ull)cpcds_set_define(char)cpcds_set_define(short)cpcds_set_define(int)cpcds_set_define(long)cpcds_set_define(float)cpcds_set_define(double)define_cpcds_set(uc,unsigned char)define_cpcds_set(us,unsigned short)define_cpcds_set(ui,unsigned)define_cpcds_set(ul,unsigned long)define_cpcds_set(ll,long long)define_cpcds_set(ull,unsigned long long)
#define defstruct_cpcds_set(s)define_cpcds_set(s,struct s)
#endif
#endif
