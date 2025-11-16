// P.451 ~ 구조체와 사용자 정의 자료형 1

// P.454 TwoPointDistance.c
//#include <stdio.h>
//#include <math.h>
//struct point	// 구조체 point의 정의;
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point pos1, pos2;
//	double distance;
//
//	fputs("point1 pos : ", stdout);
//	scanf("%d %d", &pos1.xpos, &pos1.ypos);
//
//	fputs("point2 pos : ", stdout);
//	scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//	/* 두 점간의 거리 계산 공식 */
//	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
//
//	printf("두 점의 거리는 %g 입니다. \n", distance);
//
//	return 0;
//}

// P.456 Telephoneinfo.c
//#include <stdio.h>
//#include <string.h>
//
//struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void) {
//	struct person man1, man2;
//	strcpy(man1.name, "안성준");
//	strcpy(man1.phoneNum, "010-1122-3344");
//	man1.age = 23;
//
//	printf("이름 입력 : "); scanf("%s", man2.name);
//	printf("번호 입력 : "); scanf("%s", man2.phoneNum);
//	printf("나이 입력 : "); scanf("%d", &(man2.age));
//
//	printf("이름 : %s \n", man1.name);
//	printf("번호 : %s \n", man1.phoneNum);
//	printf("나이 : %d \n", man1.age);
//
//	printf("이름 : %s \n", man2.name);
//	printf("번호 : %s \n", man2.phoneNum);
//	printf("나이 : %d \n", man2.age);
//
//	return 0;
//}

/*
* P.458 문제 22 - 1[구조체의 정의]
* 문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호' 
* 그리고 정수 형태의 '급여정보'를 저장할 수 있는 employee라는 이름의 구조체를 정의해보자.
* 그리고 나서 employee 구조체 변수를 하나 선언한 다음, 프로그램 사용자가 입력하는 정보로 이 변수를 채우자.
* 그리고 마지막으로 구조체 변수에 채워진 데이터를 출력해보자.
*/

// P.458 InitStructVal.c
//#include <stdio.h>
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void) {
//	struct point pos = { 10,20 };
//	struct person man = { "이승기", "010-1212-0001", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//
//	return 0;
//}

// P.461 StructArray.c
//#include <stdio.h>
//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point arr[3];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("점의 좌표 입력 : ");
//		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//	}
//
//	for (i = 0; i < 3; i++)
//		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
//
//	return 0;
//}

// P.462 InitStructArray.c
//#include <stdio.h>
//
//struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void) {
//	struct person arr[3] = {
//		{"이승기", "010-1212-0001", 21},	// 첫 번째 요소의 초기화
//		{"정지영", "010-1313-0002", 22},	// 두 번째 요소의 초기화
//		{"한지수", "010-1717-0003", 19}	// 세 번째 요소의 초기화
//	};
//
//	int i;
//	for (i = 0; i < 3; i++)
//		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//
//	return 0;
//}