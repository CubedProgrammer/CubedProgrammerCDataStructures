#ifndef __cplusplus
#ifndef Included_cppstring_utils_h
#define Included_cppstring_utils_h
#include<stdbool.h>
#include<string.h>
#define cpcds_print_cppstr(f,s)fprintf(f,"%s",(s).bytes)
#define cpcds_stdprint_cppstr(s)printf("%s",(s).bytes)
#define cpcds_println_cppstr(f,s)fputs((s).bytes,f)
#define cpcds_stdprintln_cppstr(s)puts((s).bytes)
size_t strindex_both_bounds(const cppstring*s,char c,size_t from,size_t to)
{
	size_t index=-1;
	for(size_t i=from;i<to;i++)
	{
		if(str_char_at(s,i)==c)
		{
			index=i;
			i=to;
		}
	}
	return index;
}
size_t strindex_lower_bound(const cppstring*s,char c,size_t from)
{
	return strindex_both_bounds(s,c,from,s->len);
}
size_t strindex_no_bound(const cppstring*s,char c)
{
	return strindex_lower_bound(s,c,0);
}
bool str_equal_pointer(const cppstring*s,const cppstring*t)
{
	if(s->len==t->len)
	{
		bool e=true;
		for(size_t i=0;i<s->len&&e;i++)
		{
			e=str_char_at(s,i)==str_char_at(t,i);
		}
		return e;
	}
	else
	{
		return false;
	}
}
bool str_equal_values(cppstring s,cppstring t)
{
	return str_equal_pointer(&s,&t);
}
cppstring str_reverse_order(cppstring*s)
{
	for(size_t i=0;i<s->len>>1;i++)
	{
		str_swap_char(s,i,s->len-i-1);
	}
	return*s;
}
cppstring str_to_upper(cppstring s)
{
	for(size_t i=0;i<s.len;i++)
	{
		if(s.bytes[i]>96&&s.bytes[i]<=122)
		{
			s.bytes[i]-=32;
		}
	}
	return s;
}
cppstring str_to_lower(cppstring s)
{
	for(size_t i=0;i<s.len;i++)
	{
		if(s.bytes[i]>64&&s.bytes[i]<=90)
		{
			s.bytes[i]+=32;
		}
	}
	return s;
}
cppstring str_replace_char(cppstring*s,const char old,const char new)
{
	for(size_t i=0;i<s->len;i++)
	{
		if(s->bytes[i]==old)
		{
			s->bytes[i]=new;
		}
	}
	return*s;
}
char*cstr(const cppstring*s)
{
	return s->bytes;
}
char*cstr_value(cppstring s)
{
	return s.bytes;
}
void cstr_fill_array(const cppstring*s,char*str)
{
	memcpy(str,s->bytes,s->len);
}
#endif
#endif
