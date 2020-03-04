#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_PRIORITY_QUEUE_MAKER_H
#define INCLUDED_CPCDS_PRIORITY_QUEUE_MAKER_H
#define define_cpcds_pqmk(name,__t__,compar)define_cpcds_vmk(pq##compar##name,__t__)define_cpcds_vappend(pq##compar##name,__t__)struct cpcds_pq_##name{struct cpcds_vector_pq##compar##name*bank;};typedef struct cpcds_pq_##name cpcds_pq_##name;void cpcds_destr_pq_##name(cpcds_pq_##name*pq){cpcds_vec_destr_pq##compar##name(pq->bank);}
#define cpcds_pqmk_define(__t__,compar)define_cpcds_pqmk(__t__,__t__,compar)
#endif
#endif
