#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_DEQUE_APPEND_H
#define INCLUDED_CPCDS_DEQUE_APPEND_H
#define define_cpcds_dqappend(name,__t__)void cpcds_deque_append_##name(cpcds_deque_##name*dq,__t__ v){}void cpcds_deque_prepend_##name(cpcds_deque_##name*dq,__t__ v){if(dq->size==0){dq->head=(cpcds_dqnode_##name*)malloc(sizeof(cpcds_dqnode_##name));*dq->head=cpcds_mk_deque_node_##name(v,NULL,NULL);dq->head=dq->tail;}else{dq->tail->next=(cpcds_dqnode_##name*)malloc(sizeof(cpcds_dqnode_##name));*dq->tail->next=cpcds_mk_deque_node_##name(v,dq->tail,NULL);dq->tail=dq->tail->next;}++dq->size;}__t__ cpcds_deque_pop_front_##name(cpcds_deque_##name*dq){__t__ v=dq->head->v;dq->head=dq->head->next;if(dq->head==NULL){free(dq->tail);dq->tail=dq->head;}else{free(dq->head->prev);dq->head->prev=NULL;}--dq->size;return v;}__t__ cpcds_deque_pop_back_##name(cpcds_deque_##name*dq){__t__ v=dq->tail->v;dq->tail=dq->tail->prev;if(dq->tail==NULL){free(dq->head);dq->head=dq->tail;}else{free(dq->tail->next);dq->tail->next=NULL;}--dq->size;return v;}
#define cpcds_dqappend_define(__t__)define_cpcds_dqappend(__t__,__t__)
#endif
#endif
