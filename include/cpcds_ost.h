#ifndef __cplusplus
#ifndef Included_cpcds_ost_h
#define Included_cpcds_ost_h
#include"cpcds_impl/cpcds_ost/cpcds_ost_maker.h"
#define define_cpcds_ost(name,__t__,compar)define_cpcds_ostmk(name,__t__,compar)
#define cpcds_ost_define(__t__,compar)define_cpcds_ost(__t__,__t__,compar)
#endif
#endif
