#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_MAP_H
#define INCLUDED_CPCDS_UNORDERED_MAP_H
#include<stdbool.h>
#include<stdlib.h>
#include"cpcds_impl/cpcds_unordered_map/cpcds_unordered_map_maker.h"
#include"cpcds_deque.h"
#define define_cpcds_uom(name,__k__,__v__)define_cpcds_umk(name,__k__,__v__)
#define cpcds_uom_define(__k__,__v__)define_cpcds_uom(__k__##__##__v__,__k__,__v__)
#endif
#endif
