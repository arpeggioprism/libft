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

**설명**
- 메모리 블록에서의 문자를 찾는다.
- ptr 이 가리키는 메모리의 처음 num 바이트 중에서 처음으로 value 와 일치하는 값의 주소를 리턴한다.
- 참고적으로 위에 나타난 두 함수의 원형은 C++ 에서 정의된 방식으로 경우에 따라 오버로딩 되어서 나타난다. C 에서는 함수 오버로딩이 없기 때문에 다음과 같이 하나의 원형만을 가진다.

**반환값**
- 메모리 블록에서 value 와 일치하는 값이 있다면 그 곳의 주소를 리턴하고 값을 찾지 못한다면 NULL 을 리턴한다.

 ## [ft_memcmp](libft/ft_memcmp.c)
header: `string.h`

`void       *ft_memcmp(void *s1, const void *s2, size_t n)`

- `s1` : 메모리 블록을 가리키는 포인터
- `s2` : 메모리 블록을 가리키는 포인터
- `num` : 비교할 바이트 수

**설명**
- 두 개의 메모리 블록을 비교한다.
- s1 이 가리키는 처음 num 바이트의 데이터와 s2 가 가리키는 처음 num 바이트의 데이터를 비교하여 이들이 같다면 0 을 리턴하고 다르다면 0 이 아닌 값을 리턴한다. 이 때 리턴되는 값은 아래를 참고.
- strncmp와의 차이점
1. 중간에 NULL 이 포함되면, 그 뒤의 내용이 틀려도 strncmp는 같다고 생각합니다.
"strcmp\0abc" , "strcmp\0123" 을 strncmp는 같다고 생각하지만 memcmp로 위의 10 바이트를 검사하면 틀리다고 나옵니다. 이건 str 계열의 함수가 중간에 NULL을 만나면 종료하기 때문입니다.

**반환값**
- 만일 두 메모리 블록이 정확히 같다면 0 을 리턴한다.
- 만일 두 메모리 블록이 다를 경우, s1 과 s2 가 가리키는 메모리 블록에서 앞에서부터 처음으로 다른 바이트를 살펴 보는데, 그 바이트를 unsigned char 로 해석하였을 때, 그 값이 s1 이 더 크면 0 보다 큰 값을, 아니면 0 보다 작은 값을 리턴한다.

이건 str 계열의 함수가 중간에 NULL을 만나면 종료하기 때문입니다.
## [ft_strlen](libft/ft_strlen.c)
header: `string.h`

`size_t     ft_strlen(const char *s)` `size_t     len`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0')	| The string to calculate | Number of characters in the string pointed to by s

## [ft_strdup](libft/ft_strdup.c) 
header: `string.h`

`char       *ft_strdup(const char *s1))`

- `s1` : 복사하게 될 문자열

**설명**
문자열 s1의 길이를 잰 후 동적할당을 한 후에 s1을 복사한 후 복사된 새로운 문자열을 리턴해 주는 함수이다. 동적할당을 했기 때문에 메모리 누수에 주의하자.

**반환값**
복사하고싶은 문자열을 동적할당을 한 후 할당된 `새로운 문자열의 포인터`를 리턴해 준다.

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
header: `string.h`

`char		*ft_strchr(const char *s, int c)`

`const char *s`: 검색할 문자열
`int c`: 일치하는 문자

**설명**
첫번재 매개변수 str의 문자열에서 두번째 매개변수로 들어온 c가 존재하는지 검사하고, 문자가 존재하면 해당 문자가 존재하는 곳의 포인터를 반환하고, 존재하지 않으면 널포인터 반환. 

**반환값**
일치하는 문자 존재: `(char *)(s + i)`
존재안함: `NULL`


## [ft_strrchr](libft/ft_strrchr.c)
header: `string.h`

`char		*ft_strrchr(const char *s, int c)`

`char* s`: 검색할 문자열
`int c`: 일치하는 문자

**설명**
문자열에서 문자를 검색하고 가장 마지막으로 나타나는 위치를 찾는다. 그리고 이를 가리키는 포인터를 리턴한다. 이 때 문자열의 널 종료 문자 역시 C 문자열의 일부분이라 생각한다. 따라서 이 함수는 문자열의 널 종료 문자를 가리키는데 사용될 수 있다.

**반환값**
일치하는 문자 존재: `(char *)(s + i)`
존재안함: `NULL`

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
header: `string.h`

`size_t     ft_strlcat(char *dst, const char *src, size_t size)`

- `*dst` : 붙여넣을 문자열
- `*src` : 복사할 문자열
- `size` : destsize. size만큼의 복사를 한다. size는 문자열 끝의 NULL을 포함.

**설명**
- 두 문자열을 붙이는 함수이다. dst의 맨 뒤에 src를 붙인다.(size를 넘어갈 수 없음. 예외조건: 반환값 카테고리 참조.)
- 만약 size가 dest의 길이 이하라면 문자열을 붙이는 과정이 사라지고 size가 더 크다면 size - 1만큼 src를 붙이고 마지막에 '\0'값을 넣어준다.
- 이 함수는 strncat랑 똑같이 데이터를 복사하는 건데 보안 목적으로 strncat을 대신할 함수로 만들어졌다.
- str 함수에서 l 과 n 의 차이

![Untitled](https://fuzzy-silverfish-298.notion.site/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2Fc517f9bb-b9ad-484c-87a6-022d1dc243d5%2FUntitled.png?table=block&id=2b2096ee-eab0-46cc-ba65-f8af5c678f9c&spaceId=9339d1b7-ab8e-4b14-943f-cbbfa865b61a&width=860&userId=&cache=v2)

1. strlcat: 두 string을 연결하고 그 길이를 반환하는 함수(하지만, strlcat은 항상 두 string이 연결된 정확한길이를 반환하지 않는다. 반환값 카테고리 참조.)
2. strncat: strlcat과 달리 srcs에서 n만큼의 길이만 떼어내 dst에 이어붙인다. 이어붙인 문자열 자체를 반환.

**반환값**
- NULL을 뺀 길이로 계산한다.
- destsize < dst일 때, `size + src의 길이`를 반환한다.
- destsize >= dst일 때, `dst의 길이 + src의 길이`를 반환한다.

- dst가 destsize보다 큰 경우는 destsize 크기를 벗어나기 때문에 문자열을 이어붙일 수가 없다. 따라서 연결작업은 건너 뛰고 return (destlen + srclen) 해준다고 생각하면 된다.
- 즉, destsize는 10이지만 dst의 문자열의 길이가 4인 경우 src의 문자열은 6이 들어갈 수 있다. 반면 destsize가 10이지만 dest의 문자열의 길이가 11인 경우엔 CONCATENATE(연결과정)이 생략되고destsize의 길이와 + src길이값이 return 된다.

## [ft_strstr](libft/ft_strstr.c)

`char       *ft_strstr(const char *haystack, const char *needle)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locate substring. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared | String to be scanned | The small string to be searched in haystack string | A pointer to the beginning of the located substring. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_strnstr](libft/ft_strnstr.c)
header: `string.h`

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

- `haystack` : 전체 문자열
- `needle` : 전체 문자열 haystack에서 찾을 문자열 needle
- `len`: len만큼의 길이에서 탐색을 한다.

**설명**
- 이 함수는 big 문자열에 len 길이 중에서 little 문자열을 찾는 것이다.

**반환값**
- 만약, little 값이 비어 있으면 big를 반환한다.
- big 문자열에서 little 문자열을 찾지 못하면 NULL을 반환한다.
- little 문자열을 찾으면 big에 little 문자열 시작 부분 위치 주소를 반환한다.

## [ft_strncmp](libft/ft_strncmp.c)
header: `string.h`

`int       strncmp(const char* str1, const char* str2, size_t num)`

**설명**
- 두 문자열의 일부 문자들을 비교한다.
- C 형식 문자열인 str1 의 처음 num 개의 문자를 다른 C 형식 문자열인 str2 의 처음 num 개의 문자와 비교한다.
- 이 함수는 처음 문자들 부터 비교를 수행하되, 다른 문자가 나타나거나 NULL 에 도달하거나, num 개의 문자들을 비교할 때 까지 비교를 수행하게 된다.

**반환값**
- 만일 num 개의 문자가 모두 일치한다면 0 을 리턴한다.
- 비교한 num 개의 문자 중 최초로 일치하지 않는 문자의 값이 str1 이 더 큰 경우 0 보다 큰 값을, str2 가 더 큰 경우 0 보다 작은 값을 리턴한다.
- 
## [ft_atoi](libft/ft_atoi.c)
header: `stdlib.h`

`int        ft_atoi(const char *str)`

- `str` : 변환할 문자열

**설명**
- 문자열을 정수로 변환한다.
- C 형식 문자열을 정수로 변환하여 변환된 값을 리턴한다.
- 이 함수는 C 형식 문자열에서 비-공백 문자가 나오기 전 까지 최대한 많은 공백 문자(' ', '\t', \n') 들을 무시한다. 그 다음에 첫 번째 비-공백 문자부터 최대한 많은 숫자들을 수로 변환한다. 이 때, 숫자의 맨 앞부분에는 + 나 - 가 올 수 도 있다. 숫자들 다음에 나타나는 문자들은 모두 무시된다. 예를 들면,
"\n\n-123aaa"
이라는 문자열이 있다면 -123 으로 변환된다. 만일 문자열에서 첫 번째로 나타나는 비-공백 문자가 숫자 혹은 + 나 - 가 아니라면 어떠한 변환도 이루어 지지 않는다.
- 또한, 문자열이 공백 문자로만 이루어져 있어도 변환이 이루어 지지 않는다. 예를 들면,
"a123"
의 경우 123 이 있지만 첫번째 비-공백 문자가 a 이기 때문에 변환이 이루어지지 않는다. 변환이 이루어 지지 않는 경우 0 이 리턴된다. 참고로 atoi 함수를 잘 이용하면 scanf 로 정수를 입력받을 때 문자를 입력하면 오류가 발생하는 문제를 피할 수 있다. 예를 들면,
int i;
char input[10];

scanf("%s", input);
i = atoi(input);
와 같은 형태로 입력을 받으면 설사 문자를 입력 했다고 해도 오류가 나지 않고 정수를 입력하면 atoi 로 잘 변환된다.

**반환값**
- 성공적으로 변환을 하였다면 int 값을 리턴한다. 만일 변환을 실패하였다면 0 이 리턴된다.
- 만일, 변환을 하였지만 그 값이 표현 가능한 범위를 벗어난다면 INT_MAX값을 넘는다면 INT_MIN에서 +로 가는식으로. INT_MIN은 그 반대다.
- atoi() 함수는 libc에 의해 stdtol()를 내부로 돌려서 결과값을 리턴하는 방식을 가졌다.
- atoi()의 리턴 타입은 int, strtol()의 리턴 타입은 long 이다.
- atoi()에서 나오는 언더플로우/오버플로우의 리턴값은 strtol()에서 나온 결과값을 처리하는 과정에서 나오는 ERANGE 오류이다.
- strtol()함수에 오버플로우 값이 들어오면 LONG_MAX, 언더플로우 값이 들어오면 LONG_MIN을 리턴한다.
- atoi()함수에 LONG 오버플로우 값이 들어오면 -1, 언더플로우 값이 들어오면 0을 리턴한다.
- printf("return(MAX) : %ld\n", LONG_MAX);	 // 9223372036854775807
- printf("return(MIN) : %ld\n", LONG_MIN);	// -9223372036854775808
- printf("return(-6442) : %d\n", atoi("-6442"));	// -6442
- printf("return(-6442) : %ld\n", strtol("-6442",NULL,10));	// -6442
- printf("return(MAX) : %ld\n", strtol("9223372036854775807",NULL,10));	// 9223372036854775807
- printf("return(MAX+1) : %ld\n", strtol("9223372036854775808",NULL,10));	// 9223372036854775807
- printf("return(MIN) : %ld\n", strtol("-9223372036854775808",NULL,10));	// -9223372036854775808
- printf("return(MIN-1) : %ld\n", strtol("-9223372036854775809",NULL,10));	// -9223372036854775808
- printf("return(LONGMAX) : %d\n", atoi("9223372036854775807"));	// -1
- printf("return(LONGMIN) : %d\n", atoi("-9223372036854775809"));	// 0
- 하지만, libft에서는 굳이 이러한 오버플로우/언더플로우 처리값까진 신경쓰지 않으므로 무시해도 된다.

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
header: `ctype.h`

`int        ft_toupper(int c)`

**설명**
소문자 알파벳을 대문자 알파벳으로 변경해준다.

**반환값**
대문자 알파벳 `c`를 반환.

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

## [ft_tolower](libft/ft_tolower.c)
header: `ctype.h`

`int        ft_tolower(int c)`

**설명**
대문자 알파벳을 소문자 알파벳으로 변경해준다.

**반환값**
소문자 알파벳 `c`를 반환.

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.

## [ft_calloc](libft/ft_calloc.c)
header: `stdlib.h`

`void       *ft_calloc(size_t count, size_t size)`

- `count` : 다음 파라미터인 size의 갯수. 즉, 할당할 배열의 갯수.
- `size` : item 하나의 크기.

**설명**
- calloc함수는 malloc함수와 같은 기능을 지니고 있다. 다만 사용하는 형태가 조금 다를 뿐이다.
- calloc 함수는 size 크기의 변수를 count 갯수만큼 저장할 수 있는 메모리 공간을 할당하라는 의미를 갖는다.
- malloc함수와 calloc함수의 차이점
1. malloc은 할당된 공간의 값을은 바꾸지 않는다.
2. calloc은 할당된 공간의 값을 모두 0으로 바꾼다.
3. 배열을 할당하고 모두 0으로 초기화할 필요가 있을경우에는 calloc을 쓰면 편하다.

**반환값**
성공: `할당된 메모리의 시작 주소`
실패: `NULL`

## [ft_substr] 
`char   *ft_substr(char const *s, unsigned int start, size_t len)`

`s`: 원본 문자열
`start` : 문자열 s에 있는 하위 문자열의 시작점
`len` : 하위 문자열의 길이

**설명**
malloc(3)를 사용하여 할당하고 문자열 's'에서 하위 문자열을 반환. 하위 문자열은 인덱스 'start'에서 시작되며 최대 크기 'len'

**반환값**
성공: '잘라낸 문자열의 시작 주소값'
실패: 'NULL'

## [ft_strjoin]

`char *ft_strjoin(char const *s1, char const *s2)`

`s1` : 접두사 문자열
`s2` : 접미사 문자열

**설명**
- malloc(3)를 할당하고 새 문자열을 반환하며, 이는 's1'과 's2'를 연결한 결과물
- 반환할 메모리에 접두사 문자열을 복사하고, 그 뒤에 접미사 문자열을 복사한 후 마지막에 '\0'값을 넣는다.

**반환값**
성공: `이어 붙인 새 문자열의 주소값`
실패: `NULL`

## [ft_strtrim]

`char *ft_strjoin(char const *s1, char const *set)`

`s1` : 원본 문자열
`set` : 제거할 참조 문자열

**설명**
- malloc(3)를 사용하여 할당하고 문자열의 처음과 끝에서 'set'에 지정된 문자가 제거된 's1' 복사본을 반환.
- 주의해야할 점은 원본 문자열 전체가 set에 포함되는 문자일 때이다.
- 우선, 앞에서 문자들을 지우고, '\0'을 제외하고 뒷부분부터 탐색을 한다. 이 때 end 값이 start 보다 작아진다면 원본 문자열에 지워야할 문자를 제외하면 없다는 뜻이므로, '\0' 값을 할당하여 반환한다.
- 그렇지 않으면 지우고난 후 end - start + 1하여 '\0'값 포함한  만큼 할당하여 결과를 복사하여 반환한다.

**반환값**
성공: `s1에서 찾은 set에 포함된 문자들을 양 끝에서 제거한 후 결과 문자열의 포인터`
실패: `NULL`

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

strlcat에 대하여
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
