// P.133 ~ printf 함수와 scnaf 함수 정리하기

// P.134 StringPrintf.c
//#include <stdio.h>
//int main(void) {
//	printf("I like programming \n");
//	printf("I love puppy! \n");
//	printf("I am so happy \n");
//	
//	printf("앞집 강아지가 말했다. \"멍~! 멍~!\" 정말 귀엽다.");
//	return 0;
//}

// P.137 FormPrintf.c
//#include <stdio.h>
//int main(void) {
//	int myAge = 12;
//	printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다. \n", myAge, myAge);
//
//	return 0;
//}

// P.139 OctHex.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 7, num2 = 13;
//
//	printf("%o %#o \n", num1, num1);
//	printf("%x %#x \n", num2, num2);
//
//	return 0;
//}

// P.139 RealNumOutput.c
//#include <stdio.h>
//int main(void) {
//	printf("%f \n", 0.1234);
//	printf("%e \n", 0.1234);	// e 표기법 기반의 출력
//	printf("%f \n", 0.12345678);
//	printf("%e \n", 0.12345678);	// e 표기법 기반의 출력
//
//	return 0;
//}

// P.141 UsingPG.c
//#include <stdio.h>
//int main(void) {
//	double d1 = 1.23e-3;	// 0.00123
//	double d2 = 1.23e-3;	// 0.000123
//	double d3 = 1.23e-5;	// 0.0000123
//	double d4 = 1.23e-6;	// 0.00000123
//
//	printf("%g \n", d1);	// %f 스타일 출력
//	printf("%g \n", d2);	// %f 스타일 출력
//	printf("%g \n", d3);	// %e 스타일 출력
//	printf("%g \n", d4);	// %e 스타일 출력
//
//	return 0;
//}

// P.142 UsingPS.c
//#include <stdio.h>
//int main(void) {
//	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");
//
//	return 0;
//}

// P.143 FieldWidth.c
//#include <stdio.h>
//int main(void) {
//	printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년");
//	printf("%-8s %14s %5d \n", "김동수", "전자공학", 3);
//	printf("%-8s %14s %5d \n", "이을수", "컴퓨터공학", 2);
//	printf("%-8s %14s %5d \n", "한선영", "미술교육학", 4);
//
//	return 0;
//}

// P.144 ScanfConvOne.c
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//	printf("세 개의 정수 입력 : ");
//	scanf("%d %o %x", &num1, &num2, &num3);
//
//	printf("입력된 정수 10진수 출력 : ");
//	printf("%d %d %d \n", num1, num2, num3);
//
//	return 0;
//}

// P.145 ScanfConvTwo.c
//#include <stdio.h>
//int main(void) {
//	float num1;
//	double num2;
//	long double num3;
//
//	printf("실수 입력1(e 표기법으로) : ");
//	scanf("%f", &num1);
//	printf("입력된 실수 %f \n", num1);
//
//	printf("실수 입력2(e 표기법으로) : ");
//	scanf("%lf", &num2);
//	printf("입력된 실수 %f \n", num2);
//
//	printf("실수 입력3(e 표기법으로) : ");
//	scanf("%Lf", &num3);
//	printf("입력된 실수 %Lf \n", num3);
//
//	return 0;
//}