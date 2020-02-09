#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_LIST_INSERT_H
#define INCLUDED_CPCDS_LIST_INSERT_H
#define define_cpcds_lins(name,__t__)void cpcds_list_append_list_##name(cpcds_list_##name*lis,cpcds_list_##name tba){for(cpcds_lnode_##name*node=tba.head;node!=NULL;node=node->next){cpcds_list_append_single_##name(lis,node->v);}}void cpcds_list_prepend_list_##name(cpcds_list_##name*lis,cpcds_list_##name tba){for(cpcds_lnode_##name*node=tba.tail;node!=NULL;node=node->prev){cpcds_list_prepend_single_##name(lis,node->v);}}void cpcds_list_insert_before_##name(cpcds_lnode_##name*n,__t__ v){cpcds_lnode_##name*node=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*node=cpcds_mk_list_node_##name(v,n->prev,n);n->prev=node;if(node->prev!=NULL){node->prev->next=node;}}void cpcds_list_insert_after_##name(cpcds_lnode_##name*n,__t__ v){cpcds_lnode_##name*node=(cpcds_lnode_##name*)malloc(sizeof(cpcds_lnode_##name));*node=cpcds_mk_list_node_##name(v,n,n->next);n->next=node;if(node->next!=NULL){node->next->prev=node;}}void cpcds_list_insert_at_##name(cpcds_list_##name*lis,size_t index,__t__ v){cpcds_list_insert_before_##name(cpcds_list_get_node_##name(lis,index),v);++lis->size;}
#define cpcds_lins_define(__t__)define_cpcds_lins(__t__,__t__)
#endif
#endif
