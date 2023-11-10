#ifndef __cplusplus
#ifndef Included_cpcds_unordered_map_maker_h
#define Included_cpcds_unordered_map_maker_h
#define CPCDS____DEFAULT_UMAP_ROOM 1000
#define define_cpcds_umk(name,__k__,__v__,efunc,hfunc)struct cpcds_kvpair_##name{__k__ key;__v__ val;};typedef struct cpcds_kvpair_##name cpcds_kvpair_##name;static inline cpcds_kvpair_##name cpcds_mk_um_kvpair_##name(__k__ key,__v__ val){cpcds_kvpair_##name pair;pair.key=key;pair.val=val;return pair;}cpcds_deque_define(cpcds_kvpair_##name)struct cpcds_um_##name{cpcds_deque_cpcds_kvpair_##name*ens;size_t size;size_t room;};typedef struct cpcds_um_##name cpcds_um_##name;static inline cpcds_um_##name cpcds_mk_um_room_##name(size_t rm){cpcds_um_##name um;um.room=rm;um.ens=(cpcds_deque_cpcds_kvpair_##name*)malloc(rm*sizeof(cpcds_deque_cpcds_kvpair_##name));for(cpcds_deque_cpcds_kvpair_##name*it=um.ens;it!=um.ens+rm;++it){*it=cpcds_mk_deque_empty_cpcds_kvpair_##name();}um.size=0;return um;}static inline cpcds_um_##name cpcds_mk_um_empty_##name(void){return cpcds_mk_um_room_##name(CPCDS____DEFAULT_UMAP_ROOM);}static inline cpcds_um_##name cpcds_mk_um_copy_##name(const cpcds_um_##name*um){cpcds_um_##name cpy=cpcds_mk_um_room_##name(um->room);for(cpcds_deque_cpcds_kvpair_##name*__dq__=cpy.ens,*__it__=um->ens;__dq__!=cpy.ens+cpy.room;++__dq__,++__it__){*__dq__=cpcds_mk_deque_copy_cpcds_kvpair_##name(__it__);}cpy.size=um->size;return cpy;}static inline __v__ cpcds_um_get_##name(const cpcds_um_##name*um,__k__ key){__v__ v;cpcds_hash_v h=hfunc(key);h%=um->room;cpcds_deque_cpcds_kvpair_##name*dq=um->ens+h;size_t lps=0;fnd:if(lps<dq->size&&!efunc(cpcds_deque_get_front_cpcds_kvpair_##name(dq).key,key)){cpcds_deque_append_cpcds_kvpair_##name(dq,cpcds_deque_pop_front_cpcds_kvpair_##name(dq));++lps;goto fnd;}if(lps<dq->size){v=cpcds_deque_get_front_cpcds_kvpair_##name(dq).val;}return v;}static inline void cpcds_um_realloc_##name(cpcds_um_##name*um){size_t old=um->room;um->room+=(um->room>>2)+(um->room>>4);cpcds_deque_cpcds_kvpair_##name*tmp=(cpcds_deque_cpcds_kvpair_##name*)malloc(um->room*sizeof(cpcds_deque_cpcds_kvpair_##name));for(cpcds_deque_cpcds_kvpair_##name*__it__=tmp;__it__!=tmp+um->room;++__it__){*__it__=cpcds_mk_deque_empty_cpcds_kvpair_##name();}cpcds_hash_v h=0;for(cpcds_deque_cpcds_kvpair_##name*__it__=um->ens;__it__!=um->ens+old;++__it__){while(__it__->size>0){h=hfunc(cpcds_deque_get_front_cpcds_kvpair_##name(__it__).key)%um->room;cpcds_deque_append_cpcds_kvpair_##name(tmp+h,cpcds_deque_pop_front_cpcds_kvpair_##name(__it__));}}free(um->ens);um->ens=tmp;}static inline void cpcds_um_dealloc_##name(cpcds_um_##name*um,size_t size){if(size<CPCDS____DEFAULT_UMAP_ROOM){size=CPCDS____DEFAULT_UMAP_ROOM;}cpcds_deque_cpcds_kvpair_##name*tmp=(cpcds_deque_cpcds_kvpair_##name*)malloc(size*sizeof(cpcds_deque_cpcds_kvpair_##name));for(cpcds_deque_cpcds_kvpair_##name*__it__=tmp;__it__!=tmp+size;++__it__){*__it__=cpcds_mk_deque_empty_cpcds_kvpair_##name();}cpcds_hash_v h=0;for(cpcds_deque_cpcds_kvpair_##name*__it__=um->ens;__it__!=um->ens+um->room;++__it__){if(__it__->size==0){continue;}h=hfunc(cpcds_deque_get_front_cpcds_kvpair_##name(__it__).key)%size;cpcds_deque_append_cpcds_kvpair_##name(tmp+h,cpcds_deque_pop_front_cpcds_kvpair_##name(__it__));}free(um->ens);um->ens=tmp;um->room=size;}static inline void cpcds_um_insert_##name(cpcds_um_##name*um,__k__ key,__v__ val){cpcds_hash_v h=hfunc(key);h%=um->room;cpcds_deque_cpcds_kvpair_##name*dq=um->ens+h;size_t lps=0;while(lps<dq->size&&!efunc(cpcds_deque_get_front_cpcds_kvpair_##name(dq).key,key)){cpcds_deque_append_cpcds_kvpair_##name(dq,cpcds_deque_pop_front_cpcds_kvpair_##name(dq));++lps;}if(lps<dq->size){cpcds_deque_pop_front_cpcds_kvpair_##name(dq);}else{if(um->size==um->room){cpcds_um_realloc_##name(um);h=hfunc(key)%um->room;dq=um->ens+h;}++um->size;}cpcds_deque_append_cpcds_kvpair_##name(dq,cpcds_mk_um_kvpair_##name(key,val));}static inline bool cpcds_um_fnd_key_##name(const cpcds_um_##name*um,__k__ key){cpcds_hash_v h=hfunc(key)%um->room;cpcds_deque_cpcds_kvpair_##name*dq=um->ens+h;size_t lps=0;while(lps<dq->size&&!efunc(cpcds_deque_get_front_cpcds_kvpair_##name(dq).key,key)){cpcds_deque_append_cpcds_kvpair_##name(dq,cpcds_deque_pop_front_cpcds_kvpair_##name(dq));++lps;}return lps<dq->size;}static inline __k__ cpcds_um_erase_key_##name(cpcds_um_##name*um,__k__ key){cpcds_hash_v h=hfunc(key)%um->room;cpcds_deque_cpcds_kvpair_##name*dq=um->ens+h;size_t lps=0;while(lps<dq->size&&!efunc(cpcds_deque_get_front_cpcds_kvpair_##name(dq).key,key)){cpcds_deque_append_cpcds_kvpair_##name(dq,cpcds_deque_pop_front_cpcds_kvpair_##name(dq));++lps;}if(lps<dq->size){key=cpcds_deque_pop_front_cpcds_kvpair_##name(dq).key;--um->size;if(um->size<um->room*3>>2){cpcds_um_dealloc_##name(um,um->size);}}return key;}static inline void cpcds_um_clear_##name(cpcds_um_##name*um){for(cpcds_deque_cpcds_kvpair_##name*__it__=um->ens;__it__!=um->ens+um->room;++__it__){while(__it__->size>0){cpcds_deque_pop_front_cpcds_kvpair_##name(__it__);}}um->size=0;}static inline void cpcds_um_destr_##name(cpcds_um_##name*um){cpcds_um_clear_##name(um);free(um->ens);}
#define cpcds_umk_define(__k__,__v__,efunc,hfunc)define_cpcds_uom(__k__##__##__v__,__k__,__v__,efunc,hfunc)
#endif
#endif
