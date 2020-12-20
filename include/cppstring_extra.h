#ifndef __cplusplus
#ifndef Included_cpcds_cppstring_extra_h
#define Included_cpcds_cppstring_extra_h
#include<stdbool.h>
size_t str_count_ptr(const cppstring*,const char);
size_t str_split(const cppstring,cppstring**,const char*);
bool str_is_palindrome(const cppstring);
cpcds_hash_v cpcds_hash_str(cppstring);
#endif
#endif
