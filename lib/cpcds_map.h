#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_MAP_H
#define INCLUDED_CPCDS_MAP_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_utils/comp_func.h"
#include"cpcds_impl/cpcds_map/cpcds_map_maker.h"
#include"cpcds_impl/cpcds_map/cpcds_map_insert.h"
#include"cpcds_impl/cpcds_map/cpcds_map_iter.h"
#include"cppstring.h"
#define define_cpcds_map(name,__k__,__v__,compar)define_cpcds_mmk(name,__k__,__v__,compar)define_cpcds_mins(name,__k__,__v__,compar)define_cpcds_miter(name,__k__,__v__)cppstring cpcds_map_to_str_ptr_##name(cpcds_map_##name*mp,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_miter_##name __it__=cpcds_map_iter_begin_##name(mp);__k__ key;__v__ val;while(!cpcds_map_iter_equal_##name(__it__,cpcds_map_iter_end_##name(mp))){key=cpcds_map_iter_get_##name(&__it__).key;val=cpcds_map_iter_get_##name(&__it__).val;tmp=kstr(key);str_combine(&ans,&tmp);cpcds_destr_str(tmp);tmp=mk_from_cstr(": ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);tmp=vstr(val);str_combine(&ans,&tmp);cpcds_destr_str(tmp);cpcds_map_iter_next_##name(&__it__);if(!cpcds_map_iter_equal_##name(__it__,cpcds_map_iter_end_##name(mp))){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('[');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str(']');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}cppstring cpcds_map_to_str_##name(cpcds_map_##name mp,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){return cpcds_map_to_str_ptr_##name(&mp,kstr,vstr);}
#define cpcds_map_define(__k__,__v__,compar)define_cpcds_map(__k__##__##__v__,__k__,__v__,compar)
#endif
#endif
