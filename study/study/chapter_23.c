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

// P.478 StructValAndFunction.c
//#include <stdio.h>
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//Point GetCurrentPostion(void) {
//	Point cen;
//	printf("Input current pos : ");
//	scanf("%d %d", &cen.xpos, &cen.ypos);
//
//	return cen;
//}
//
//int main(void) {
//	Point curPos = GetCurrentPostion();
//	ShowPosition(curPos);
//
//	return 0;
//}

// P.479 StructMemArrCopy.c
//#include <stdio.h>
//typedef struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//
//} Person;
//
//void ShowPersonInfo(Person man) {
//	printf("name : %s \n", man.name);
//	printf("phone : %s \n", man.phoneNum);
//	printf("age : %d \n", man.age);
//}
//
//Person ReadPersonInfo(void) {
//	Person man;
//	printf("name? "); scanf("%s", man.name);
//	printf("phone? "); scanf("%s", man.phoneNum);
//	printf("age? "); scanf("%d", &man.age);
//
//	return man;
//}
//
//int main(void) {
//	Person man = ReadPersonInfo();
//	ShowPersonInfo(man);
//
//	return 0;
//}

// P.481 StructFunctionCallByRef.c
//#include <stdio.h>
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void OrgSymTrans(Point* ptr)	// 원점 대칭
//{
//	ptr->xpos = (ptr->xpos) * -1;
//	ptr->ypos = (ptr->ypos) * -1;
//}
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//int main(void) {
//	Point pos = { 7,-5 };
//	OrgSymTrans(&pos);	// pos의 값을 원점 대칭이동시킨다.
//	ShowPosition(pos);
//	OrgSymTrans(&pos);	// pos의 값을 원점 대칭이동시킨다.
//	ShowPosition(pos);
//
//	return 0;
//}

// P.482 StructOperation.c
//#include <stdio.h>
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//int main(void) {
//	Point pos1 = { 1,2 };
//	Point pos2;
//	pos2 = pos1;	// ps1의 멤버 대 ps2의 멤버간 복사가 진행됨
//
//	printf("크기 : %d \n", sizeof(pos1));		// pos1의 전체 크기 반환
//	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
//	printf("크기 : %d \n", sizeof(pos2));		// pos2의 전체 크기 반환
//	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
//
//	return 0;
//}

// P.483 StructAddMin.c
//#include <stdio.h>
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//Point AddPoint(Point pos1, Point pos2) {
//	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
//	return pos;
//}
//
//Point MinPoint(Point pos1, Point pos2) {
//	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
//	return pos;
//}
//
//int main(void) {
//	Point pos1 = { 5,6 };
//	Point pos2 = { 2,9 };
//	Point result;
//
//	result = AddPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//	result = MinPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//
//	return 0;
//}

// P.484 문제 23-1 [구조체 변수의 연산]
/*
* 다음 구조체의 두 변수를 대상으로 저장된 값을 서로 바꿔주는 함수를 정의하고 이를 호출하는 예제를 작성해보자.
*	typedef struct point{
*		int xpos;
*		int ypos;
*	} Point;
* 예를 들어서 다음과 같이 두 개의 구조체 변수가 선언된 상태에서,
*	Point pos1={2,4};
*	Point pos2={5,7};
* 이 두 구조체 변수를 대상으로, 혹은 두 구조체 변수의 주소 값을 대상으로 SwapPoint라는 이름의 함수를 호출하면
* pos1의 xpos, ypos에는 각각 5와 7이, 그리고 pos2의 xpos, ypos에는 각각 2와 4가 저장되어야 한다.
*/

// P.485 StructImportant.c
//#include <stdio.h>
//typedef struct student {
//	char name[20];		// 학생이름
//	char stdnum[20];	// 학생 고유번호
//	char school[20];	// 학교 이름
//	char major[20];		// 선택 전공
//	int year;			// 학년
//} Student;
//
//void ShowStudentInfo(Student* sptr) {
//	printf("학생 이름 : %s \n", sptr->name);
//	printf("학생 고유번호 : %s \n", sptr->stdnum);
//	printf("학교 이름 : %s \n", sptr->school);
//	printf("선택 전공 : %s \n", sptr->major);
//	printf("학년 : %d \n", sptr->year);
//}
//
//int main(void) {
//	Student arr[7];
//	int i;
//
//	for (i = 0; i < 7; i++) {
//		printf("이름 : "); scanf("%s", arr[i].name);
//		printf("번호 : "); scanf("%s", arr[i].stdnum);
//		printf("학교 : "); scanf("%s", arr[i].school);
//		printf("전공 : "); scanf("%s", arr[i].major);
//		printf("학년 : "); scanf("%d", &arr[i].year);
//	}
//
//	for (i = 0; i < 7; i++) {
//		ShowStudentInfo(&arr[i]);
//	}
//
//	return 0;
//}

// P.486 CircleIncludePoint.c
//#include <stdio.h>
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct circle {
//	Point cen;
//	double rad;
//} Circle;
//
//void ShowCircleInfo(Circle* cptr) {
//	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
//	printf("radius : %g \n\n", cptr->rad);
//}
//
//int main(void) {
//	Circle c1 = { {1,2},3.5 };
//	Circle c2 = { 2,4,3.9 };
//	ShowCircleInfo(&c1);
//	ShowCircleInfo(&c2);
//
//	return 0;
//}

// P.488 문제 23-2 [다양한 형태의 구조체 정의]
/*
* 좌 상단의 x, y 좌표가 [0, 0], 우 하단의 x, y 좌표가 [100, 100]인 
* 좌표평면상의 직사각형 정보를 표현하기 위한 구조체 Rectangle을
* 정의하되, 다음 구조체를 기반으로 정의해보자.
*	typedef struct point
*	{
*		int xpos;
*		int ypos;
*	} Point;
* 그리고 Rectangel 구조체 변수를 인자로 전달받아서 해당 직사각형의 넓이를 계산해서 출력하는 함수와
* 직사각형을 이루는 네 점의 좌표정보를 출력하는 함수를 각각 정의해보자.
* 단, 좌표평면상에서 직사각형을 표현하기 위해서 필요한 점의 갯수는 4개가 아닌 2개이니,
* 직사각형을 의미하는 Rectangle 변수 내에는 두 점의 정보만 존재해야 한다.
*/

// P.489 UnionMemAlloc.c
//#include <stdio.h>
//
//typedef struct sbox		// 구조체 sbox의 정의
//{
//	int mem1;
//	int mem2;
//	double mem3;
//} SBox;
//
//typedef union ubox		// 공용체 ubox의 정의
//{
//	int mem1;
//	int mem2;
//	double mem3;
//}UBox;
//
//int main(void) {
//	SBox sbx;
//	UBox ubx;
//	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
//	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
//	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
//
//	return 0;
//}