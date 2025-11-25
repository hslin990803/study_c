// P.471 ~ 구조체와 사용자 정의 자료형 2

// P.472 TypenameTypedef.c
//#include <stdio.h>
//
//typedef int INT;
//typedef int* PTR_INT;
//
//typedef unsigned int UINT;
//typedef unsigned int* PTR_UINT;
//
//typedef unsigned char UCHAR;
//typedef unsigned char* PTR_UCHAR;
//
//int main(void) {
//	INT num1 = 120;		// int num1 = 120;
//	PTR_INT pnum1 = &num1;		// int * pnum1 = &num1;
//
//	UINT num2 = 190;		// unsigned int num2 = 190;
//	PTR_UINT pnum2 = &num2;			// unsigned int * pnum2 = &num2;
//
//	UCHAR ch = 'Z';		// unsigned char ch = 'Z';
//	PTR_UCHAR pch = &ch;		// unsigned char * pch = &ch;
//
//	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
//
//	return 0;
//}

// P.475 StructTypedef.c
//#include <stdio.h>
//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//typedef struct point Point;
//
//typedef struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//int main(void) {
//	Point pos = { 10,20 };
//	Person man = { "이승기", "010-1212-0001", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}