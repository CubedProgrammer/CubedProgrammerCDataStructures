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

strindex_both_bounds(s,c,from,to)

Param s is a pointer to a cppstring.

Param c is the char to search.

Params from and to are the bounds, from is included, to is now.

Finds a character in a cppstring.

strindex_lower_bound(s,c,from)

Param s is a pointer to a cppstring.

Param c is the char to search.

Param from is the index to start searching from.

Searches for a character in a cppstring.

strindex_no_bound(s,c)

Param s is a ointer to a cppstring.

Param c is the char to search.

Looks for the index of c.

str_equal_pointer(s,t)

Params s and t are pointers to cppstrings.

Compares if the two cppstrings pointed to by the pointers, if they are equal, true is returned.

str_equal_values(s,t)

Params s and t are cppstrings.

Compares if two cppstrings are equal, if they are equal, true is returned.

str_reverse_order(s)

Param s is a pointer to a cppstring.

Reverses the order of a cppstring.

str_to_upper(s)

Param s is a cppstring.

Converts all letters in a cppstring to uppercase.

str_to_lower(s)

Param s is a cppstring.

Converts all letters in a cppstring to lowercase.

str_replace_char(s,old,new)

Param s is a cppstring.

Param old is the character to replace.

Param new is the character to replace with.

Replaces certain chars in a cppstring.

cstr(s)

Param s is a pointer to a cppstring.

Gets the C string of a cppstring, which is a char pointer.

cstr_value(s)

Param s is a cppstring.

Gets the C string of a cppstring, which is a char pointer.

cstr_fill_array(s,str)

Param s is a pointer to a cppstring.

Param str is a char pointer.

Copies the contents of s into str.
### Macros
destroy(str)

Destroys the string, frees memory associated with it.

Param str is the string to destroy.

cpcds_print_cppstr(f,s)

Prints the string into a file.

Params f and s are a pointer to a file object and a cppstring, respectively.

cpcds_stdprint_cppstr(s)

Prints a string into stdout.

Param s is the cppstring that will be printed to stdout.
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
