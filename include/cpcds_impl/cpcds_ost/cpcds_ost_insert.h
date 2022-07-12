#ifndef __cplusplus
#ifndef Included_cpcds_ost_insert_h
#define Included_cpcds_ost_insert_h
#define define_cpcds_ostins(name,__t__,compar)void cpcds_ost_fix_insertion(cpcds_ostn_##name node,cpcds_ost_##name*ost){if(node->pr->col==CPCDS_OST_RED){cpcds_ostn_##name pr=node->pr;cpcds_ostn_##name gp=pr->pr;}}
#endif
#endif
