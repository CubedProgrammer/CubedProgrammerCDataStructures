#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_DEQUE_MAKER_H
#define INCLUDED_CPCDS_DEQUE_MAKER_H
#define define_cpcds_dqmk(name,__t__)struct cpcds_dqnode_##name{__t__ v;struct cpcds_dqnode_##name*prev;struct cpcds_dqnode_##name*next;};typedef struct cpcds_dqnode_##name cpcds_dqnode_##name;cpcds_dqnode_##name cpcds_mk_deque_node_##name(__t__ v,cpcds_dqnode_##name*prev,cpcds_dqnode_##name*next){cpcds_dqnode_##name n;n.v=v;n.prev=prev;n.next=next;return n;}struct cpcds_deque_##name{cpcds_dqnode_##name*head;cpcds_dqnode_##name*tail;size_t size;};typedef struct cpcds_deque_##name cpcds_deque_##name;cpcds_deque_##name cpcds_mk_deque_empty_##name(){cpcds_deque_##name dq;dq.size=0;dq.head=NULL;dq.tail=NULL;return dq;}cpcds_deque_##name cpcds_mk_deque_copy_##name(cpcds_deque_##name*dq){cpcds_deque_##name cpy;cpcds_dqnode_##name*n=dq->head;if(n!=NULL){cpy.head=(cpcds_dqnode_##name*)malloc(sizeof(cpcds_dqnode_##name));*cpy.head=cpcds_mk_deque_node_##name(n->v,NULL,NULL);cpy.tail=cpy.head;}while(n!=NULL){cpy.tail->next=(cpcds_dqnode_##name*)malloc(sizeof(cpcds_dqnode_##name));*cpy.tail->next=cpcds_mk_deque_node_##name(n->v,cpy.tail,NULL);cpy.tail=cpy.tail->next;n=n->next;}return cpy;}void cpcds_deque_clear_##name(cpcds_deque_##name*dq){cpcds_dqnode_##name*node=dq->head;cpcds_dqnode_##name*tmp;while(node!=NULL){tmp=node->next;free(node);node=tmp;}dq->head=NULL;dq->tail=NULL;dq->size=0;}
#define cpcds_dqmk_define(__t__)define_cpcds_dqmk(__t__,__t__)
#define cpcds_deque_empty(__d__)(__d__.size==0);
#endif
#endif
