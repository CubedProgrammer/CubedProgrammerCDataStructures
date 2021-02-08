#ifndef __cplusplus
#ifndef Included_cpcds_ost_maker_h
#define Included_cpcds_ost_maker_h
#define CPCDS_OST_RED 97
#define CPCDS_OST_BLACK 98
typedef int cpcds____ost_colour_t;
#define define_cpcds_ostmk(name,__t__,compar)struct cpcds_ostn_##name{struct cpcds_ostn_##name*pr,*lc,*rc;size_t sz;__t__ val;cpcds____ost_colour_t col;};typedef struct cpcds_ostn_##name*cpcds_ostn_##name;typedef struct cpcds_ost_##name{cpcds_ostn_##name rt;size_t sz;}cpcds_ost_##name;cpcds_ost_##name cpcds_mk_ost_empty_##name(void){cpcds_ost_##name ost;ost.rt=NULL;ost.sz=0;return ost;}cpcds_ost_##name cpcds_mk_ost_cpy_##name(cpcds_ost_##name*ost){cpcds_ost_##name new;if(ost->rt==NULL){new.rt=NULL;}else{new.rt=(cpcds_ostn_##name)malloc(sizeof(*new.rt));}new.rt->lc=NULL;new.rt->rc=NULL;new.rt->pr=NULL;new.rt->sz=ost->rt->sz;new.sz=ost->sz;return new;}
#define cpcds_osmk_define(__t__,compar)define_cpcds_ostmk(__t__,__t__,compar)
#endif
#endif
