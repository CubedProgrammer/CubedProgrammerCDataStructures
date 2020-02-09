#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_LIST_MAKER_H
#define INCLUDED_CPCDS_LIST_MAKER_H
#define define_cpcds_lmk(name,__t__)struct cpcds_lnode_##name{struct cpcds_lnode_##name*prev;struct cpcds_lnode_##name*next;__t__ v;};typedef struct cpcds_lnode_##name cpcds_lnode_##name;struct cpcds_list_##name{cpcds_lnode_##name*head;cpcds_lnode_##name*tail;size_t size;};typedef struct cpcds_list_##name cpcds_list_##name;cpcds_lnode_##name cpcds_mk_list_node_##name(__t__ v,cpcds_lnode_##name*prev,cpcds_lnode_##name*next){cpcds_lnode_##name node;node.v=v;node.prev=prev;node.next=next;return node;}cpcds_list_##name cpcds_mk_list_empty_##name(){cpcds_list_##name lis;lis.head=NULL;lis.tail=NULL;lis.size=0;return lis;}cpcds_list_##name cpcds_mk_list_copy_##name(cpcds_list_##name*lis){cpcds_list_##name cpy=cpcds_mk_list_empty_##name();cpcds_lnode_##name*node=lis->head;if(node!=NULL){cpy.head=cpy.tail=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*cpy.head=cpcds_mk_list_node_##name(node->v,NULL,NULL);node=node->next;}while(node!=NULL){cpy.tail->next=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*cpy.tail->next=cpcds_mk_list_node_##name(node->v,cpy.tail,NULL);cpy.tail=cpy.tail->next;node=node->next;}cpy.size=lis->size;return cpy;}void cpcds_list_append_single_##name(cpcds_list_##name*lis,__t__ v){if(lis->size==0){lis->head=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*lis->head=cpcds_mk_list_node_##name(v,NULL,NULL);lis->tail=lis->head;}else{cpcds_lnode_##name*n=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*n=cpcds_mk_list_node_##name(v,lis->tail,NULL);lis->tail->next=n;lis->tail=n;}lis->size++;}__t__ cpcds_list_pop_end_##name(cpcds_list_##name*lis){__t__ v=lis->tail->v;lis->tail=lis->tail->prev;if(lis->tail!=NULL){free(lis->tail->next);lis->tail->next=NULL;}else{lis->head=lis->tail;}lis->size--;return v;}void cpcds_list_prepend_single_##name(cpcds_list_##name*lis,__t__ v){if(lis->size==0){lis->head=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*lis->head=cpcds_mk_list_node_##name(v,NULL,NULL);}else{cpcds_lnode_##name*n=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*n=cpcds_mk_list_node_##name(v,NULL,lis->head);lis->head->prev=n;lis->head=n;}lis->size++;}__t__ cpcds_list_pop_start_##name(cpcds_list_##name*lis){__t__ v=lis->head->v;lis->head=lis->head->next;if(lis->head!=NULL){free(lis->head->prev);lis->head->prev=NULL;}else{lis->tail=lis->head;}lis->size--;return v;}__t__ cpcds_list_get_head_##name(cpcds_list_##name*lis){return lis->head->v;}__t__ cpcds_list_get_tail_##name(cpcds_list_##name*lis){return lis->tail->v;}cpcds_lnode_##name*cpcds_list_get_node_##name(cpcds_list_##name*lis,size_t index){if(index<lis->size>>1){cpcds_lnode_##name*node=lis->head;for(size_t i=0;i<index;i++,node=node->next);return node;}else{cpcds_lnode_##name*node=lis->tail;for(size_t i=lis->size-1;i>index;i--,node=node->prev);return node;}}__t__ cpcds_list_get_single_##name(cpcds_list_##name*lis,size_t index){return cpcds_list_get_node_##name(lis,index)->v;}void cpcds_list_set_single_##name(cpcds_list_##name*lis,size_t ind,__t__ v){cpcds_list_get_node_##name(lis,ind)->v=v;}
#define cpcds_lmk_define(__t__)define_cpcds_lmk(__t__,__t__)
#endif
#endif
