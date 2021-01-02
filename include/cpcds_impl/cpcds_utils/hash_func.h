#ifndef __cplusplus
#ifndef Included_hash_func_h
#define Included_hash_func_h
#define P_CONST_A 375651977
#define P_CONST_B 149753843
#define P_CONST_C 987662329
typedef unsigned long long int cpcds_hash_v;
cpcds_hash_v cpcds_hash_char(char c)
{
	return c;
}
cpcds_hash_v cpcds_hash_short(short s)
{
	return s;
}
cpcds_hash_v cpcds_hash_int(int i)
{
	return i;
}
cpcds_hash_v cpcds_hash_long(long l)
{
	return l;
}
cpcds_hash_v cpcds_hash_float(float f)
{
	cpcds_hash_v*ptr=(cpcds_hash_v*)&f;
	return*ptr;
}
cpcds_hash_v cpcds_hash_double(double d)
{
	cpcds_hash_v*ptr=(cpcds_hash_v*)&d;
	return*ptr;
}
cpcds_hash_v cpcds_hash_uc(unsigned char c)
{
	return c;
}
cpcds_hash_v cpcds_hash_us(unsigned short s)
{
	return s;
}
cpcds_hash_v cpcds_hash_ui(unsigned i)
{
	return i;
}
cpcds_hash_v cpcds_hash_ul(unsigned long l)
{
	return l;
}
cpcds_hash_v cpcds_hash_ll(long long ll)
{
	return(cpcds_hash_v)ll;
}
cpcds_hash_v cpcds_hash_ull(unsigned long long ll)
{
	return ll;
}
#endif
#endif
