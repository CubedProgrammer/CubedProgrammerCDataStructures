#ifndef __cplusplus
#ifndef Included_cppstring_utils_h
#define Included_cppstring_utils_h
#include<stdbool.h>
#define cpcds_print_cppstr(f,s)fprintf(f,"%s",(s).bytes)
#define cpcds_stdprint_cppstr(s)printf("%s",(s).bytes)
#define cpcds_println_cppstr(f,s)fputs((s).bytes,f)
#define cpcds_stdprintln_cppstr(s)puts((s).bytes)
int strindex_both_bounds(const cppstring*,const char,const size_t,const size_t);
int strindex_lower_bound(const cppstring*,const char,const int);
int strindex_no_bound(const cppstring*,const char);
bool str_equal_pointer(const cppstring*,const cppstring*);
cppstring str_reverse_order(cppstring*);
cppstring str_to_upper(cppstring);
cppstring str_to_lower(cppstring);
cppstring str_to_lower(cppstring);
cppstring str_replace_char(cppstring*,const char,const char);
char*cstr(const cppstring*);
char*cstr_value(cppstring);
void cstr_fill_array(cppstring*,char*);
#endif
#endif
