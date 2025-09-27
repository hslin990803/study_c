// P.273 ~ 포인터의 이해

// P.280 PointerOperation.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 100, num2 = 100;
//	int* pnum;
//
//	pnum = &num1;		// 포인터 pnum이 num1을 가리킴
//	(*pnum) += 30;		// num1+=30; 과 동일
//
//	pnum = &num2;		// 포인터 pnum이 num2를 가리킴
//	(*pnum) -= 30;		// num2-=30; 과 동일
//
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//
//	return 0;
//}

/*
* P.284 문제 12-1 [포인터의 이해]
* 포인터의 원리를 이해하는 것이 중요하다.
* 그래서 포인터의 원리를 이해하는데 도움이 되는 문제를 아래에 제시하였다.
* 문제를 천천히 읽어본 다음 문제의 요구사항대로 프로그램을 작성해 보자.
* 다소 입맛에 맞지 않는 문제라 하더라도 여러분에게 많은 도움이 될 것이다.
*/

/*
* 문제 1
* 아래의 예제 실행 시 변수와 포인터 변수의 관계를 그림을 그려서 설명해보자.
* 또한 출력의 결과도 예상해보자.
* int main(void)
* {
*		int num=10;
*		int * ptr1=&num;
*		int * ptr2=ptr1;
* 
*		(*ptr1)++;
*		(*ptr2)++;
*		printf("%d \n", num);
*		return 0;
* }
*/
/*
* 내 답 : ptr1이 num1을 가리킴
* ptr2가 ptr1을 가리키는데 ptr1 = &num임 > 
* *ptr1++;으로 11로 증가 >
* *ptr2++;으로 12로 증가
* 12로 출력
*/

/*
* 문제 2
* int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로 초기화하고, 
* int형 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1과 num2를 가리키게 하자.
* 그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 10 증가시키고, num2의 값을 10 감소시키자.
* 이제 두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸자.
* 즉, 포인터 변수 ptr1이 num2를 가리키게 하고, 포인터 변수 ptr2가 num1을 가리키게 하자.
* 그리고 마지막으로 ptr1과 ptr2가 가리키는 변수에 저장된 값에 출력하자
*/
//#include <stdio.h>
//int main(void) {
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* temp;
//
//	*ptr1 += 10;
//	*ptr2 -= 10;
//
//	temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//
//	printf("ptr1 : %d, ptr2 : %d", *ptr1, *ptr2);
//
//	return 0;
//}