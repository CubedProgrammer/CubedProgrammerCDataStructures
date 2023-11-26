#ifndef __cplusplus
#ifndef Included_cppstring_extra_h
#define Included_cppstring_extra_h
#include<stdbool.h>
size_t str_count_ptr(const cppstring*,char);
size_t str_split(cppstring,cppstring**,const char*);
bool str_is_palindrome(cppstring);
cpcds_hash_v cpcds_hash_str(cppstring);
#endif
#endif
