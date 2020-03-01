#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_MAP_MAKER_H
#define INCLUDED_CPCDS_MAP_MAKER_H
#define __cpcds_mkvpair_height(__n__)(__n__==NULL?0:__n__->height)
#define __cpcds_mheight_update(__n__){while(__n__!=NULL){__n__->height=1+max(__cpcds_mkvpair_height(__n__->lc),__cpcds_mkvpair_height(__n__->rc));__n__=__n__->parent;}}
#define define_cpcds_mmk(name,__k__,__v__,compar)struct cpcds_mkvpair_##name{__k__ key;__v__ val;struct cpcds_mkvpair_##name*parent;struct cpcds_mkvpair_##name*lc;struct cpcds_mkvpair_##name*rc;size_t height;};typedef struct cpcds_mkvpair_##name cpcds_mkvpair_##name;cpcds_mkvpair_##name cpcds_mk_map_mkvpair_##name(__k__ key,__v__ val,cpcds_mkvpair_##name*parent,cpcds_mkvpair_##name*l,cpcds_mkvpair_##name*r){cpcds_mkvpair_##name node;node.key=key;node.val=val;node.parent=parent;node.lc=l;node.rc=r;node.height=1;return node;}struct cpcds_map_##name{cpcds_mkvpair_##name*rt;size_t size;};typedef struct cpcds_map_##name cpcds_map_##name;cpcds_map_##name cpcds_mk_map_empty_##name(){cpcds_map_##name mp;mp.rt=NULL;mp.size=0;return mp;}void cpcds_map_rotate_ccw_##name(cpcds_map_##name*mp,cpcds_mkvpair_##name*node){cpcds_mkvpair_##name*rc=node->rc;node->rc=node->rc->lc;rc->parent=node->parent;rc->lc=node;node->parent=rc;node->height=1+(__cpcds_mkvpair_height(node->lc)>__cpcds_mkvpair_height(node->rc)?__cpcds_mkvpair_height(node->lc):__cpcds_mkvpair_height(node->rc));rc->height=1+(__cpcds_mkvpair_height(rc->lc)>__cpcds_mkvpair_height(rc->rc)?__cpcds_mkvpair_height(rc->lc):__cpcds_mkvpair_height(rc->rc));if(node->rc!=NULL){node->rc->parent=node;}if(node->parent==NULL){mp->rt=rc;}else{if(rc->parent->lc==node){rc->parent->lc=rc;}else{rc->parent->rc=rc;}}node=node->parent;__cpcds_mheight_update(rc)}void cpcds_map_rotate_cw_##name(cpcds_map_##name*mp,cpcds_mkvpair_##name*node){cpcds_mkvpair_##name*lc=node->lc;node->lc=node->lc->rc;lc->parent=node->parent;lc->rc=node;node->parent=lc;node->height=1+(__cpcds_mkvpair_height(node->lc)>__cpcds_mkvpair_height(node->rc)?__cpcds_mkvpair_height(node->lc):__cpcds_mkvpair_height(node->rc));lc->height=1+(__cpcds_mkvpair_height(lc->lc)>__cpcds_mkvpair_height(lc->rc)?__cpcds_mkvpair_height(lc->lc):__cpcds_mkvpair_height(lc->rc));if(node->lc!=NULL){node->lc->parent=node;}if(node->parent==NULL){mp->rt=lc;}else{if(lc->parent->lc==node){lc->parent->lc=lc;}else{lc->parent->rc=lc;}}lc=lc->parent;__cpcds_mheight_update(lc)}void cpcds_map_fix_ins_##name(cpcds_map_##name*mp,cpcds_mkvpair_##name*node){cpcds_mkvpair_##name*ch=NULL;size_t lh=0;size_t rh=0;__s:lh=__cpcds_mkvpair_height(node->lc);rh=__cpcds_mkvpair_height(node->rc);if(lh+2<=rh||rh+2<=lh){if(lh+2<=rh){ch=node->rc;if(__cpcds_mkvpair_height(ch->lc)>__cpcds_mkvpair_height(ch->rc)){cpcds_map_rotate_cw_##name(mp,ch);}cpcds_map_rotate_ccw_##name(mp,node);}else{ch=node->lc;if(__cpcds_mkvpair_height(ch->lc)<__cpcds_mkvpair_height(ch->rc)){cpcds_map_rotate_ccw_##name(mp,ch);}cpcds_map_rotate_cw_##name(mp,node);}}else if(node->parent!=NULL){node=node->parent;goto __s;}}void cpcds_map_fix_erase_##name(cpcds_map_##name*mp,cpcds_mkvpair_##name*node){}void cpcds_map_upd_hs_##name(cpcds_mkvpair_##name*node){size_t l=0;size_t r=0;__s:l=__cpcds_mkvpair_height(node->lc);r=__cpcds_mkvpair_height(node->lc);node->height=(l<r?r:l)+1;if(node->parent!=NULL){node=node->parent;goto __s;}}
#define cpcds_mmk_define(__k__,__v__,compar)define_cpcds_mmk(__k__##__##__v__,__k__,__v__,compar)
#endif
#endif
