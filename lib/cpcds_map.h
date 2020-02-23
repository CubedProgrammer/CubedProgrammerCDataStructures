#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_MAP_H
#define INCLUDED_CPCDS_MAP_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_map/cpcds_map_maker.h"
#define define_cpcds_map(name,__k__,__v__,compar)define_cpcds_mmk(name,__k__,__v__,compar)
#define cpcds_map_define(__k__,__v__,compar)define_cpcds_map(__k__##__##__v__,__k__,__v__,compar)
#endif
#endif
