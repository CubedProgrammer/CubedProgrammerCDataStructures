#ifndef __cplusplus
#ifndef Included_cpcds_list_h
#define Included_cpcds_list_h
#include<stdlib.h>
#include"cpcds_impl/cpcds_list/cpcds_list_maker.h"
#include"cpcds_impl/cpcds_list/cpcds_list_insert.h"
#include"cpcds_impl/cpcds_list/cpcds_list_iter.h"
#include"cpcds_impl/cpcds_list/cpcds_list_util.h"
#include"cppstring.h"
#define define_cpcds_list(name,__t__)define_cpcds_lmk(name,__t__)define_cpcds_lins(name,__t__)define_cpcds_lutil(name,__t__)define_cpcds_liter(name,__t__)static inline cppstring cpcds_lis_to_str_ptr_##name(const cpcds_list_##name*lis,cppstring(*str)(__t__)){cpcds_lnode_##name*node=lis->head;cppstring ans=mk_empty_str();cppstring tmp;while(node!=NULL){tmp=(*str)(node->v);str_combine(&ans,&tmp);cpcds_destr_str(tmp);if(node!=lis->tail){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}node=node->next;}tmp=mk_from_cstr("[");str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_from_cstr("]");str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}static inline cppstring cpcds_lis_to_str_##name(cpcds_list_##name lis,cppstring(*str)(__t__)){return cpcds_lis_to_str_ptr_##name(&lis,str);}typedef cpcds_list_##name*cpcds_list_##name##ptr;
#define cpcds_list_define(__t__)define_cpcds_list(__t__,__t__)
#define deftypes_cpcds_list cpcds_list_define(char)cpcds_list_define(short)cpcds_list_define(int)cpcds_list_define(long)cpcds_list_define(float)cpcds_list_define(double)define_cpcds_list(uc,unsigned char)define_cpcds_list(us,unsigned short)define_cpcds_list(ui,unsigned int)define_cpcds_list(ul,unsigned long)define_cpcds_list(ll,long long)define_cpcds_list(ull,unsigned long long)define_cpcds_list(str,cppstring)
#define defstruct_cpcds_list(s)define_cpcds_list(s,struct s)
#endif
#endif
