# CubedProgrammerCDataStructures
C Data Structures Libraries
## cppstring
File: cppstring.h
### Structures
struct cppstring (aka cppstring)
### Constructors
#### mk_empty_str()
Takes no arguments.

Makes an empty cppstring.
#### mk_char_str(char c)
Param c is the character to make the string from.

Makes a cppstring with one character.
#### mk_array_str(s,size_t len)
Param s is the character array pointer.

Param len is the length of the char array.

Makes a cppstring with the contents of a char array.
#### mk_from_cstr(s)
Param s is a char pointer to the c string.

Makes a cppstring from a char pointer, uses char '\0' to terminate string.
#### cpycppstr(cppstring s)
Param s is the original cppstring.

Creates a copy of a cppstring.

### Functions
#### str_char_at(s,index)
Param s is a pointer to a cppstring.

Param index is the index to get the char at.

Gets the character of a cppstring at a certain index.
#### str_modify_char(s,index,c)
Param s is a pointer to a cppstring.

Param index is the index to modify

Param c is the character to put.

Changes the character of a cppstring at some index.
#### str_swap_char(s,a,b)
Param s is a pointer to a cppstring.

Param a is an index in the string.

Param b is another index in the string.

Swaps the characters at the two indices.
#### str_concat_pointer(s,t)
Params s and t are two pointers to cppstrings.

Concats the two cppstrings in a new cppstring, leaving the two originals unchanged and returns new cppstring.
#### str_combine(s,t)
Params s and t are two pointers to cppstrings.

Puts the string t at the end of string s, expanding string s, and leaves t unchanged.
#### str_concat(s,t)
Params s and t are two cppstrings.

Concats the cppstrings s and t into another string, which is returned.
#### substring(s,index,len)
Param s is a pointer to a cppstring.

Param index is the offset of the substring.

Param len is the length of the substring.

Copies a section of the string s and returns it.
#### strindex_both_bounds(s,c,from,to)
Param s is a pointer to a cppstring.

Param c is the char to search.

Params from and to are the bounds, from is included, to is now.

Finds a character in a cppstring.
#### strindex_lower_bound(s,c,from)
Param s is a pointer to a cppstring.

Param c is the char to search.

Param from is the index to start searching from.

Searches for a character in a cppstring.
#### strindex_no_bound(s,c)
Param s is a ointer to a cppstring.

Param c is the char to search.

Looks for the index of c.
#### str_equal_pointer(s,t)
Params s and t are pointers to cppstrings.

Compares if the two cppstrings pointed to by the pointers, if they are equal, true is returned.
#### str_equal_values(s,t)
Params s and t are cppstrings.

Compares if two cppstrings are equal, if they are equal, true is returned.
#### str_reverse_order(s)
Param s is a pointer to a cppstring.

Reverses the order of a cppstring.
#### str_to_upper(s)
Param s is a cppstring.

Converts all letters in a cppstring to uppercase.
#### str_to_lower(s)
Param s is a cppstring.

Converts all letters in a cppstring to lowercase.
#### str_replace_char(s,old,new)
Param s is a cppstring.

Param old is the character to replace.

Param new is the character to replace with.

Replaces certain chars in a cppstring.
#### cstr(s)
Param s is a pointer to a cppstring.

Gets the C string of a cppstring, which is a char pointer.
#### cstr_value(s)
Param s is a cppstring.

Gets the C string of a cppstring, which is a char pointer.
#### cstr_fill_array(s,str)
Param s is a pointer to a cppstring.

Param str is a char pointer.

Copies the contents of s into str.
### Macros
#### destroy(str)
Destroys the string, frees memory associated with it.

Param str is the string to destroy.
#### cpcds_print_cppstr(f,s)
Prints the string into a file.

Params f and s are a pointer to a file object and a cppstring, respectively.
#### cpcds_stdprint_cppstr(s)
Prints a string into stdout.

Param s is the cppstring that will be printed to stdout.
## cpcds_vector
File: cpcds_vector.h
Use define_cpcds_vector(n,t) to initialize a vector type that stores type t with extention name n, full name will be cpcds_vector_n.
Can also use cpcds_vector_define(t) to initialize a vector type that stores type t with same extention name.

Alternatively, the following macros will allow you to define parts of the vector's functions:

#### define_cpcds_vmk(n,t), cpcds_vmk_define(t)
Defines the structure and basic get and set functions in the vector.
#### define_cpcds_vappend(n,t), cpcds_vappend_define(t)
Defines the append single, array, and vector functions.
#### define_cpcds_vins(n,t), cpcds_vins_define(t)
Defines the insert functions of the vector, as well as some erase functions.
#### define_cpcds_vutil(n,t), cpcsd_vutil_define(t)
Defines some utilities such as finding an element, erasing an element by its value, equals, and hash functions.
### Structures
struct cpcds_vector_n (aka cpcds_vector_n)
### Constructor
#### cpcds_mk_vec_room_n(size)
Param size is the room of the vector.

Creates a vector with a capacity of size.
#### cpcds_mk_vec_default_n()
Makes a vector with default room.
#### cpcds_mk_vec_array_n(first,last)
Params first and last are iterators to the beginning and end of the array.

Creates a vector from an array, contents will be copied.
#### cpcds_mk_vec_copy_n(vec)
Param vec is a pointer to a vector.

Makes a copy of an existing vector.
### Functions
#### cpcds_vec_get_at_n(vec,index)
Param vec is a pointer to a vector.

Param index is an index.

Gets the element from a vector at some index.
#### cpcds_vec_set_single_n(vec,index,val)
Param vec is a pointer to a vector.

Param index is an index.

Param val is the value to change to.

Changes the value of the vector at some index.
#### cpcds_vec_destr_n(um)
Param vec is a pointer to a vector.

Destroys a vector pointer.
#### cpcds_vec_fill_range_n(vec,v,index,len)
Param vec is a pointer to a vector.

Param v is the value to fill.

Params index and len are the offset and length of the range.

Fills a portion of vector with some value.
#### cpcds_vec_set_array_n(vec,ind,first,last)
Param vec is a pointer to a vector.

Param ind is an index.

Params first and last are iterators of an array.

Copies an array into a portion of a vector.
#### cpcds_vec_slice_array_n(vec,index,len)
Param vec is a pointer to a vector.

Params index and len are the offset and length of the subarray to slice.

Returns a portion of the vector, leaving the vector unchanged.
#### cpcds_vec_append_single_n(vec,val)
Param vec is a pointer to a vector.

Param val is the value to append to the vector.

Appends a value to the end of a vector.
#### cpcds_vector_pop_end_n(vec)
Param vec is a pointer to a vector.

Pops an item off of the back of a vector, and returns it.
#### cpcds_vec_append_array_n(vec,vs,vse)
Param vec is a pointer to a vector.

Param vs is an iterator to the first element in the array.

Param vse is an iterator to the end of the array, after the last element.

Appends an array to the end of the vector.

Note: Even though appending an array by this function and appending an array by using a for loop and append single function both have ammortized O(n) time complexity, where n is the length of the array, this function is simply more efficient.
#### cpcds_vec_append_vec_n(vec,tba)

Params vec and tba are pointers to vectors.

Appends a vector to the end of another vector, tba is added to the end of vec.
#### cpcds_vec_insert_single_n(vec,index,v)
Param vec is a pointer to a vector.

Param index is the index to insert at.

Param v is the value to insert.

Inserts an element at some index, pushing everything after it one element over.
#### cpcds_vec_insert_array_n(vec,index,first,last)
Param vec is a pointer to a vector.

Param index is the index to insert the first element of the array at.

Params first and last are iterators to the first element and end of the array to be inserted.

Inserts an array into a vector.
#### cpcds_vec_erase_single_n(vec,index)
Param vec is a pointer to a vector.

Param index is the index to erase.

Erases an element from the vector and returns it, all elements after index will be pushed back one step.
#### cpcds_vec_erase_section_n(vec,index,s)
Param vec is a pointer to a vector.

Params index and s are the offset and length of the section to remove.

Erases a section from the vector and stores it in an array, the pointer to the first element of the array is returned.
#### cpcds_vec_find_bounded_n(vec,v,eq,from,to)
Param vec is a pointer to a vector.

Param v is the value to find.

Param eq is a pointer to a bool function that tells if two elements in the array are equivalent.

Params from and to are the bounds to search in.

Searches for an element within the bounds from, inclusive, and to, exclusive, returns the index or -1 if not found.
#### cpcds_vec_find_value_n(vec,v,eq)
Param vec is a pointer to a vector.

Param v is the value to find.

Param eq is a pointer to a bool function that tells if two elements in the array are equivalent.

Searches for an element within the vector, returns the index or -1 if not found.
#### cpcds_vec_remove_value_n(vec,v,eq)
Param vec is a pointer to a vector.

Param v is the value to erase.

Param eq is a pointer to a bool function that tells if two elements in the array are equivalent.

Deletes an element from the vector, if it is found, returns true if it was successfully deleted.
#### cpcds_vec_clear_n(vec)
Param vec is a pointer to a vector.

Clears a vector of all of its contents, and reset it back to a vector with zero size and default room.
#### cpcds_vec_equals_pointer_n(fv,sv,eq)
Params fv and sv are pointers to vectors, they will be compared.

Param eq is a pointer to a bool function that compares if two elements in the vectors are equal.

Compares if two vectors are equivalent, they are equivalent if they have the same size and their corresponding elements are equal according to the eq function pointer provided.
#### cpcds_vec_equals_n(fv,sv,eq)
Params fv and sv are vectors, they will be compared.

Param eq is a pointer to a bool function that compares if two elements in the vectors are equal.

Compares if two vectors are equivalent, they are equivalent if they have the same size and their corresponding elements are equal according to the eq function pointer provided.
#### cpcds_vec_hash_code_n(vec,h)
Param vec is a pointer to a vector.

Param h is a pointer to the hash function for individual elements in the vector.

Hashes the vector, returns the hash value, should be unsigned long long int on 64-bit compiler.
#### cpcds_vec_to_str_ptr_n(vec,str)
Param vec is a pointer to a vector.

Param str is a function that converts an element in the vector to a cppstring.

Converts a vector into a string.
#### cpcds_vec_to_str_n(vec,str)
Param vec is a vector.

Param str is a function that converts an element in the vector to a cppstring.

Converts a vector into a string.
### Macros
__CPCDS_DEFAULT_VR is the default room for a vector.

deftypes_cpcds_vector defines a vector type for common types such as char, int, long, double, and cppstring.

defstruct_cpcds_vector(s) defines a vector type for struct s, with name s and type struct s.
## cpcds_list
File: cpcds_list.h
Use define_cpcds_list(n,t) to initialize a list type that stores type t with extention name n, full name will be cpcds_list_n.
Can also use cpcds_list_define(t) to initialize a list type that stores type t with same extention name.

cpcds_list is implemented as a doubly linked list.

Alternatively, you can define parts of the features of a list, by using the following macros.
#### define_cpcds_lmk(n,t), cpcds_lmk_define(t)
Defines structure of the list, as well as basic append, prepend, and pop functions.
#### define_cpcds_lins(n,t), cpcds_lins_define(t)
Defines insert functions for list.
#### define_cpcds_lutil(n,t), cpcds_lutil_define(t)
Defines utility functions for list.
#### define_cpcds_liter(n,t), cpcds_liter_define(t)
Defines a function for moving nodes.

All params lis are meant to be a pointer to a list unless otherwise specified.
### Structures
struct cpcds_list_n (aka cpcds_list_a)
### Constructors
#### cpcds_mk_list_empty_n()
Makes an empty list.
#### cpcds_mk_list_copy_n(lis)
Makes a copy of a list.
### Functions
#### cpcds_list_append_single_n(lis,v)
Param v is the value to append.

Appends an element to the end of a list.
#### cpcds_list_pop_end_n(lis)
Pops an element off of the end of the list and returns it.
#### cpcds_list_prepend_single_n(lis,v)
Param v is the value to prepend.

Prepends an element to the start of the list.
#### cpcds_list_pop_start_n(lis)
Pops an element off of the beginning of the list and returns it.
#### cpcds_list_get_head_n(lis)
Gets the value at the beginning of the list.
#### cpcds_list_get_tail_n(lis)
Gets the value at the end of the list.
#### cpcds_list_clear_n(lis)
Clears a list of all its contents.
#### cpcds_list_append_list_n(lis,tba)
Param tba is the list to be appended.

Appends a list onto another list.
#### cpcds_list_prepend_list_n(lis,tba)

Param tba is the list to be prepended.

Prepends a list onto another list.
#### cpcds_list_insert_at_n(lis,index,v)
Param index is the index to insert at.

Param v is the value to insert.

Insert an element at some index in the list.
#### cpcds_list_first_index_n(lis,v,eq)
Param v is the value to find.

Param eq is a pointer to a bool function that will compare if two values are equal.

Finds the first occurrence of an element.
#### cpcds_list_last_index_n(lis,v,eq)
Param v is the value to find.

Param eq is a pointer to a bool function that will compare if two values are equal.

Finds the last occurrence of an element.
#### cpcds_list_get_section_n(lis,beginning,end)
Params beginning and end are the bounds of the section.

Gets a portion of a list, return value is of type struct cpcds_list_n.
#### cpcds_list_for_each_n(lis,func_to_call)
Param func_to_call is the function to call on each element.

Loops through the list and calls a function on every element.
#### cpcds_lis_to_str_ptr_n(lis,str)
Param str is a function that converts an element in the list to a cppstring.

Converts a list into a string.
#### cpcds_lis_to_str_n(lis,str)
Param lis is a list.

Param str is a function that converts an element in the list to a cppstring.

Converts a list into a string.
#### cpcds_list_move_iter_n(it,dist)
Param it is an iterator in a list, specifically a cpcds_lnode_n.

Param dist is the distance to move the iterator.

Moves an iterator by some distance, negative is towards head, positive is towards tail.
### Macros
deftypes_cpcds_list defines a list type for common types such as char, int, long, double, and cppstring.

defstruct_cpcds_list(s) defines a list type for struct s, with name s and type struct s.
## cpcds_deque
File: cpcds_deque.h
Use define_cpcds_deque(n,t) to initialize a deque type that stores type t with extention name n, full name will be cpcds_deque_n.
Can also use cpcds_deque_define(t) to initialize a deque type that stores type t with same extention name.

cpcds_deque is implemented as a linked list.
#### define_cpcds_dqmk(n,t), cpcds_dqmk_define(t)
Defines the structure and basic get head and tail functions for list.
#### define_cpcds_dqappend(n,t), cpcds_dqappend_define(t)
Defines append, prepend, and pop functions for list.
#### define_cpcds_dqalias(n,t), cpcds_dqalias_define(t)
Defines function aliases, specifically for usage as stacks and queue.

All dq params are pointers to a deque unless otherwise stated.
### Structures
struct cpcds_deque_n (aka cpcds_deque_n)
### Constructors
#### cpcds_mk_deque_empty_n()
Makes an empty deque.
#### cpcds_mk_deque_copy_n(dq)
Make a copy of a deque.
### Functions
#### cpcds_deque_get_front_n(dq)
Gets the element at the front of the deque.
#### cpcds_deque_get_back_n(dq)
Gets the element at the back of the deque.
#### cpcds_deque_clear_n(dq)
Clears a deque of all its contents.
#### cpcds_deque_append_n(dq,v)
Param v is the item to append to the deque.

Append an element to the back of the deque.
#### cpcds_deque_prepend_n(dq,v)
Param v is the item to prepend to the deque.
Prepend an element to the front of the deque.
#### cpcds_deque_pop_front_n(dq)
Pops an element off of the front of the deque, and returns it.
#### cpcds_deque_pop_back_n(dq)
Pops an element off of the back of the deque, and returns it.
#### cpcds_stack_top_n(dq)
Gets the element at the top of the stack.
#### cpcds_queue_front_n(dq)
Gets the element at the front of the queue.
#### cpcds_deque_push_n(dq,v)
Param v is the value to push.

Pushes an element onto this stack or queue.
#### cpcds_stack_pop_n(dq)
Pops an element off of the stack.
#### cpcds_queue_poll_n(dq)
Polls an element off of the queue.
### Macros
deftypes_cpcds_deque defines a deque type for commonly used types, such as char, int, long, double, and cppstring.

defstruct_cpcds_deque(s)defines a deque type for struct s, with name s and type struct s.

## cpcds_unordered_map
File: cpcds_unordered_map.h
Use define_cpcds_um(n,k,v,efunc,hfunc) to initialize an unordered map type that maps from type k to type v with extention name n, using efunc as the equals function and hfunc as the hash function, note efunc and hfunc shall be function names not pointers to functions, full name will be cpcds_um_n.
Can also use cpcds_um_define(t) to initialize an unordered map type that maps from type k to v with extention name of k__v.

cpcds_unordered_map is implemented as a hash table using deque for resolving collisions.
#### define_cpcds_umk(n,k,v,efunc,hfunc), cpcds_umk_define(k,v,efunc,hfunc)
Defines structure of unordered map, as well as find, get, and insert functions.
#### define_cpcds_uiter(n,k,v), cpcds_uiter_define(k,v)
Defines structure of unordered map iterator, and functions that go along with it.

All instances of param um is a pointer to an unordered map unless specified.
### Structures
struct cpcds_um_n (aka cpcds_um_n)

struct cpcds_umiter_n (aka cpcds_umiter_n)
### Constructors
#### cpcds_mk_um_room_n(rm)
Param rm is the bucket size of the unordered map.

Makes an unordered map with a certain number of buckets.
#### cpcds_mk_um_empty_n()
Makes an empty unordered map with default bucket size.
#### cpcds_mk_um_copy_n(um)
Makes a copy of an unordered map.
### Functions
#### cpcds_um_get_n(um,k)
Param k is the key to get the value for.

Gets a value mapped to by a key.
#### cpcds_um_insert_n(um,key,val)
Params key and val are the key and value to insert into the map.

Inserts a key-value pair into the map.
#### cpcds_um_fnd_key_n(um,key)
Param key is the key to look for.

Finds a key in an unordered map, true is returned if the key is present.
#### cpcds_um_erase_key_n(um,key)
Param key is the key to erase.

Erases a key value pair in the map by its key.
#### cpcds_um_clear_n(um)
Clears an unordered map of all of its contents.
#### cpcds_um_destr_n(um)
Destroys an unordered map and frees the memory used by it.
#### cpcds_um_iter_next_n(it)
Param it is a pointer to an unordered map iterator, more specifically struct cpcds_umiter_n.

Moves the iterator to the next value.
#### cpcds_um_iter_get_n(it)
Param it is an unordered map iterator, more specifically struct cpcds_umiter_n.

Gets the key value pair currently pointed to by the iterator, return type is struct cpcds_kvpair_n, key and val are fields in that struct.
#### cpcds_um_iter_equal_n(f,s)
Params f and s are two unordered map iterators.

Compares if the two iterators point to the same object, returns true if they do.
#### cpcds_um_iter_begin_n(um)
Gets an iterator to the beginning of the unordered map.
#### cpcds_um_iter_end_n(um)
Gets an iterator to the end of the unordered map.
#### cpcds_um_to_str_ptr_n(um)
Makes string representation of the contents of an unordered map.
#### cpcds_um_to_str_n(um)
Param um is an unordered map.

Makes string representation of the contents of an unordered map.
### Macros
__CPCDS_DEFAULT_UMR is the default bucket size of the unordered map.
