# CubedProgrammerCDataStructures
C Data Structures Libraries

There are two branches in this repository, master and experimental, master branch contains code that is meant to be safe and bug-free, apologies in advance if there is a bug in master, experimental contains code that is being developed and may not be safe to use, use at your own risk.

## WARNING: There are many bugs in the master branch right now!

You are welcome to fork this repository and make pull requests, but don't put ugly backslashes in macros in pull requests.
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
#### cpcds_destr_str(str)
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
#### cpcds_vec_pop_end_n(vec)
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
## cpcds_map
File: cpcds_map.h

Use define_cpcds_map(n,k,v,compar) to initialize a map type that maps from type k to type v with extention name n, using compar as the comparing function, note compar shall be a function name not a pointer to function, full name will be cpcds_map_n.

Can also use cpcds_map_define(t) to initialize a map type that maps from type k to v with extention name of k__v, however, map deallocate function is only in main header.
#### define_cpcds_mmk(n,k,v,compar), cpcds_mmk_define(k,v,compar)
Defines structure of map, as well as needed functions for maintaining balance.
#### define_cpcds_mins(n,k,v,compar), cpcds_mins_define(k,v,compar)
Defines functions for inserting and erasing elements.
#### define_cpcds_miter(n,k,v), cpcds_miter_define(k,v)
Defines iterator structure and functions to help iterate through map.

All mp parameters are pointers to a map, unless stated otherwise.

Maps are implemented as binary search trees.
### Structures
struct cpcds_map_n (aka cpcds_map_n)

struct cpcds_miter_n (aka cpcds_miter_n)
### Constructors
#### cpcds_mk_map_empty_n()
Makes an empty map.
### Functions
#### cpcds_map_ins_n(mp,k,v)
Params k and v are key value pairs to insert into the map.

Inserts a key value pair into the map.
#### cpcds_map_erase_n(mp,k)
Param k is the key assosiated with the key value pair to erase.

Erase a key value pair by its key from the map.
#### cpcds_map_get_n(mp,k)
Param k is the key to find.

Gets the value assosiated with the key.
#### cpcds_map_fnd_n(mp,k)
Param k is the key to look for.

Returns true if the key is found.
#### cpcds_map_iter_begin_n(mp)
Gets an iterator to the beginning of the map.
#### cpcds_map_iter_end_n(mp)
Gets an iterator to the end of the map.
#### cpcds_map_iter_equal_n(itx,ity)
Params itx and ity are two iterators.

Compares if two iterators are pointing to the same item.
#### cpcds_map_iter_next_n(it)
Param it is a pointer to an iterator.

Moves the iterator to the next value.
#### cpcds_map_iter_get_n(it)
Param it is a pointer to an iterator.

Gets the key value pair pointed to by the iterator.
#### cpcds_map_clear_n(mp)
Clears the contents of a map.
### Macros
There are no useful macros for the user to use.
## cpcds_priority_queue
File: cpcds_priority_queue.h
Use define_cpcds_pq(n,t,compar) to define a priority queue type that stores type t with name extension n, compar is the function for comparing items, full name will be cpcds_pq_n.

Can also use cpcds_pq_define(t,compar) to define a priority queue type that stores type t with name extension t

The priority queue will have the top element that is considered to go first by compar.

Will also need to define a vector type struct cpcds_vector_n.

#### define_cpcds_pqmk(n,t,compar), cpcds_pqmk_define(t,compar)
Defines the structure of the queue and some needed functions.
#### define_cpcds_pqpush(n,t,compar), cpcds_pqpush_define(t,compar)
Defines functions for pushing and popping on and off the queue.

All pq parameters are pointers to a priority queue, unless stated otherwise.

Priority queues are implemented as binary heaps.
### Structures
struct cpcds_pq_n (aka cpcds_pq_n)
### Constructors
#### cpcds_mk_pq_empty_n()
Constructs an empty priority queue.
#### cpcds_mk_pq_array_n(first,last)
Params first and last are iterators to the beginning and end of an array.

Constructs a priority queue from an array.
#### cpcds_mk_pq_copy_n(pq)
Creates a copy of a priority queue.
### Functions
#### cpcds_pq_empty_n(pq)
Checks if a priority queue is empty.
#### cpcds_pq_top_n(pq)
Gets the top element of the priority queue.
#### cpcds_pq_destr_n(pq)
Destroys a priority queue.
#### cpcds_pq_push_n(pq,v)
Param v is an item to push onto the queue.

Pushes an item onto a priority queue.
#### cpcds_pq_pop_n(pq)
Pops an item off of the priority queue.
### Macros
#### deftypes_cpcds_pq
Defines priority queues for commonly used types using default comparing functions, cppstring is not included in here.
#### defstruct_cpcds_pq(s)
Defines a priority queue type with name extension s and type struct s.
## cpcds_unordered_set
File: cpcds_unordered_set.h

Use define_cpcds_us(n,t) to define an unordered set type that stores type t with name extension n, full name will be cpcds_us_n.

Can also use cpcds_us_define(t) to define an unordered set type that stores type t with name extension t

Will also need to define an unordered map type struct cpcds_um_n__vptr that maps from t to void pointer.
#### define_cpcds_usmk(n,t), cpcds_usmk_define(t)
Defines structure and basic functions for an unordered set.
#### define_cpcds_usiter(n,t), cpcds_usiter_define(t)
Defines an iterator type for unordered set.

All us parameters are pointers to an unordered set, unless specified.

Unordered sets are implemented as hash tables.
### Structure
struct cpcds_us_n (aka cpcds_us_n)

struct cpcds_usiter_n (aka cpcds_usiter_n)
### Constructors
#### cpcds_mk_us_empty_n()
Makes an empty unordered set.
#### cpcds_mk_us_copy_n(us)
Makes a copy of an existing unordered set.
### Functions
#### cpcds_us_insert_n(us,val)
Param val is the value that should be inserted.

Inserts an item into the set.
#### cpcds_us_erase_n(us,val)
Param val is the value that should be erased.

Erases an item from the set.
#### cpcds_us_fnd_n(us,val)
Param val is the item to look for.

Looks for an item in the set, true is returned if it is found.
#### cpcds_us_clear_n(us)
Clears the contents of the unordered set.
#### cpcds_us_destr_n(us)
Destroys an unordered set.
#### cpcds_us_iter_begin_n(us)
Gets an iterator to the beginning of the unordered set.
#### cpcds_us_iter_end_n(us)
Gets an iterator to the end of the unordered set.
#### cpcds_us_iter_equal_n(x,y)
Params x and y are two unordered set iterators.

Compares if the two iterators are equal, true is returned if they are.
#### cpcds_us_iter_get_n(it)
Param it is a pointer to an unordered set iterator.

Gets the item pointed to by the iterator.
#### cpcds_us_iter_next_n(it)
Param it is a pointer to an unordered set iterator.

Moves the iterator to its next value.
### Macros
#### deftypes_cpcds_us
Defines unordered sets for commonly used types, but not cppstring.
#### defstruct_cpcds_us(s)
Defines an unordered set that stores struct s with name extension s.
## cpcds_set
File: cpcds_set.h

Use define_cpcds_set(n,t) to define a set type that stores type t with name extension n, full name will be cpcds_set_n.

Can also use cpcds_set_define(t) to define an set type that stores type t with name extension t

Will also need to define a map type struct cpcds_um_n__vptr that maps from t to void pointer.
#### define_cpcds_smk(n,t), cpcds_smk_define(t)
Defines structure and basic functions for a set.
#### define_cpcds_siter(n,t), cpcds_siter_define(t)
Defines an iterator type for set.

All set parameters are pointers to a set, unless specified.

Sets are implemented as binary search trees.
### Structure
struct cpcds_set_n (aka cpcds_set_n)

struct cpcds_siter_n (aka cpcds_siter_n)
### Constructors
#### cpcds_mk_set_empty_n()
Makes an empty set.
### Functions
#### cpcds_set_ins_n(set,val)
Param val is the value that should be inserted.

Inserts an item into the set.
#### cpcds_set_erase_n(set,val)
Param val is the value that should be erased.

Erases an item from the set.
#### cpcds_set_fnd_n(set,val)
Param val is the item to look for.

Looks for an item in the set, true is returned if it is found.
#### cpcds_set_clear_n(set)
Clears the contents of the set.
#### cpcds_set_destr_n(set)
Destroys a set.
#### cpcds_set_iter_begin_n(set)
Gets an iterator to the beginning of the set.
#### cpcds_set_iter_end_n(set)
Gets an iterator to the end of the set.
#### cpcds_set_iter_equal_n(x,y)
Params x and y are two set iterators.

Compares if the two iterators are equal, true is returned if they are.
#### cpcds_set_iter_get_n(it)
Param it is a pointer to a set iterator.

Gets the item pointed to by the iterator.
#### cpcds_set_iter_next_n(it)
Param it is a pointer to a set iterator.

Moves the iterator to its next value.
### Macros
#### deftypes_cpcds_set
Defines sets for commonly used types, but not cppstring.
#### defstruct_cpcds_set(s)
Defines a set that stores struct s with name extension s.
