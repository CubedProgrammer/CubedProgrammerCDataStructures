#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_VECTOR_APPEND_H
#define INCLUDED_CPCDS_VECTOR_APPEND_H
#define define_cpcds_vappend(name,__t__)void cpcds_vec_append_single_##name(cpcds_vector_##name*vec,__t__ val){if(vec->size==vec->room){__t__*tmp=(__t__*)calloc(vec->room,sizeof(__t__));for(size_t i=0;i<vec->room;i++){tmp[i]=vec->pointer[i];}size_t c=vec->room;vec->room+=vec->room>>2+vec->room>>4;__t__*n=(__t__*)calloc(vec->room,sizeof(__t__));for(size_t i=0;i<c;i++){n[i]=tmp[i];}free(tmp);free(vec->pointer);vec->pointer=n;}vec->pointer[vec->size]=val;vec->size++;}__t__ cpcds_vector_pop_end_##name(cpcds_vector_##name*vec){return vec->pointer[--vec->size];}void cpcds_vec_append_array_##name(cpcds_vector_##name*vec,__t__*vs,__t__*vse){if(vec->size+(vse-vs)>=vec->room){size_t nc=vec->size+(vse-vs)+__CPCDS_DEFAULT_VR;__t__*tmp=(__t__*)calloc(nc,sizeof(__t__));__t__*old=vec->pointer;for(size_t i=0;i<vec->room;i++){tmp[i]=old[i];}vec->pointer=tmp;free(old);vec->room=nc;}for(__t__*__it__=vs;__it__!=vse;++__it__){vec->pointer[vec->size]=*__it__;++vec->size;}}void cpcds_vec_append_vec_##name(cpcds_vector_##name*vec,cpcds_vector_##name*tba){cpcds_vec_append_array_##name(vec,tba->pointer,tba->pointer+tba->size);}
#define cpcds_vappend_define(__t__)define_cpcds_vappend(__t__,__t__)
#endif
#endif
