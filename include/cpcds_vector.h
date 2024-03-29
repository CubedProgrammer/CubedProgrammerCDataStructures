#ifndef __cplusplus
#ifndef Included_cpcds_vector_h
#define Included_cpcds_vector_h
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_vector/cpcds_vector_maker.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_append.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_insert.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_util.h"
#include"cppstring_func_decl.h"
#define define_cpcds_vector(name,__t__)define_cpcds_vmk(name,__t__)define_cpcds_vappend(name,__t__)define_cpcds_vins(name,__t__)define_cpcds_vutil(name,__t__)static inline cppstring cpcds_vec_to_str_ptr_##name(const cpcds_vector_##name*vec,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp;for(__t__*__it__=vec->pointer;__it__!=vec->pointer+vec->size;++__it__){tmp=(*str)(*__it__);str_combine(&ans,&tmp);cpcds_destr_str(tmp);if(__it__!=vec->pointer+vec->size-1){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_from_cstr("[");str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_from_cstr("]");str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}static inline cppstring cpcds_vec_to_str_##name(cpcds_vector_##name vec,cppstring(*str)(__t__)){return cpcds_vec_to_str_ptr_##name(&vec,str);}typedef cpcds_vector_##name*cpcds_vector_##name##ptr;
#define cpcds_vector_define(__t__)define_cpcds_vector(__t__,__t__)
#define deftypes_cpcds_vector cpcds_vector_define(char)cpcds_vector_define(short)cpcds_vector_define(int)cpcds_vector_define(long)cpcds_vector_define(float)cpcds_vector_define(double)define_cpcds_vector(uc,unsigned char)define_cpcds_vector(us,unsigned short)define_cpcds_vector(ui,unsigned)define_cpcds_vector(ul,unsigned long)define_cpcds_vector(ll,long long)define_cpcds_vector(ull,unsigned long long)define_cpcds_vector(str,cppstring)
#define defstruct_cpcds_vector(s)define_cpcds_vector(s,struct s)
#endif
#endif
