#ifndef __cplusplus
#ifndef Included_cpcds_unordered_map_h
#define Included_cpcds_unordered_map_h
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_unordered_map/cpcds_unordered_map_maker.h"
#include"cpcds_impl/cpcds_unordered_map/cpcds_unordered_map_iter.h"
#include"cppstring.h"
#include"cpcds_deque.h"
#define define_cpcds_um(name,__k__,__v__,efunc,hfunc)define_cpcds_umk(name,__k__,__v__,efunc,hfunc)define_cpcds_uiter(name,__k__,__v__)static inline cppstring cpcds_um_to_str_ptr_##name(cpcds_um_##name*um,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){cppstring ans=mk_empty_str();cppstring tmp=mk_empty_str();cpcds_umiter_##name tmpit;for(cpcds_umiter_##name __it__=cpcds_um_iter_begin_##name(um);!cpcds_um_iter_equal_##name(__it__,cpcds_um_iter_end_##name(um));cpcds_um_iter_next_##name(&__it__)){tmp=(*kstr)(cpcds_um_iter_get_##name(&__it__).key);str_combine(&ans,&tmp);cpcds_destr_str(tmp);tmp=mk_from_cstr(": ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);tmp=(*vstr)(cpcds_um_iter_get_##name(&__it__).val);str_combine(&ans,&tmp);cpcds_destr_str(tmp);tmpit=__it__;cpcds_um_iter_next_##name(&tmpit);if(!cpcds_um_iter_equal_##name(tmpit,cpcds_um_iter_end_##name(um))){tmp=mk_from_cstr(", ");str_combine(&ans,&tmp);cpcds_destr_str(tmp);}}tmp=mk_char_str('{');str_combine(&tmp,&ans);cpcds_destr_str(ans);ans=tmp;tmp=mk_char_str('}');str_combine(&ans,&tmp);cpcds_destr_str(tmp);return ans;}static inline cppstring cpcds_um_to_str_##name(cpcds_um_##name um,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){return cpcds_um_to_str_ptr_##name(&um,kstr,vstr);}typedef cpcds_um_##name*cpcds_um_##name##ptr;
#define cpcds_um_define(__k__,__v__,efunc,hfunc)define_cpcds_um(__k__##__##__v__,__k__,__v__,efunc,hfunc)
#endif
#endif
