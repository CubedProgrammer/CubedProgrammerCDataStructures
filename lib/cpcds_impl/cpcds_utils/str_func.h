#ifndef __cplusplus
#ifndef INCLUDED_CPCDS_IMPL_CPCDS_UTILS_STR_FUNC_H
#define INCLUDED_CPCDS_IMPL_CPCDS_UTILS_STR_FUNC_H
cppstring ull_to_cppstr(unsigned long long ull)
{
	cppstring ans=mk_empty_str();
	cppstring tmp;
	while(ull>0)
	{
		tmp=mk_char_str((char)(ull%10+48));
		ull/=10;
		str_combine(&ans,&tmp);
		destroy(tmp);
	}
	str_reverse_order(&ans);
	return ans;
}
cppstring ll_to_cppstr(long long ll)
{
	cppstring ans;
	cppstring tmp;
	if(ll<0)
	{
		ans=mk_from_cstr("-");
		tmp=ull_to_cppstr(ll*-1);
		str_combine(&ans,&tmp);
		destroy(tmp);
	}
	else
	{
		ans=ull_to_cppstr(ll);
	}
	return ans;
}
cppstring ul_to_cppstr(unsigned long ul)
{
	return ull_to_cppstr(ul);
}
cppstring long_to_cppstr(long l)
{
	return ll_to_cppstr(l);
}
cppstring ui_to_cppstr(unsigned int ui)
{
	return ull_to_cppstr(ui);
}
cppstring int_to_cppstr(int i)
{
	return ll_to_cppstr(i);
}
cppstring us_to_cppstr(unsigned short us)
{
	return ui_to_cppstr(us);
}
cppstring short_to_cppstr(short s)
{
	return int_to_cppstr(s);
}
cppstring cppstr_to_cppstr(cppstring s)
{
	return s;
}
#endif
#endif
