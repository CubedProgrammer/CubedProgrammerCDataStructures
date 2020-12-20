#ifndef __cplusplus
#ifndef Included_cpcds_comp_func_h
#define Included_cpcds_comp_func_h
#ifdef max
#define __cpcds_max(__x__,__y__)((__x__)<(__y__)?(__y__):(__x__))
#else
#define max(__x__,__y__)((__x__)<(__y__)?(__y__):(__x__))
#endif
#ifdef min
#define __cpcds_min(__x__,__y__)((__x__)>(__y__)?(__y__):(__x__))
#else
#define min(__x__,__y__)((__x__)>(__y__)?(__y__):(__x__))
#endif
int cpcds_compar_c(char,char);
int cpcds_compar_s(short,short);
int cpcds_compar_i(int,int);
int cpcds_compar_l(long,long);
int cpcds_compar_ll(long long,long long);
int cpcds_compar_f(float,float);
int cpcds_compar_d(double,double);
int cpcds_compar_ld(long double,long double);
int cpcds_compar_uc(unsigned char,unsigned char);
int cpcds_compar_us(unsigned short,unsigned short);
int cpcds_compar_ui(unsigned,unsigned);
int cpcds_compar_ul(unsigned long,unsigned long);
int cpcds_compar_ull(unsigned long long,unsigned long long);
#endif
#endif
