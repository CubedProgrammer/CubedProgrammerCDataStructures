#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_SET_ITER_H
#define INCLUDED_CPCDS_UNORDERED_SET_ITER_H
#define define_cpcds_usiter(name,__t__)struct cpcds_usiter_##name{struct cpcds_umiter_##name##__vptr*umiter;};typedef struct cpcds_usiter_##name cpcds_usiter_##name;cpcds_usiter_##name cpcds_us_iter_begin_##name(cpcds_us_##name*us){cpcds_usiter_##name __it__;__it__.umiter=(struct cpcds_umiter_##name##__vptr*)malloc(sizeof(struct cpcds_umiter_##name##__vptr));*__it__.umiter=cpcds_um_iter_begin_##name##__vptr(us->um);return __it__;}cpcds_usiter_##name cpcds_us_iter_end_##name(cpcds_us_##name*us){cpcds_usiter_##name __it__;__it__.umiter=(struct cpcds_umiter_##name##__vptr*)malloc(sizeof(struct cpcds_umiter_##name##__vptr));*__it__.umiter=cpcds_um_iter_end_##name##__vptr(us->um);return __it__;}bool cpcds_us_iter_equal_##name(cpcds_usiter_##name f,cpcds_usiter_##name s){return cpcds_um_iter_equal_##name##__vptr(*f.umiter,*s.umiter);}__t__ cpcds_us_iter_get_##name(cpcds_usiter_##name*__it__){return cpcds_um_iter_get_##name##__vptr(__it__->umiter).key;}void cpcds_us_iter_next_##name(cpcds_usiter_##name*__it__){cpcds_um_iter_next_##name##__vptr(__it__->umiter);}
#define cpcds_usiter_define(__t__)define_cpcds_usiter(__t__,__t__)
#endif
#endif
