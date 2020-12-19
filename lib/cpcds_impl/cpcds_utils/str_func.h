#ifndef __cplusplus
#ifndef INCLUDED_STR_FUNC_H
#define INCLUDED_STR_FUNC_H
inline cppstring ull_to_cppstr(unsigned long long ull)
{
	cppstring ans=mk_empty_str();
	cppstring tmp;
	while(ull>0)
	{
		tmp=mk_char_str((char)(ull%10+48));
		ull/=10;
		str_combine(&ans,&tmp);
		cpcds_destr_str(tmp);
	}
	str_reverse_order(&ans);
	if(ans.len==0)
	{
		ans=mk_from_cstr("0");
	}
	return ans;
}
inline cppstring ll_to_cppstr(long long ll)
{
	cppstring ans;
	cppstring tmp;
	if(ll<0)
	{
		ans=mk_from_cstr("-");
		tmp=ull_to_cppstr(ll*-1);
		str_combine(&ans,&tmp);
		cpcds_destr_str(tmp);
	}
	else
	{
		ans=ull_to_cppstr(ll);
	}
	if(ans.len==0)
	{
		ans=mk_from_cstr("0");
	}
	return ans;
}
inline cppstring ul_to_cppstr(unsigned long ul)
{
	return ull_to_cppstr(ul);
}
inline cppstring long_to_cppstr(long l)
{
	return ll_to_cppstr(l);
}
inline cppstring ui_to_cppstr(unsigned int ui)
{
	return ull_to_cppstr(ui);
}
inline cppstring int_to_cppstr(int i)
{
	return ll_to_cppstr(i);
}
inline cppstring us_to_cppstr(unsigned short us)
{
	return ui_to_cppstr(us);
}
inline cppstring short_to_cppstr(short s)
{
	return int_to_cppstr(s);
}
inline cppstring bool_to_cppstr(bool u)
{
	if(u)
		return mk_from_cstr("true");
	else
		return mk_from_cstr("false");
}
inline cppstring cppstr_to_cppstr(cppstring s)
{
	return s;
}
#endif
#endif
