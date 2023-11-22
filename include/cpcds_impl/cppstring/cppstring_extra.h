#ifndef __cplusplus
#ifndef Included_cppstring_extra_h
#define Included_cppstring_extra_h
size_t str_count_ptr(const cppstring*sp,char c)
{
	size_t cnt=0;
	for(char*it=sp->bytes;it!=sp->bytes+sp->len;++it)
	{
		if(*it==c)
		{
			++cnt;
		}
	}
	return cnt;
}
size_t str_split(cppstring str,cppstring**arr,const char*cs)
{
	size_t cnt=0;
	for(char*it=str.bytes;it!=str.bytes+str.len;++it)
	{
		for(size_t i=0;cs[i]!=0;i++)
		{
			if(cs[i]==*it)
			{
				++cnt;
			}
		}
	}
	cppstring*ss=(cppstring*)malloc(++cnt*sizeof(cppstring));
	*arr=ss;
	size_t l=0;
	for(char*it=str.bytes;it!=str.bytes+str.len;++it)
	{
		for(size_t i=0;cs[i]!=0;i++)
		{
			if(cs[i]==*it)
			{
				*ss=substring(&str,l,it-str.bytes-l);
				l=it-str.bytes+1;
				++ss;
			}
		}
	}
	*ss=substring(&str,l,str.len-l);
	return cnt;
}
bool str_is_palindrome(cppstring str)
{
	bool palin=true;
	for(size_t i=0;i<str.len>>1;++i)
	{
		palin=palin&&str.bytes[i]==str.bytes[str.len-i-1];
	}
	return palin;
}
cpcds_hash_v cpcds_hash_str(cppstring str)
{
	cpcds_hash_v hv=1;
	for(char*it=str.bytes;it!=str.bytes+str.len;++it)
	{
		hv*=P_CONST_A;
		hv^=P_CONST_B;
		hv^=*it;
	}
	for(char*it=str.bytes+str.len-1;it!=str.bytes-1;--it)
	{
		hv*=P_CONST_B;
		hv^=P_CONST_C;
		hv^=*it;
	}
	if((str.len&1)==0)
	{
		char*__f__=str.bytes;
		char*__s__=str.bytes+str.len-1;
		while(__f__!=__s__+1)
		{
			hv*=P_CONST_C;
			hv^=P_CONST_A;
			hv^=*__f__^*__s__;
			++__f__;
			--__s__;
		}
	}
	else
	{
		char*__f__=str.bytes;
		char*__s__=str.bytes+str.len-1;
		while(__f__!=__s__)
		{
			hv*=P_CONST_C;
			hv^=P_CONST_A;
			hv^=*__s__^*__f__;
			++__f__;
			--__s__;
		}
	}
	return hv;
}
#endif
#endif
