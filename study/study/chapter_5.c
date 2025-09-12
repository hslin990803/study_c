// P.105 ~ 상수와 기본 자료형

// P.109 SizeOfOperator.c
//#include <stdio.h>
//int main(void) {
//	char ch = 9;
//	int inum = 1052;
//	double dnum = 3.1415;
//
//	printf("변수 ch의 크기 : %d\n", sizeof(ch));
//	printf("변수 inum의 크기 : %d\n", sizeof(inum));
//	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));
//
//	printf("변수 char의 크기 : %d\n", sizeof(char));
//	printf("변수 int의 크기 : %d\n", sizeof(int));
//	printf("변수 long의 크기 : %d\n", sizeof(long));
//	printf("변수 long long의 크기 : %d\n", sizeof(long long));
//	printf("변수 float의 크기 : %d\n", sizeof(float));
//	printf("변수 double의 크기 : %d\n", sizeof(double));
//
//	return 0;
//}

// P.110 CharShoreBaseAdd.c
//#include <stdio.h>
//int main(void) {
//	char num1 = 1, num2 = 2, result1 = 0;
//	short num3 = 300, num4 = 400, result2 = 0;
//
//	printf("size of num1 & num2 : %d, %d \n", sizeof(num1), sizeof(num2));
//	printf("size of num3 & num4 : %d, %d \n", sizeof(num3), sizeof(num4));
//
//	printf("size of char add : %d \n", sizeof(num1+ num2));
//	printf("size of short add : %d \n", sizeof(num3 + num4));
//
//
//	result1 = num1 + num2;
//	result2 = num3 + num4;
//	printf("size of result1 & result2 : %d, %d \n", sizeof(result1), sizeof(result2));
//
//	return 0;
//}

// P.113 CircleArea.c
//#include <stdio.h>
//int main(void) {
//	double rad;
//	double area;
//
//	printf("원의 반지름 입력 : ");
//	scanf("%lf", &rad);
//
//	area = rad * rad * 3.1415;
//	printf("원의 넓이 : %f \n", area);
//
//	return 0;
//}

// P.117 HowChar.c
//#include <stdio.h>
//int main(void) {
//	char ch1 = 'A', ch2 = 65;
//	int ch3 = 'Z', ch4 = 90;
//
//	printf("%c %d \n", ch1, ch1);
//	printf("%c %d \n", ch2, ch2);
//	printf("%c %d \n", ch3, ch3);
//	printf("%c %d \n", ch4, ch4);
//
//	return 0;
//}

/*
* P.118 ~ 119
* 문제 05-1 [scanf 함수와 아스키 코드]
*/

/*
* 문제 1
* 프로그램 사용자로부터 두 점의 x, y 좌표를 입력 받아서, 두 점이 이루는 직사각형의 넓이를 계산하여 출력하는 프로그램을 작성해보자.
* 단, 좌 상단의 x, y 좌표 값이 우 하단의 x, y 좌표 값보다 작다고 가정하고, 좌 상단의 좌표정보를 먼저 입력 받는 형태로 예제를 작성해보자.
* 참고할 수 있는 실행의 예는 다음과 같다.
* 
* 좌 상단의 x, y 좌표 : 2 4
* 우 하단의 x, y 좌표 : 4 8
* 두 점이 이루는 직사각형의 넓이는 8입니다.
*/

//#include <stdio.h>
//int main(void) {
//	int leftX, leftY;
//	int rightX, rightY;
//	int length, width; // length = 가로, width = 세로
//
//	printf("좌 상단의 x, y 좌표 입력 : ");
//	scanf("%d %d", &leftX, &leftY);
//
//	printf("우 하단의 x, y 좌표 입력 : ");
//	scanf("%d %d", &rightX, &rightY);
//
//	length = rightX - leftX;
//	width = rightY - leftY;
//
//	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", length * width);
//}

/*
* 문제 2
* 프로그램 사용자로부터 두 개의 실수를 입력 받아서 double형 변수에 저장하자.
* 그리고 두 수의 사칙연산 결과를 출력해보자.
*/

//#include <stdio.h>
//int main(void) {
//	double a, b;
//
//	printf("두 개의 실수 입력 : ");
//	scanf("%lf %lf", &a, &b);
//
//	printf("%lf + %lf = %lf \n", a, b, a + b);
//	printf("%lf - %lf = %lf \n", a, b, a - b);
//	printf("%lf X %lf = %lf \n", a, b, a * b);
//	printf("%lf / %lf = %lf \n", a, b, a / b);
//
//	return 0;
//}

/*
* 문제 3
* Appendix A의 아스키 코드 표를 참조하여 다음 질문의 답을 해보자
* 질문1] 아스키 코드를 구성하는 값의 범위는 어떻게 되는가? : 0 ~ 127
* 질문2] 대문자 A에서부터 대문자 Z까지 값이 어떻게 증가하는가? 증가의 폭을 말해보자. : 1씩 증가
* 질문3] 알파벳 대문자와 소문자간의 값의 차는 어떻게 되는가? 규칙성을 찾아보자. : 알파벳 대문자 + 32를 하면 알파벳 소문자가 나옴
*/

/*
* 문제 4
* 프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력 받은 후에 해당 정수의 아스키 코드 문자를 출력하는 프로그램을 작성해보자.
* 예를 들어서 사용자가 정수 65를 입력하면 문자 A를 출력해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num; 
//
//	printf("아스키 코드 값 입력 : ");
//	scanf("%d", &num);
//
//	printf("%c", num);
//
//	return 0;
//}

/*
* 문제 5
* 프로그램 사용자로부터 알파벳 문자 하나를 입력 받는다.
* 그리고 이에 해당하는 아스키 코드 값을 출력하는 프로그램을 작성해보자.
* 예를 들어서 프로그램 사용자가 문자 A를 입력하면 정수 65를 출력해야한다.
*/

//#include <stdio.h>
//int main(void) {
//	char ch;
//
//	printf("알파벳 문자 하나 입력 : ");
//	scanf("%c", &ch);
//
//	printf("%d", ch);
//
//	return 0;
//}

// P.122 LiteralSize.c
//#include <stdio.h>
//int main(void) {
//	printf("literal int size : %d \n", sizeof(7));
//	printf("literal double size : %d \n", sizeof(7.14));
//	printf("literal char size : %d \n", sizeof('A'));
//
//	return 0;
//}

// P.126 AutoConvOne.c
//#include <stdio.h>
//int main(void) {
//	double num1 = 245;
//	int num2 = 3.1415;
//	int num3 = 129;
//	char ch = num3;
//
//	printf("정수 245를 실수로 : %f \n", num1);
//	printf("실수 3.1415를 정수로 : %d \n", num2);
//	printf("큰 정수 129를 작은 정수로 : %d \n", ch);
//
//	return 0;
//}

// P.129 ConvDiv.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 3, num2 = 4;
//	double divResult;
//	divResult = (double)num1 / num2;
//
//	printf("나눗셈 결과 : %f \n", divResult);
//
//	return 0;
//}