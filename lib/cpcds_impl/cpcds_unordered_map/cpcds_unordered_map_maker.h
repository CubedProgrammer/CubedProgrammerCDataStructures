#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_MAP_MAKER_H
#define INCLUDED_CPCDS_UNORDERED_MAP_MAKER_H
#define define_cpcds_umk(name,__k__,__v__)struct cpcds_kvpair_##name{__k__ key;__v__ val;};typedef struct cpcds_kvpair_##name cpcds_kvpair_##name;cpcds_list_define(cpcds_kvpair_##name)struct cpcds_uom_##name{};
#define cpcds_umk_define(__k__,__v__)define_cpcds_uom(__k__##__##__v__,__k__,__v__)
#endif
#endif
