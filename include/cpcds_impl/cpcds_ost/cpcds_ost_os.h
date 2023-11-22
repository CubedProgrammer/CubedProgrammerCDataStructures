#ifndef __cplusplus
#ifndef Included_cpcds_ost_os_h
#define Included_cpcds_ost_os_h
#define define_cpcds_ostos(name,__t__,compar)size_t cpcds_ost_rnk_##name(cpcds_ost_##name*ost,__t__ val){size_t rnk=0;cpcds_ostn_##name n=ost->rt;int cmp=1;while(cmp&&n!=NULL){cmp=compar(val,n->val);if(cmp>0){rnk+=cpcds_ost_nsz_##name(n->lc)+1;n=n->rc;}else if(cmp<0){n=n->lc;}else{rnk+=cpcds_ost_nsz_##name(n->lc);}}return rnk;}
#define cpcds_ostos_define()define_cpcds_ostos()
#endif
#endif
