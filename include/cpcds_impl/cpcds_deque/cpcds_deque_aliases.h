#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_DEQUE_ALIASES_H
#define INCLUDED_CPCDS_DEQUE_ALIASES_H
#define define_cpcds_dqalias(name,__t__)static inline __t__ cpcds_stack_top_##name(cpcds_deque_##name*dq){return cpcds_deque_get_back_##name(dq);}static inline __t__ cpcds_queue_front_##name(cpcds_deque_##name*dq){return cpcds_deque_get_front_##name(dq);}static inline void cpcds_deque_push_##name(cpcds_deque_##name*dq,__t__ v){cpcds_deque_append_##name(dq,v);}static inline __t__ cpcds_stack_pop_##name(cpcds_deque_##name*dq){return cpcds_deque_pop_back_##name(dq);}static inline __t__ cpcds_queue_poll_##name(cpcds_deque_##name*dq){return cpcds_deque_pop_front_##name(dq);}
#define cpcds_dqalias_define(__t__)define_cpcds_dqalias(__t__,__t__)
#endif
#endif
