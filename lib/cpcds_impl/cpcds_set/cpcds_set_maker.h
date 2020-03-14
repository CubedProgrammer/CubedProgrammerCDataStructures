#ifndef __cplsetplset
#ifndef INCLUDED_CPCDS_SET_MAKER_H
#define INCLUDED_CPCDS_SET_MAKER_H
#define define_cpcds_smk(name,__t__)struct cpcds_set_##name{struct cpcds_map_##name##__vptr*map;size_t size;};typedef struct cpcds_set_##name cpcds_set_##name;cpcds_set_##name cpcds_mk_set_empty_##name(){cpcds_set_##name set;set.map=(struct cpcds_map_##name##__vptr*)malloc(sizeof(struct cpcds_map_##name##__vptr));*set.map=cpcds_mk_map_empty_##name##__vptr();set.size=0;return set;}void cpcds_set_ins_##name(cpcds_set_##name*set,__t__ val){cpcds_map_ins_##name##__vptr(set->map,val,(void*)set);set->size=set->map->size;}void cpcds_set_erase_##name(cpcds_set_##name*set,__t__ val){cpcds_map_erase_##name##__vptr(set->map,val);set->size=set->map->size;}bool cpcds_set_fnd_##name(cpcds_set_##name*set,__t__ val){return cpcds_map_fnd_##name##__vptr(set->map,val);}void cpcds_set_clear_##name(cpcds_set_##name*set){set->size=0;cpcds_map_clear_##name##__vptr(set->map);}void cpcds_set_destr_##name(cpcds_set_##name*set){set->size=0;cpcds_map_clear_##name##__vptr(set->map);free(set->map);}
#define cpcds_smk_define(__t__)define_cpcds_smk(__t__,__t__)
#endif
#endif
