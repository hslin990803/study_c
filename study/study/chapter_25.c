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