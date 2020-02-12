#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_MAP_MAKER_H
#define INCLUDED_CPCDS_UNORDERED_MAP_MAKER_H
#define __CPCDS_DEFAULT_UMR 1000
#define define_cpcds_umk(name,__k__,__v__)struct cpcds_kvpair_##name{__k__ key;__v__ val;};typedef struct cpcds_kvpair_##name cpcds_kvpair_##name;cpcds_deque_define(cpcds_kvpair_##name)struct cpcds_um_##name{cpcds_deque_cpcds_kvpair_##name*ens;size_t room;};typedef struct cpcds_um_##name cpcds_um_##name;cpcds_um_##name cpcds_mk_um_room_##name(size_t rm){cpcds_um_##name um;um.room=rm;um.ens=(cpcds_deque_cpcds_kvpair_##name*)malloc(rm*sizeof(cpcds_deque_cpcds_kvpair_##name));return um;}cpcds_kvpair_##name cpcds_mk_um_empty_##name(){return cpcds_mk_um_room_##name(__CPCDS_DEFAULT_UMR);}
#define cpcds_umk_define(__k__,__v__)define_cpcds_uom(__k__##__##__v__,__k__,__v__)
#endif
#endif
