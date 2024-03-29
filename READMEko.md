# libft

# Libft - @42Born2Code
<img src="https://github.com/vvarodi/libft_42/blob/master/Libft.JPG" />

![Text](https://snipboard.io/DuJ8ON.jpg)

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [List of functions](#list-of-functions)  Click to each function to see an explication

### What is libft?

Libft is an individual project at [42][1] that requieres us to re-create some standard C library functions for future projects, and have a deeper understanding of data structures and basic algorithms. At 42 we are not allowed to use some standard libraries on our projects, so we have to keep growing this libary with our own functions as we go farther in the program.

### What's in it?

There are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions that will be useful for later projects
3.  **Bonus Functions:** Functions that will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

### List of functions
Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
[ft_memset](#ft_memset)		|[ft_substr](#ft_substr)    | [ft_lstnew](#ft_lstnew)            | [ft_islower](#ft_islower) 
[ft_bzero](#ft_bzero)		|[ft_strjoin](#ft_strjoin)  | [ft_lstadd_front](#ft_lstadd_front)| [ft_isupper](#ft_isupper) 
[ft_memcpy](#ft_memcpy)		|[ft_strtrim](#ft_strjoin)  | [ft_lstsize](#ft_lstsize)          | [ft_isspace](#ft_isspace)   
[ft_memccpy](#ft_memccpy)	|[ft_split](#ft_split)      | [ft_lstlast](#ft_lstlast)          | [ft_strndup](#ft_strndup)
[ft_memmove](#ft_memmove)	|[ft_itoa](#ft_itoa)       | [ft_lstadd_back](#ft_lstadd_back)  | [ft_strcdup](#ft_strcdup)
[ft_memchr](#ft_memchr)		|[ft_strmapi](#ft_strmapi)  | [ft_lstdelone](#ft_lstdelone)     | 
[ft_memcmp](#ft_memcmp)		|[ft_putchar_fd](#ft_putchar_fd)| [ft_lstclear](#ft_lstclear)    | 
[ft_strlen](#ft_strlen)		|[ft_putstr_fd](#ft_putstr_fd)	| [ft_lstiter](#ft_lstiter)      | 
[ft_strdup](#ft_strdup)		|[ft_putendl_fd](#ft_putendl_fd)| [ft_lstmap](#ft_lstmap)        | 
[ft_strcpy](#ft_strcpy)		|[ft_putnbr_fd](#ft_putnbr_fd)	|				| 
[ft_strlcpy](#ft_strlcpy)	| 	|			| 
[ft_strcat](#ft_strcat)		| 	| | 
[ft_strlcat](#ft_strlcat)	| 	| | 
[ft_strchr](#ft_strchr)		| 	| | 
[ft_strrchr](#ft_strrchr)	| 	| | 
[ft_strstr](#ft_strstr)		|   | | 
[ft_strnstr](#ft_strnstr)	| 	| | 
[ft_strcmp](#ft_strcmp)		| 	| | 
[ft_strncmp](#ft_strncmp)	| 	| | 
[ft_atoi](#ft_atoi)         | 	| | 
[ft_isalpha](#ft_isalpha)	| 	| | 
[ft_isdigit](#ft_isdigit)	| 	| |
[ft_isalnum](#ft_isalnum)	|   | | 
[ft_isascii](#ft_isascii)	|   | | 
[ft_isprint](#ft_isprint)	|   | | 
[ft_toupper](#ft_toupper)   |   | | 
[ft_tolower](#ft_tolower)	|   | | 
[ft_calloc](#ft_calloc)     |   | |

## [ft_memset](libft/ft_memset.c)
header: `string.h` or `memory.h`

`void       *ft_memset(void *s, int c, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Fill with "len" bytes of "c" the memory of "s"| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s

return (`ptr`); / fail: (`NULL`);


## [ft_bzero](libft/ft_bzero.c)
header: `string.h`

`void       *ft_bzero(void *s,  size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None

 ## [ft_memcpy](libft/ft_memcpy.c)
header: `string.h`

`void       *ft_memcpy(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area src to memory of dst. The memory  areas  must  not  overlap.  Use [ft_memmove](#ft_memmove) if the memory areas do overlap.| Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst

return (`dst`);


 ## [ft_memccpy](libft/ft_memccpy.c)
header: `string.h`

`void       *ft_memccpy(void *dst, const void *src, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Param. #4 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area  src  to memory  area  dst, stopping when the character c is found, or after n characters are copied, whichever comes first. If copying takes place between objects that overlap, the behavior is undefined.| Memory area dst | Memory area src | A character to search | Number of bytes that memccpy() copied | A pointer to the next character in dst after c, or NULL if c was not found in the first n bytes

return (`dst + i + 1`); / return (`NULL`);

## [ft_memmove](libft/ft_memmove.c)
header: `string.h`

`void       *ft_memmove(void *dst, const void *src, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst.| Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst

return (`dst`);

 ## [ft_memchr](libft/ft_memchr.c)
header: `string.h`

`void       *ft_memchr(const void *s, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Scans the initial n bytes of s for the first instance of c | Memory area s| A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area

 ## [ft_memcmp](libft/ft_memcmp.c)

`void       *ft_memcmp(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compares byte string s1 against byte string s2 | Memory area s1| Memory area s2 | The number of bytes | < 0 if s1 is less than s2, > 0 if s1 is graeter than s2, = 0 if s1 is equal to s2 

## [ft_strlen](libft/ft_strlen.c)
header: `string.h`

`size_t     ft_strlen(const char *s)` `size_t     len`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0')	| The string to calculate | Number of characters in the string pointed to by s

## [ft_strdup](libft/ft_strdup.c) 
`char       *ft_strdup(const char *s))`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Duplicate string s1. Memory  for  the new string is obtained with malloc, and can  be  freed with free | The string to duplicate| A pointer   to  the  duplicated  string.  NULL  if  insufficient  memory  was available

## [ft_strndup](libft/ft_strndup.c)

`char       *ft_strndup(const char *s, size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string | The string to copy | The maximum amount of characters to copy from the string | A pointer to the new string

## [ft_strcdup](libft/ft_strcdup.c)

`char       *ft_strcdup(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string until the occurence of c. Example: ft_strcdup("Blue", 'u') -> "Bl"  | The string to copy before c | The character c | A pointer to the new string

## [ft_strchr](libft/ft_strchr.c)

`char		*ft_strchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found

## [ft_strrchr](libft/ft_strrchr.c)

`char		*ft_strrchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found

## [ft_strcpy](libft/ft_strcpy.c)

`char       *ft_strcpy(char *dst, const char *src)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Copy a string, including the terminating null byte ('\0') | Destination array | String to be copied | A pointer to the destination string dst

## [ft_strlcpy](libft/ft_strlcpy.c)
header: `string.h`

`size_t     ft_strlcpy(char *dst, const char *src, size_t dstsize)`

return (`len`);

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result| Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src)

## [ft_strcat](libft/ft_strcat.c)

`char       *ft_strcpy(char *dst, const char *src)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Concatenate two strings (append s2 to s1), including the terminating null byte ('\0') | Destination array | String to be appended to dst | A pointer to the resulting string dst

## [ft_strlcat](libft/ft_strlcat.c)

`size_t     ft_strlcat(char *dst, const char *src, size_t size)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatenate the string src to the end of dst. It will concatenate at most size - strlen(dst) - 1 bytes, NUL-terminating the result | Destination array | String to be appended to dst | Maximum number of characters to be appended | The initial length of dst plus the length of src

return (`len`);

## [ft_strstr](libft/ft_strstr.c)

`char       *ft_strstr(const char *haystack, const char *needle)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locate substring. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared | String to be scanned | The small string to be searched in haystack string | A pointer to the beginning of the located substring. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_strnstr](libft/ft_strnstr.c)

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string|The maximum amount of characters to be searched |A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_atoi](libft/ft_atoi.c)

`int        ft_atoi(const char *str)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a integer | The string to be converted to int | The converted value

## [ft_isalpha](libft/ft_isalpha.c)

`int        ft_isalpha(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isdigit](libft/ft_isdigit.c)

`int         ft_isdigit(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a digit (0 through 9) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isalnum](libft/ft_isalnum.c)

`int        ft_isalnum(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit))| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isascii](libft/ft_isascii.c)

`int        ft_isascii(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isprint](libft/ft_isprint.c)

`int        ft_isprint(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for any printable character including space| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_toupper](libft/ft_toupper.c)

`int        ft_toupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

## [ft_tolower](libft/ft_tolower.c)

`int        ft_tolower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.

## [ft_calloc](libft/ft_calloc.c)

`void       *ft_calloc(size_t count, size_t size)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails

## [ft_substr]
`char   *ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | The substring. NULL if the allocation fails

## [ft_strjoin]

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 |The prefix string |The suffix string | The new string. NULL if the allocation fails

## [ft_strtrim]

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string|The string to be trimmed |The reference set of character to trim | The trimmed string. NULL if the allocation fails

## [ft_strsplit]

`char **ft_split(char const *s, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns  an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer|The string to be split |The delimiter character| The array of new strings result of the split. NULL if the allocation fails

## [ft_strmapi]

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications of f |The string on which to iterate| The function to apply to each character| The string created from the successive applications of f. Returns NULL if the allocation fails

## [ft_atoi]

`char   ft_itoa(int n)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert | The string representing the integer. NULL if the allocation fails.










## [ft_islower](libft/ft_islower.c)

`int  ft_islower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a lowercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isupper](libft/ft_isupper.c)

`int ft_isupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an uppercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isspace](libft/ft_isspace.c)

`int ft_isspace(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
 Checks for white-space characters. These are: space, form-feed ('\f'), newline ('\n'),  carriage  return('\r'), horizontal tab ('\t'), and vertical tab ('\v').| The character to test | 0 if the character tests false and 1 if the character tests true











## ft_capitalize

`char  *ft_capitalize(char *s)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Capitalizes the first letter of every word in a string	| The string to capitalize		| The new string with capitalized words 


[1]: https://www.42madrid.com/ 
[2]:



ft_isalpha
<목차>
1. isalpha 함수 원형과 사용법
2. isalpha 함수 예제





1. C/C++ isalpha 함수 설명

헤더파일
C언어 <ctype.h>
C++ <cctype>



함수원형

int isalpha (int c);

매개변수 : C언어에서 아스키 코드에 해당하는 문자들은 숫자로 표현이 되고, 문자를 넣으면 자동으로 아스키 코드에 있는 숫자로 들어가기 때문에 int 타입이긴 하지만 'a', 'A', '1' 등을 집어 넣어도됩니다.
즉, 'a' 와 같이 char 타입으로 집어 넣어도 자동으로 int 타입으로 형변환 되어서 들어가게 됩니다. 아스키 코드 표를 참고하면 'a'는 자동으로 숫자 97로 형변환되어 들어가게 됩니다.

반환형 : 매개변수로 들어온 인자가 알파벳이라면 0이 아닌 수를 반환하고 알파벳이 아니라면 0을 반환합니다.

더 정확하게 이야기하면 isalpha 함수는
알파벳 대문자 "A-Z"는 1을 반환.
알파벳 소문자 'a-z"는 2를 반환.
알파벳이 아닌것은 0을 반환합니다.

한번더 이야기 하면 isalpha 함수의 매개변수로
아스키 코드표에 'A-Z'에 해당하는 65번~90번의 값이 들어오면 1을 반환
아스키 코드표에 'a-z'에 해당하는 97번~122번의 값이 들어오면 2를 반환
그 이외의 값이 들어오면 0을 반환하는 함수 입니다.



출처: https://blockdmask.tistory.com/448 [개발자 지망생]

  
ft_isdigit
<목차>

0. C언어, C++ isdigit 헤더 파일

1. 숫자 판단 함수 isdigit 원형과 사용법

2. C/C++ 숫자 판단 함수 isdigit 예제



0. C/C++ isdigit 헤더 파일



C언어 : <ctype.h>

C++ : <cctype>



1. isdigit 숫자 판단 함수 원형과 사용법



▼ 함수 원형

- int isdigit(int c);



매개변수로 들어온 char 타입이 10진수 숫자로 변경이 가능하면 0이 아닌 숫자(true), 아니면 0(false)를 반환하는 함수 입니다.

함수 원형을 살펴보면 매개변수 타입이 char 타입이 아닌 int 타입으로 받는걸 볼 수 있는데요, 이는 char 타입이 아스키 코드 번호로 들어갈 수 있기 때문입니다.

아스키 코드표에서 48~57번에 매칭되는 문자 '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'가 들어오면 True를 반환하는 형태 입니다.



출처: https://blockdmask.tistory.com/362 [개발자 지망생]

 
 1. C언어, C++에서의 memset 함수

memset 함수는 메모리의 내용(값)을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수 입니다.
함수이름이 정말 명확하죠? memory + setting 메모리를 (특정 값으로) 세팅한다.
기억하기 쉬울것 입니다. 그럼이제 함수를 하나하나 쪼개서 분해해 볼까요?

함수 원형
void* memset(void* ptr, int value, size_t num);

첫번째 인자 void* ptr은 세팅하고자 하는 메모리의 시작 주소.
즉, 그 주소를 가리키고 있는 포인터가 위치하는 자리 입니다.

두번째 인자 value는 메모리에 세팅하고자 하는 값을 집어 넣으면 됩니다.
int 타입으로 받지만 내부에서는 unsigned char 로 변환되어서 저장됩니다. 즉 'a' 이런것을 넣어도 무방하다는 뜻입니다.

세번째 인자 size_t num은 길이를 뜻합니다. 이 길이는 바이트 단위로써 메모리의 크기 한조각 단위의 길이를 말합니다. 이는 보통 "길이 * sizeof(데이터타입)" 의 형태로 작성하면 됩니다.

반환값은 성공하면 첫번째 인자로 들어간 ptr을 반환하고, 실패한다면 NULL을 반환합니다.

 
아 그리고, 헤더파일은 memory.h 혹은 string.h 둘중 하나를 사용해도 무방합니다. 두개다 memset 함수가 정의되어있기 때문입니다. (둘다 써도 괜찮아요)

아래 예제로 들어가기 전에 간단하게 예제를 한번 작성해보겠습니다.
char arr[] = "blockdmask";
memset(arr, 'c', 5 * sizeof(char));
print(arr);

이런식으로
첫번째 인자에는 변경하고자 하는 목적지의 첫번째 주소(포인터)를 넣고,
두번째 인자에는 변경하고자 하는 값 'c'를 넣었습니다.
그리고 마지막 인자에는 변경하고자 하는 길이 5를 넣고 char 배열이 들어왔으므로 char 타입의 바이트 크기를 계산해서 곱해주었습니다. 그렇게 해서 바이트 길이를 넣어준 것 입니다.

 

출처: https://blockdmask.tistory.com/441 [개발자 지망생]

 strlcat함수
 
 이 함수는 strcat 함수와 동일하다. 보안 목적을 위해 strcat 대신 사용할 목적으로 만들어졌다.
dst의 기존 데이터에 src 데이터를 붙여 넣는다. size 만큼
여기서 중요한 건 size이다.
size = dst 길이 + 붙일 데이터 길이 + NULL 값을 넣어야 한다.
dst 길이보다 작으면 src 데이터가 넣어지진 않는다.
즉, size는 dst 길이 + NULL 길이보다 클 때부터 src 데이터가 들어간다.
 
예를 들어
dst의 길이가 5이고
src의 길이가 4이면
size의 길이가 4이면 dst 길이보다 작으므로 src 데이터가 들어가지 않는다.
src 데이터를 넣으려면 size를 5+1(dst길이 + NULL) 이상의 값으로 넣어야 한다.
만약 size를 8로 주면
dst에는 src의 2바이트만 들어가게 된다.
 
반환 값
이 값은 dst와 복사된 src의 길이의 총합이다.
여기에는 NULL 값은 제외되어 계산된다.
만약 dst 길이가 5이고 src에서 2바이트만 복사했다면
반환 값은 7이 된다.

 출처: https://whatdocumentary.tistory.com/45

 trlcat에 대하여
환경
c, c++
c에서는 <string.h>
c++에서는 <cstring>
 
Prototype
size_t    ft_strlcat(char *dest, const char *src, size_t destsize);
dest : 붙여넣을 문자열
src : dest 뒤에 연결할 문자열
destsize : size만큼의 대상 버퍼사이즈를 가진다. dest길이 + src길이 + null값을 destsize로 생각해서 넣어야 한다.
 
strlcat 목적
이 함수는 strncat랑 똑같이 데이터를 복사하는 건데 보안 목적으로 strncat을 대신할 함수로 만들어졌다.
strlcat ()은 dst 의 초기 길이 + src 길이를 의미한다.
 
Return Value
dest의 길이를 반환한다. 복사된 길이를 반환하므로 길이에서 NULL을 뺀 길이로 계산한다.
destsize가 dest의 크기보다 작을 때, strlen(src) + size 를 반환한다.
destsize가 dest의 크기보다 클 때, strlen(src) + strlen(dst)를 반환한다.
처음에 굉장히 헷갈렸던 부분이 destsize이다. dest가 destsize보다 큰 경우는 destsize 크기를 벗어나기 때문에 문자열을 이어붙일 수가 없다. 따라서 연결작업은 건너 뛰고 return (destlen + srclen) 해준다고 생각하면 된다.
즉, destsize는 10이지만 dest의 문자열의 길이가 4인 경우 src의 문자열은 6이 들어갈 수 있다. 반면 destsize가 10이지만 dest의 문자열의 길이가 11인 경우엔 CONCATENATE(연결과정)이 생략되고destsize의 길이와 + src길이값이 return 된다.


출처: https://minsoftk.tistory.com/32 [Minsoftk]
