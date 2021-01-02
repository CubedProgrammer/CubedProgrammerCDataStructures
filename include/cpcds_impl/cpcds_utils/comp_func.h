#ifndef __cplusplus
#ifndef Included_comp_func_h
#define Included_comp_func_h
#ifdef max
#define cpcds____max(__x__,__y__)((__x__)<(__y__)?(__y__):(__x__))
#else
#define max(__x__,__y__)((__x__)<(__y__)?(__y__):(__x__))
#endif
#ifdef min
#define cpcds____min(__x__,__y__)((__x__)>(__y__)?(__y__):(__x__))
#else
#define min(__x__,__y__)((__x__)>(__y__)?(__y__):(__x__))
#endif
int cpcds_compar_c(char x,char y)
{
	return x-y;
}
int cpcds_compar_s(short x,short y)
{
	return x-y;
}
int cpcds_compar_i(int x,int y)
{
	return x-y;
}
int cpcds_compar_l(long x,long y)
{
	return x-y;
}
int cpcds_compar_ll(long long x,long long y)
{
	return x>y?1:x<y?-1:0;
}
int cpcds_compar_f(float x,float y)
{
	return x>y?1:x<y?-1:0;
}
int cpcds_compar_d(double x,double y)
{
	return x>y?1:x<y?-1:0;
}
int cpcds_compar_ld(long double x,long double y)
{
	return x>y?1:x<y?-1:0;
}
int cpcds_compar_uc(unsigned char x,unsigned char y)
{
	return x-y;
}
int cpcds_compar_us(unsigned short x,unsigned short y)
{
	return x-y;
}
int cpcds_compar_ui(unsigned x,unsigned y)
{
	return x-y;
}
int cpcds_compar_ul(unsigned long x,unsigned long y)
{
	return x-y;
}
int cpcds_compar_ull(unsigned long long x,unsigned long long y)
{
	return x>y?1:x<y?-1:0;
}
#endif
#endif
