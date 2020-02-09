#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_VECTOR_H
#define INCLUDED_CPCDS_VECTOR_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_vector/cpcds_vector_maker.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_append.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_insert.h"
#include"cpcds_impl/cpcds_vector/cpcds_vector_util.h"
#include"cppstring.h"
#define define_cpcds_vector(name,__t__)define_cpcds_vmk(name,__t__)define_cpcds_vappend(name,__t__)define_cpcds_vins(name,__t__)define_cpcds_vutil(name,__t__)cppstring cpcds_vec_to_str_ptr_##name(cpcds_vector_##name*vec,cppstring(*str)(__t__)){cppstring ans=mk_empty_str();cppstring tmp;for(__t__*__it__=vec->pointer;__it__!=vec->pointer+vec->size;++__it__){tmp=(*str)(*__it__);str_combine(&ans,&tmp);destroy(tmp);if(__it__!=vec->pointer+vec->size-1){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);destroy(tmp);}}tmp=mk_from_cstr("[");str_combine(&tmp,&ans);destroy(ans);ans=tmp;tmp=mk_from_cstr("]");str_combine(&ans,&tmp);destroy(tmp);return ans;}cppstring cpcds_vec_to_str_##name(cpcds_vector_##name vec,cppstring(*str)(__t__)){return cpcds_vec_to_str_ptr_##name(&vec,str);}typedef cpcds_vector_##name*cpcds_vector_##name##p;
#define cpcds_vector_define(__t__)define_cpcds_vector(__t__,__t__)
#define deftypess_cpcds_vector cpcds_vector_define(char)cpcds_vector_define(short)cpcds_vector_define(int)cpcds_vector_define(long)cpcds_vector_define(float)cpcds_vector_define(double)define_cpcds_da(uc,unsigned char)define_cpcds_da(us,unsigned short)define_cpcds_da(ui,unsigned int)define_cpcds_da(ul,unsigned long)define_cpcds_da(ll,long long)define_cpcds_da(ull,unsigned long long)define_cpcds_da(str,cppstring)
#define defstruct_cpcds_vector(s)define_cpcds_vector(s,struct s)
#endif
#endif
