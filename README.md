# CubedProgrammerCDataStructures
C Data Structures Libraries
## cppstring
File: cppstring.h
### Structures
struct cppstring (aka cppstring)
### Constructors
mk_empty_str()

Takes no arguments.

Makes an empty cppstring.

mk_char_str(char c)

Param c is the character to make the string from.

Makes a cppstring with one character.

mk_array_str(s,size_t len)

Param s is the character array pointer.

Param len is the length of the char array.

Makes a cppstring with the contents of a char array.

mk_from_cstr(s)

Param s is a char pointer to the c string.

Makes a cppstring from a char pointer, uses char '\0' to terminate string.

cpycppstr(cppstring s)

Param s is the original cppstring.

Creates a copy of a cppstring.

str_char_at(s,index)

Param s is a pointer to a cppstring.

Param index is the index to get the char at.

Gets the character of a cppstring at a certain index.

str_modify_char(s,index,c)

Param s is a pointer to a cppstring.

Param index is the index to modify

Param c is the character to put.

Changes the character of a cppstring at some index.

str_swap_char(s,a,b)

Param s is a pointer to a cppstring.

Param a is an index in the string.

Param b is another index in the string.

Swaps the characters at the two indices.

str_concat_pointer(s,t)

Params s and t are two pointers to cppstrings.

Concats the two cppstrings in a new cppstring, leaving the two originals unchanged and returns new cppstring.

str_combine(s,t)

Params s and t are two pointers to cppstrings.

Puts the string t at the end of string s, expanding string s, and leaves t unchanged.

str_concat(s,t)

Params s and t are two cppstrings.

Concats the cppstrings s and t into another string, which is returned.

substring(s,index,len)

Param s is a pointer to a cppstring.

Param index is the offset of the substring.

Param len is the length of the substring.

Copies a section of the string s and returns it.
### Macros
destroy(str)
Destroys the string, frees memory associated with it.
Param str is the string to destroy.
### Functions
## cpcds_vector
File: cpcds_vector.h
Use define_cpcds_vector(n,t) to initialize a vector type that stores type t with extention name n, full name will be cpcds_vector_n.
Can also use cpcds_vector_define(t) to initialize a vector type that stores type t with same extention name.
## cpcds_list
File: cpcds_list.h
Use define_cpcds_list(n,t) to initialize a list type that stores type t with extention name n, full name will be cpcds_list_n.
Can also use cpcds_list_define(t) to initialize a list type that stores type t with same extention name.
## cpcds_deque
File: cpcds_deque.h
Use define_cpcds_deque(n,t) to initialize a deque type that stores type t with extention name n, full name will be cpcds_deque_n.
Can also use cpcds_deque_define(t) to initialize a list type that stores type t with same extention name.
