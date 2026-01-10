// P.535 ~ 메모리 관리와 메모리의 동적 할당

/*
* P.541 문제 25-1 [C언어의 메모리 구조]
* 아래의 예제를 컴파일하고 실행하는 경우, 프로그램 시작부터 종료 시까지 스택의 상태변화에 대해서 설명해보자
*	void func2(int n)
*	{
*		int num3 = n + 1;
*	}
*	void func1(int n)
*	{
*		int num2 n + 1;
*		func2(num2);
*	}
* 
*	int main(void)
*	{
*		int num1 = 20;
*		func1(num1);
*		return 0;
*	}
* 지역변수와 매개변수가 스택에 어떠한 순서대로 쌓이고 또 어떠한 순서대로 소멸되는지를 중심으로 설명하면 된다.
*/

// P.542 ReadStringFault1.c
//#include <stdio.h>
//char* ReadUserName(void) {
//	char name[30];
//	printf("What's your name? ");
//	gets(name);
//
//	return name;
//}
//
//int main(void) {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//
//	return 0;
//}

// P.543 ReadStringFault2.c
//#include <stdio.h>
//char name[30];
//
//char* ReadUserName(void)
//{
//	printf("What's your anme? ");
//	gets(name);
//
//	return name;
//}
//
//int main(void)
//{
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1 : %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2 : %s \n", name2);
//
//	printf("name1 : %s \n", name1);
//	printf("name2 : %s \n", name2);
//
//	return 0;
//}

// P.546 DynamicMemoryAllocation.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* ptr1 = (int*)malloc(sizeof(int));
//	int* ptr2 = (int*)malloc(sizeof(int) * 7);
//	int i;
//
//	*ptr1 = 20;
//	for (i = 0; i < 7; i++)
//		ptr2[i] = i + 1;
//
//	printf("%d \n", *ptr1);
//	for (i = 0; i < 7; i++)
//		printf("%d ", ptr2[i]);
//
//	free(ptr1);
//	free(ptr2);
//
//	return 0;
//}

// P.548 ReadStringRight.c
//#include <stdio.h>
//#include <stdlib.h>
//
//char* ReadUserName(void) {
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void) {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2 : %s \n", name2);
//
//	printf("again name1 : %s \n", name1);
//	printf("again name2 : %s \n", name2);
//	free(name1);
//	free(name2);
//
//	return 0;
//}

// P.551 문제 25-2 [메모리 공간의 동적 할당]
/*
* 문제 1
* 프로그램 사용자로부터 문자열을 입력 받아서 입력 받은 문자열의 단어를 역으로 출력하는 프로그램을 작성해보자.
* 예를 들어서 "I am a boy"가 입력되면, 다음의 출력을 보여야 한다.
* "boy a am I:
* 단! 문자열의 입력에 앞서 프로그램 사용자가 입력할 문자열의 최대길이 정보를 먼저 입력 받기로 하자.
* 그리고 그 길이만큼 메모리 공간을 동적으로 할당해서 문자열을 입력 받기로 하자.
* 참고로 이 문제에서는 메모리의 동적 할당 이외에 문자열의 단어를 역으로 출력하라는 비교적 어려운 주제를 여러분에게 제시하고 있다.
* 이 문제를 해결하는 방법은 여러 가지이다. 
* 따라서 여유를 가지고 여러분 나름의 방법을 찾아서 구현해보기 바란다.
*/