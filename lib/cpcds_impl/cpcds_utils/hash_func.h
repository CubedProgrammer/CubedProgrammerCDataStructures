#ifndef __cplusplus
#ifndef INCLUDED_HASH_FUNC_H
#define INCLUDED_HASH_FUNC_H
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
	return(cpcds_hash_v)l;
}
cpcds_hash_v cpcds_hash_float(float f)
{
	cpcds_hash_v*ptr=(cpcds_hash_v*)&f;
	return*ptr;
}
cpcds_hash_v cpcds_hash_double(double d)
{
	long*ptr=(long*)&d;
	return cpcds_hash_long(*ptr);
}
cpcds_hash_v cpcds_hash_uc(unsigned char c)
{
	return c;
}
cpcds_hash_v cpcds_hash_us(unsigned short s)
{
	return s;
}
cpcds_hash_v cpcds_hash_ui(unsigned int i)
{
	return i;
}
cpcds_hash_v cpcds_hash_ul(unsigned long l)
{
	return(cpcds_hash_v)l;
}
cpcds_hash_v cpcds_hash_ll(long long ll)
{
	return(cpcds_hash_v)ll;
}
cpcds_hash_v cpcds_hash_ull(unsigned long long ll)
{
	return(cpcds_hash_v)ll;
}
#endif
#endif
