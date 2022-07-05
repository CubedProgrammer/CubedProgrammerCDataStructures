#ifndef __cplusplus
#ifndef Included_cpcds_ost_maker_h
#define Included_cpcds_ost_maker_h
#define CPCDS_OST_RED 97
#define CPCDS_OST_BLACK 98
typedef int cpcds____ost_colour_t;
#define define_cpcds_ostmk(name,__t__,compar)struct cpcds_ostn_##name{struct cpcds_ostn_##name*pr,*lc,*rc;size_t sz;__t__ val;cpcds____ost_colour_t col;};typedef struct cpcds_ostn_##name*cpcds_ostn_##name;typedef struct cpcds_ost_##name{cpcds_ostn_##name rt;size_t sz;}cpcds_ost_##name;cpcds_ost_##name cpcds_mk_ost_empty_##name(void){cpcds_ost_##name ost;ost.rt=NULL;ost.sz=0;return ost;}cpcds_ost_##name cpcds_mk_ost_cpy_##name(cpcds_ost_##name*ost){cpcds_ost_##name new;if(ost->rt==NULL){new.rt=NULL;}else{new.rt=(cpcds_ostn_##name)malloc(sizeof(*new.rt));new.rt->lc=NULL;new.rt->rc=NULL;new.rt->pr=NULL;new.rt->sz=ost->rt->sz;new.rt->val=ost->rt->val;new.sz=0;cpcds_ostn_##name node=ost->rt,to=new.rt;while(new.sz<ost->sz){if(to->lc==NULL&&node->lc!=NULL){to->lc=malloc(sizeof(*to->lc));to->lc->lc=NULL;to->lc->rc=NULL;to->lc->pr=to;node=node->lc;to=to->lc;}else if(to->rc==NULL&&node->rc!=NULL){to->rc=malloc(sizeof(*to->rc));to->rc->lc=NULL;to->rc->rc=NULL;to->rc->pr=to;node=node->rc;to=to->rc;}else{++new.sz;to->col=node->col;to->val=node->val;to->sz=node->sz;to=to->pr;node=node->pr;}};}return new;}void cpcds_ost_left_rot_##name(cpcds_ost_##name*ost,cpcds_ostn_##name node){cpcds_ostn_##name tmp=node->pr;if(tmp==NULL){ost->rt=node->rc;}node->pr=node->rc;node->rc->pr=tmp;tmp=node->rc->lc;node->rc->lc=node;node->rc=tmp;if(tmp){tmp->pr=node;}}void cpcds_ost_right_rot_##name(cpcds_ost_##name*ost,cpcds_ostn_##name node){cpcds_ostn_##name tmp=node->pr;if(tmp==NULL){ost->rt=node->lc;}node->pr=node->lc;node->lc->pr=tmp;tmp=node->lc->rc;node->lc->rc=node;node->lc=tmp;if(tmp){tmp->pr=node;}}
#define cpcds_ostmk_define(__t__,compar)define_cpcds_ostmk(__t__,__t__,compar)
#endif
#endif
