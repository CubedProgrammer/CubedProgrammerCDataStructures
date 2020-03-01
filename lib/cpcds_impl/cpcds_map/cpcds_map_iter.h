#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_MAP_ITER_H
#define INCLUDED_CPCDS_MAP_ITER_H
#define define_cpcds_miter(name,__k__,__v__)struct cpcds_miter_##name{cpcds_deque_cpcds_mkvpair_##name*cln;};typedef struct cpcds_miter_##name cpcds_miter_name;cpcds_map_iter_begin_##name(cpcds_map_##name*mp){cpcds_miter_##name*__it__;cpcds_mkvpair_##name*curr=mp->rt;while(curr!=NULL){cpcds_deque_push_cpcds_mkvpair_##name(*curr);curr=curr->lc;}return __it__;}void cpcds_miter_next_##name(cpcds_miter_##name*__it__){cpcds_mkvpair_##name*curr=cpcds_deque_get_back_cpcds_mkvpair_##name(__it__->cln)->rc;while(curr!=NULL){cpcds_deque_push_cpcds_mkvpair_##name(*curr);curr=curr->lc;}}cpcds_mkvpair_##name cpcds_miter_get_##name(cpcds_miter_##name*__it__){return cpcds_deque_get_back_cpcds_mkvpair_##name(__it__->cln);}
#define cpcds_miter_define(__k__,__v__)define_cpcds_miter(__k__##__##__v__)
#endif
#endif
