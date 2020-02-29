#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_MAP_H
#define INCLUDED_CPCDS_MAP_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_map/cpcds_map_maker.h"
#include"cpcds_impl/cpcds_map/cpcds_map_insert.h"
#include"cppstring.h"
#define define_cpcds_map(name,__k__,__v__,compar)define_cpcds_mmk(name,__k__,__v__,compar)define_cpcds_mins(name,__k__,__v__,compar)cppstring cpcds_map_to_str_ptr_##name(cpcds_map_##name*mp,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){}cppstring cpcds_map_to_str_##name(cpcds_map_##name mp,cppstring(*kstr)(__k__),cppstring(*vstr)(__v__)){return cpcds_map_to_str_ptr_##name(&mp,kstr,vstr);}
#define cpcds_map_define(__k__,__v__,compar)define_cpcds_map(__k__##__##__v__,__k__,__v__,compar)
#endif
#endif
