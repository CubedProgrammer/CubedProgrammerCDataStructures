#ifndef __cplusplus
#ifndef Included_cpcds_list_iter_h
#define Included_cpcds_list_iter_h
#define define_cpcds_liter(name,__t__)static inline cpcds_lnode_##name*cpcds_list_move_iter_##name(cpcds_lnode_##name*it,int dist){if(dist<0){dist=-dist;for(int i=0;i<dist;i++){it=it->prev;}}else{for(int i=0;i<dist;i++){it=it->next;}}return it;}
#define cpcds_liter_define(__t__)define_cpcds_liter(__t__,__t__)
#endif
#endif
