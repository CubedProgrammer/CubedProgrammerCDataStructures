#ifndef __cplusplus
#ifndef Included_cppstring_maker_h
#define Included_cppstring_maker_h
struct cppstring
{
	char*bytes;
	size_t len;
};
typedef struct cppstring cppstring;
#define cpcds_destr_str(str)free(str.bytes)
cppstring mk_empty_str(void);
cppstring mk_char_str(char);
cppstring mk_array_str(const char*,size_t);
cppstring mk_from_cstr(const char*);
cppstring cpycppstr(cppstring);
char str_char_at(const cppstring*,size_t);
cppstring str_modify_char(cppstring*,size_t,char);
cppstring str_swap_char(cppstring*,size_t,size_t);
cppstring str_concat_pointer(const cppstring*,const cppstring*);
void str_combine(cppstring*,const cppstring*);
cppstring str_concat(cppstring,cppstring);
cppstring substring(const cppstring*,size_t,size_t);
#endif
#endif
