#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_PRIORITY_QUEUE_PUSH_H
#define INCLUDED_CPCDS_PRIORITY_QUEUE_PUSH_H
#define define_cpcds_pqpush(name,__t__,compar)static inline void cpcds_pq_push_##name(cpcds_pq_##name*pq,__t__ val){cpcds_vec_append_single_##name(pq->bnk,val);cpcds_pq_sft_up_##name(pq->bnk->pointer,pq->size,pq->size+1);++pq->size;}static inline void cpcds_pq_pop_##name(cpcds_pq_##name*pq){cpcds_vec_set_single_##name(pq->bnk,0,cpcds_vec_pop_end_##name(pq->bnk));cpcds_pq_sft_down_##name(pq->bnk->pointer,0,pq->bnk->size);--pq->size;}
#define cpcds_pqpush_define(__t__,compar)define_cpcds_pqpush(__t__,__t__,compar)
#endif
#endif
