#ifndef __cplusplus
#ifndef Included_cpcds_hash_func_h
#define Included_cpcds_hash_func_h
#define P_CONST_A 375651977
#define P_CONST_B 149753843
#define P_CONST_C 987662329
typedef unsigned long long cpcds_hash_v;
cpcds_hash_v cpcds_hash_char(char);
cpcds_hash_v cpcds_hash_short(short);
cpcds_hash_v cpcds_hash_int(int);
cpcds_hash_v cpcds_hash_long(long);
cpcds_hash_v cpcds_hash_float(float);
cpcds_hash_v cpcds_hash_double(double);
cpcds_hash_v cpcds_hash_uc(unsigned char);
cpcds_hash_v cpcds_hash_us(unsigned short);
cpcds_hash_v cpcds_hash_ui(unsigned);
cpcds_hash_v cpcds_hash_ul(unsigned long);
cpcds_hash_v cpcds_hash_ll(long long);
cpcds_hash_v cpcds_hash_ull(unsigned long long);
#endif
#endif
