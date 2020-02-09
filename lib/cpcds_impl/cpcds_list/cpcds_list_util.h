#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_LIST_UTIL_H
#define INCLUDED_CPCDS_LIST_UTIL_H
#include<stdbool.h>
#define define_cpcds_lutil(name,__t__)long long cpcds_list_first_index_##name(cpcds_list_##name*lis,__t__ v,bool(*eq)(__t__,__t__)){long long index=-1;long long i=0;for(cpcds_lnode_##name*node=lis->head;node!=NULL;node=node->next,i++){if((*eq)(node->v,v)){index=i;node=lis->tail;}}return index;}long long cpcds_list_last_index_##name(cpcds_list_##name*lis,__t__ v,bool(*eq)(__t__,__t__)){long long index=0;long long i=-1;for(cpcds_lnode_##name*node=lis->tail;node!=NULL;node=node->prev,i--){if((*eq)(node->v,v)){index=i;node=lis->head;}}return index;}cpcds_list_##name cpcds_list_get_section_##name(cpcds_list_##name*lis,size_t beginning,size_t end){cpcds_list_##name sec=cpcds_mk_list_empty_##name();cpcds_lnode_##name*node=lis->head;for(size_t i=0;i<beginning&&node!=NULL;i++,node=node->next);for(size_t i=beginning;i<end&&node!=NULL;i++,node=node->next){cpcds_list_append_single_##name(&sec,node->v);}return sec;}void cpcds_list_for_each_##name(cpcds_list_##name*lis,void(*func_to_call)(__t__)){for(cpcds_lnode_##name*node=lis->head;node!=NULL;node=node->next){(*func_to_call)(node->v);}}
#define cpcds_lutil_define(__t__)define_cpcds_lutil(__t__,__t__)
#endif
#endif
