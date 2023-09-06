<h1>Libft</h1>

![Screenshot from 2023-06-06 10-48-37](https://github.com/CoelhoEduardo/libft/assets/76714413/c7dc8fb3-0515-4c67-b2b9-fd14fd270444)  

My first project as 42 student, to learn more about libc and create my own.
I learn about pointers, memory allocation, struct and linked list;

This project is separate in three part's: Part I, Part II and Bonus (is optional).

<h2>Functions</h2>
<h3>First Part</h3>

To begin, you must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

<ul>
  <li>isalpha</li>
    <p>check for alphabetic</p>
  <li>isdigit</li>
    <p>check for a digit</p>
  <li>isalnum</li>
    <p>check digit and alphabetic</p>
  <li>isascii</li>
    <p>check is a 7-bit <b>unsigned char</b> value that fits into the ASCII char set.</p>
  <li>isprint</li>
    <p>Check for any printable char including space</p>
  <li>strlen</li>
    <p>Calculates the length of the string pointed to by s, excluding the terminating null byte `\0`</p>
  <li>memset</li>
    <p>Fills the first `n` bytes of the memory are pointed to by `s` with the constant byte `c`</p>
  <li>bzero</li>
    <p>Erase the data in the `n` bytes of the memory starting at the location pointed to by `s`, by writing zeros 
    (bytes containing `\0`) to that area</p>
  <li>memcpy</li>
    <p>Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas must not overlap. 
    use memmove if the memory areas do overlap</p>
  <li>memmove</li>
    <p>Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas may overlap. Copying takes 
    place as though the bytes in `src` are first copied int a temporary array that does not overlap source or dest, 
    and the bytes are then copied from the temporary array to dest.</p>
  <li>strlcpy</li>
   <p>Copies up size -1 characteres from the NULL-terminated string `src` to `dst`, NULL-terminated the result.
   Return <b>total length of `src`</b></p>
  <li>strlcat</li>
  <p>Appends the NULL terminated string `src` to the end of the `dst`. It will append at most `size` - strlen(dest) - 1 byte, NULL-terminating the result.
  Return <b>the initial length of dst plus the length of src</b></p>
  <li>toupper</li>
  <p>If `c` is a lowercase letter, returns its uppercase equivalent</p>
  <li>tolower</li>
  <p>If `c` is a uppercase letter, returns its lowercase equivalent</p>
  <li>strchr</li>
  <p>Function returns the first occurrence of the character `c` in the string `s`</p>
  <li>strrchr</li>
  <p>Returns a pointer to the last occurrence of the character `c` in the string `s`</p>
  <li>strncmp</li>
  <p>Compares two strings `s1` and `s2. The locale is not take into account. And compares only the first `n` bytes of `s1` and `s2`</p>
  <li>memchr</li>
  <p>Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`. Both `c` and the bytes of the memory area pointed by `s` are interpreted
  as `unsiged char`. Return <b>a pointer to the matching byte or NULL if the character does not occur in the given memory area</b></p>
  <li>memcmp</li>
  <p>Compares `n` bytes (each interpreted as unsigned char) of the memory areas `s1` and `s2`
  Return <b>integer less than, equal to, or greater than zero if the first `n` bytes of `s1` is found, respectively, to be lass than, to match, or be greater than the first `n` bytes of `s2`</b></p>
  <li>strnstr</li>
  <p>Locates the first occurrence of the null-terminating string `little` in the string `big`, where not more than `len` characters are searched. Characters that appears after `\0` character
  are not searched</p>
  <li>atoi</li>
  <p>Converts the initial portion of the string pointed to by `nptr` to integer</p>
  <li>calloc</li>
  <p>Allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is 0, return NULL, or a unique pointer value
   that can latter be sucessfully passed to free()</p>
  <li>strdup</li>
  <p>Returns a pointer to a new string wich is a duplicate of the string `s`. Memory for the new string is obtained with malloc, and can be freed with free()</p>
</ul>

<h3>Second Part</h3>

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

<ul>
  <li>ft_substr</li>
  <p>Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of
   maximum size ’len’.</p>
  <li>ft_strjoin</li>
  <p>Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’</p>
  <li>ft_strtrim</li>
  <p>Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.</p>
  <li>ft_split</li>
  <p>Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end
  with a NULL pointer.</p>
  <li>ft_itoa</li>
  <p>Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled</p>
  <li>ft_strmapi</li>
  <p>Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting
  from successive applications of ’f’.</p>
  <li>ft_striteri</li>
  <p>Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by
  address to ’f’ to be modified if necessary.</p>
  <li>ft_putchar_fd</li>
  <p>Outputs the character ’c’ to the given file descriptor.</p>
  <li>ft_putstr_fd</li>
  <p>Outputs the string ’s’ to the given file descriptor.</p>
  <li>ft_putendl_fd</li>
  <p>Outputs the string ’s’ to the given file descriptor followed by a newline.</p>
  <li>ft_putnbr_fd</li>
  <p>Outputs the integer ’n’ to the given file descriptor.</p>
</ul>

<h3>Bonus Part</h3>

Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.

<ul>
  <li>ft_lstnew</li>
  <p>Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable
  ’next’ is initialized to NULL.</p>
  <li>ft_lstadd_front</li>
  <p>Adds the node ’new’ at the beginning of the list.</p>
  <li>ft_lstsize</li>
  <p>Counts the number of nodes in a list.</p>
  <li>ft_lstlast</li>
  <p>Returns the last node of the list.</p>
  <li>ft_lstadd_back</li>
  <p>Adds the node ’new’ at the end of the list.</p>
  <li>ft_lstdelone</li>
  <p>Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of
  ’next’ must not be freed</p>
  <li>ft_lstclear</li>
  <p>Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.</p>
  <li>ft_lstiter</li>
  <p>Iterates the list ’lst’ and applies the function ’f’ on the content of each node.</p>
  <li>ft_lstmap</li>
  <p>Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to
  delete the content of a node if needed.</p>
</ul>

