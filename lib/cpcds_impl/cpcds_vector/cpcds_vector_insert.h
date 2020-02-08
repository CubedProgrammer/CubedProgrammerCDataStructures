#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_VECTOR_INSERT_H
#define INCLUDED_CPCDS_VECTOR_INSERT_H
#define define_cpcds_vins(name,__t__)void cpcds_vec_insert_single_##name(cpcds_vector_##name*vec,size_t index,__t__ v){if(vec->size==vec->room){__t__*tmp=(__t__*)calloc(vec->room,sizeof(__t__));for(size_t i=0;i<vec->room;i++){tmp[i]=vec->pointer[i];}size_t c=vec->room;vec->room+=vec->room>>2+vec->room>>4;__t__*n=(__t__*)calloc(vec->room,sizeof(__t__));for(size_t i=0;i<c;i++){n[i]=tmp[i];}free(tmp);free(vec->pointer);vec->pointer=n;}for(size_t i=vec->size-1;i>=index&&i<-1;i--){vec->pointer[i+1]=vec->pointer[i];}vec->pointer[index]=v;++vec->size;}void cpcds_vec_insert_array_##name(cpcds_vector_##name*vec,size_t index,__t__*first,__t__*last){if(vec->size+(last-first)>=vec->room){size_t nc=vec->size+(last-first)+__CPCDS_DEFAULT_VR;__t__*tmp=(__t__*)calloc(nc,sizeof(__t__));__t__*old=vec->pointer;for(size_t i=0;i<vec->room;i++){tmp[i]=old[i];}free(old);vec->pointer=tmp;vec->room=nc;}for(size_t i=vec->size-1;i>=index&&i<-1;i--){vec->pointer[i+(last-first)]=vec->pointer[i];}vec->size+=last-first;for(__t__*__it__=vec->pointer+index;first!=last;++__it__,++first){*__it__=*first;}}__t__ cpcds_vec_remove_single_##name(cpcds_vector_##name*vec,size_t index){__t__ v=vec->pointer[index];--vec->size;for(size_t i=index;i<vec->size;i++){vec->pointer[i]=vec->pointer[i+1];}return v;}__t__*cpcds_vec_remove_section_##name(cpcds_vector_##name*vec,size_t index,size_t s){__t__*vs=calloc(s,sizeof(__t__));for(size_t i=0;i<s;i++){vs[i]=vec->pointer[index+i];};vec->size-=s;for(size_t i=index;i<vec->size;i++){vec->pointer[i]=vec->pointer[i+s];}return vs;}
#define cpcds_vins_define(__t__)define_cpcds_vins(__t__,__t__)
#endif
#endif
