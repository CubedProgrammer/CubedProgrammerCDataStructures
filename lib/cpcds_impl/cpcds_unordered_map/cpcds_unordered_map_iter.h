#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_MAP_ITER_H
#define INCLUDED_CPCDS_UNORDERED_MAP_ITER_H
#define define_cpcds_uiter(name,__k__,__v__)struct cpcds_umiter_##name{cpcds_deque_cpcds_kvpair_##name*dq;size_t pos;};typedef struct cpcds_umiter_##name cpcds_umiter_##name;cpcds_umiter_##name cpcds_mk_um_iter_##name(cpcds_deque_cpcds_kvpair_##name*dq,size_t pos){cpcds_umiter_##name __it__;__it__.dq=dq;__it__.pos=pos;return __it__;}void cpcds_um_iter_next_##name(cpcds_umiter_##name*__it__){cpcds_deque_append_cpcds_kvpair_##name(__it__->dq,cpcds_deque_pop_front_cpcds_kvpair_##name(__it__->dq));++__it__->pos;while(__it__->pos==__it__->dq->size){__it__->pos=0;++__it__->dq;}}cpcds_kvpair_##name cpcds_um_iter_get_##name(cpcds_umiter_##name*__it__){return cpcds_deque_get_front_cpcds_kvpair_##name(__it__->dq);}bool cpcds_um_iter_equal_##name(cpcds_umiter_##name f,cpcds_umiter_##name s){return f.dq==s.dq&&f.pos==s.pos;}cpcds_umiter_##name cpcds_um_iter_begin_##name(cpcds_um_##name*um){cpcds_deque_cpcds_kvpair_##name*dq=um->ens;while(dq->size==0){++dq;}return cpcds_mk_um_iter_##name(dq,0);}cpcds_umiter_##name cpcds_um_iter_end_##name(cpcds_um_##name*um){return cpcds_mk_um_iter_##name(um->ens+um->room,0);}
#define cpcds_uiter_define(__k__,__v__)define_cpcds_uiter(__k__##__##__v__,__k__,__v__)
#endif
#endif
