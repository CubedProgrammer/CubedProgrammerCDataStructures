#ifndef __cplusplus
#ifndef Included_cpcds_set_iter_h
#define Included_cpcds_set_iter_h
#define define_cpcds_siter(name,__t__)struct cpcds_siter_##name{struct cpcds_miter_##name##__vptr*miter;};typedef struct cpcds_siter_##name cpcds_siter_##name;static inline cpcds_siter_##name cpcds_set_iter_begin_##name(cpcds_set_##name*set){cpcds_siter_##name __it__;__it__.miter=(struct cpcds_miter_##name##__vptr*)malloc(sizeof(struct cpcds_miter_##name##__vptr));*__it__.miter=cpcds_map_iter_begin_##name##__vptr(set->map);return __it__;}static inline cpcds_siter_##name cpcds_set_iter_end_##name(cpcds_set_##name*set){cpcds_siter_##name __it__;__it__.miter=(struct cpcds_miter_##name##__vptr*)malloc(sizeof(struct cpcds_miter_##name##__vptr));*__it__.miter=cpcds_map_iter_end_##name##__vptr(set->map);return __it__;}static inline bool cpcds_set_iter_equal_##name(cpcds_siter_##name f,cpcds_siter_##name s){return cpcds_map_iter_equal_##name##__vptr(*f.miter,*s.miter);}static inline __t__ cpcds_set_iter_get_##name(cpcds_siter_##name*__it__){return cpcds_map_iter_get_##name##__vptr(__it__->miter).key;}static inline void cpcds_set_iter_next_##name(cpcds_siter_##name*__it__){cpcds_map_iter_next_##name##__vptr(__it__->miter);}
#define cpcds_siter_define(__t__)define_cpcds_siter(__t__,__t__)
#endif
#endif
