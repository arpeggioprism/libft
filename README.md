# libft

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
