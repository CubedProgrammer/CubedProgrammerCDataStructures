#ifndef __cplusplus
#ifndef Included_cpcds_cppstring_maker_h
#define Included_cpcds_cppstring_maker_h
struct cppstring;
typedef struct cppstring cppstring;
#define cpcds_destr_str(str)free(str.bytes)
cppstring mk_empty_str();
cppstring mk_char_str(const char);
cppstring mk_array_str(const char*,const size_t);
cppstring mk_from_cstr(const char);
cppstring cpycppstr(const cppstring);
char str_char_at(const cppstring,const size_t);
cppstring str_modify_char(cppstring*,const size_t,const char);
cppstring str_swap_char(cppstring*,const size_t,const size_t);
cppstring str_concat_pointer(const cppstring*,const cppstring*);
void str_combine(cppstring*,const cppstring*);
cppstring str_concat(const cppstring,const cppstring);
cppstring substring(const cppstring*,const size_t,const size_t);
#endif
#endif
