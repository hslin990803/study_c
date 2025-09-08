// P.34 ~ 
//#include <stdio.h> 
//int main() {
//	printf("Hello world!!");
//
//	return 0;
//}

/*
* P.39 문제 1
* 다음과 같은 형태로 본인의 이름을 출력하는 프로그램을 작성해 보자. 단, printf 함수는 한 번만 호출해야 한다.
* 홍길동
* 홍 길 동
* 홍  길  동
*/
//#include <stdio.h>
//int main() {
//	printf("홍길동\n홍 길 동\n홍  길  동\n");
//
//	return 0;
//}

/*
* P.39 문제 2
* 본인의 이름, 주소 그리고 전화번호를 모니터에 출력하는 프로그램을 작성해 보자.
* 더불어 이스케이프 시퀀스 \n을 적절히 삽입해서 출력형태를 보기 좋게 다듬기 바란다.
* 총 3번 printf 함수를 호출해서 문제를 해결하자.
*/
//#include <stdio.h>
//int main() {
//	printf("이름 : 홍길동\n");
//	printf("주소 : 대한민국 서울\n");
//	printf("전화번호 : 010-1234-5678\n");
//
//	return 0;
//}

/*
* P.41 HelloComment.C
* 제 목 : Hello world 출력하기
* 기 능 : 문자열의 출력
* 파일이름 : HelloComment.c
* 수정날짜 : 2014. 07. 15
* 작성자 : 윤성우
*/
//#include <stdio.h>		// 헤더파일 선언
//int main(void)		// main 함수의 시작
//{
//	/*
//	* 이 함수 내에서는 하나의 문자열을 출력한다.
//	* 문자열은 모니터로 출력한다.
//	*/
//	printf("Hello world! \n");	// 문자열의 출력
//
//	return 0;	// 0의 반환
//}	// main 함수의 끝

// P.43 PrintfOne.c
//#include <stdio.h>
//int main(void) {
//	printf("Hello Everybody\n");
//	printf("%d\n", 1234);
//	printf("%d %d\n", 10, 20);
//
//	return 0;
//}

// P.45 PrintfTwo.c
//#include <stdio.h>
//int main(void) {
//	printf("My age : %d \n", 20);
//	printf("%d is my point \n", 100);
//	printf("Good \nmorning \neverybody\n");
//
//
//	return 0;
//}

/*
* P.46 문제 1
* 다음의 출력결과를 보이도록 예제를 작성해보자.
* 단, 출력되는 숫자들(20, 123, 456)은 서식문자 %d를 이용하여 출력하도록 하자.
* 제 이름은 홍길동입니다.
* 제 나이는 20살이고요.
* 제가 사는 곳의 번지수는 123-456입니다.
*/
//#include <stdio.h>
//int main(void) {
//	printf("제 이름은 홍길동입니다.\n");
//	printf("제 나이는 %d살이고요.\n", 20);
//	printf("제가 사는 곳의 번지순는 %d-%d입니다.", 123, 456);
//
//	return 0;
//}

/*
* P.46 문제 2
* 다음의 출력결과를 보이도록 예제를 작성해보자.
* 이번에도 역시 출력되는 숫자들은 서식문자 %d를 이용해서 출력하도록 하자.
* 4X5=20
* 7X9=63
*/
//#include <stdio.h>
//int main(void) {
//	printf("%dX%d=%d\n", 4, 5, 4*5);
//	printf("%dX%d=%d\n", 7, 9, 7*9);
//
//	return 0;
//}