#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_UNORDERED_SET_MAKER_H
#define INCLUDED_CPCDS_UNORDERED_SET_MAKER_H
#define define_cpcds_usmk(name,__t__)struct cpcds_us_##name{struct cpcds_um_##name##__vptr*um;size_t size;};typedef struct cpcds_us_##name cpcds_us_##name;cpcds_us_##name cpcds_mk_us_empty_##name(void){cpcds_us_##name us;us.um=(struct cpcds_um_##name##__vptr*)malloc(sizeof(struct cpcds_um_##name##__vptr));*us.um=cpcds_mk_um_empty_##name##__vptr();us.size=0;return us;}cpcds_us_##name cpcds_mk_us_copy_##name(cpcds_us_##name*us){cpcds_us_##name cpy;cpy.um=(struct cpcds_um_##name##__vptr*)malloc(sizeof(struct cpcds_um_##name##__vptr));*cpy.um=cpcds_mk_um_copy_##name##__vptr(us->um);cpy.size=us->size;return cpy;}void cpcds_us_insert_##name(cpcds_us_##name*us,__t__ val){cpcds_um_insert_##name##__vptr(us->um,val,(void*)us);us->size=us->um->size;}void cpcds_us_erase_##name(cpcds_us_##name*us,__t__ val){cpcds_um_erase_key_##name##__vptr(us->um,val);us->size=us->um->size;}bool cpcds_us_fnd_##name(cpcds_us_##name*us,__t__ val){return cpcds_um_fnd_key_##name##__vptr(us->um,val);}void cpcds_us_clear_##name(cpcds_us_##name*us){us->size=0;cpcds_um_clear_##name##__vptr(us->um);}void cpcds_us_destr_##name(cpcds_us_##name*us){us->size=0;cpcds_um_destr_##name##__vptr(us->um);free(us->um);}
#define cpcds_usmk_define(__t__)define_cpcds_usmk(__t__,__t__)
#endif
#endif
