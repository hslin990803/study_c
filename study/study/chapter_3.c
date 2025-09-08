// P.49 ~

// P.50 SimpleAddOne.c
//#include <stdio.h>
//int main(void) {
//	3 + 4;	// 3과 4의 합을 명령함
//
//	return 0;
//}

// P.52 VarDeclAndInit.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 0, num2 = 0;		// 변수 num1, num2의 선언
//	int num3 = 30, num4 = 40;	// 변수 num3, num4의 선언 및 초기화
//
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	num1 = 10;	// 변수 num1의 초기화
//	num2 = 20;	// 변수 num2의 초기화
//
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	printf("num3 : %d, num4 : %d \n", num3, num4);
//
//	return 0;
//}

// P.55 SimpeAddTwo.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 3;
//	int num2 = 4;
//	int result = num1 + num2;
//
//	printf("덧셈 결과 : %d \n", result);
//	printf("%d+%d=%d \n", num1, num2, result);
//	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);
//
//	return 0;
//}

// P.57 OperatorOne.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 9, num2 = 2;
//
//	printf("%d+%d=%d \n", num1, num2, num1 + num2);
//	printf("%d-%d=%d \n", num1, num2, num1 - num2);
//	printf("%dX%d=%d \n", num1, num2, num1 * num2);
//	printf("%d 나누기 %d의 몫=%d \n", num1, num2, num1 / num2);
//	printf("%d 나누기 %d의 나머지=%d \n", num1, num2, num1 % num2);
//
//	return 0;
//}

// P.59 OperatorTwo.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 2, num2 = 4, num3 = 6;
//	num1 += 3;	// num1 = num1 + 3;
//	num2 *= 4;	// num2 = num2 * 4;
//	num3 %= 5;	// num3 = num3 % 5;
//
//	printf("Result : %d, %d, %d \n", num1, num2, num3);
//
//	return 0;
//}

// P.60 OperatorThree.c
//#include <stdio.h>
//int main(void) {
//	int num1 = +2;
//	int num2 = -4;
//
//	num1 = -num1;
//	printf("num1: %d \n", num1);
//	num2 = -num2;
//	printf("num2: %d \n", num2);
//
//	return 0;
//}

// P.61 OperatorFour.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 12;
//	int num2 = 12;
//
//	printf("num1: %d \n", num1);
//	printf("num1++: %d \n", num1++);	// 후위 증가
//	printf("num1: %d \n\n", num1);
//
//	printf("num2: %d\n", num2);
//	printf("++num2: %d\n", ++num2);		// 전위 증가
//	printf("num2: %d\n", num2);
//
//	return 0;
//}

// P.62 OperatorFive.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = (num1--) + 2;	// 후위 감소
//
//	printf("num1: %d \n", num1);
//	printf("num2: %d \n", num2);
//
//	return 0;
//}

// P.64 OperatorSix.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == num2);
//	result2 = (num1 <= num2);
//	result3 = (num1 > num2);
//
//	printf("result1: %d\n", result1);
//	printf("result2: %d\n", result2);
//	printf("result3: %d\n", result3);
//
//	return 0;
//}

// P.66 OperatorSeven.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == 10 && num2 == 12);
//	result2 = (num1 < 12 || num2 > 12);
//	result3 = (!num1);
//
//	printf("result1: %d\n", result1);
//	printf("result2: %d\n", result2);
//	printf("result3: %d\n", result3);
//
//	return 0;
//}

// P.67 CommaOp.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 1, num2 = 2;
//	printf("Hello "), printf("world! \n");
//	num1++, num2++;
//	printf("%d ", num1), printf("%d ", num2), printf("\n");
//
//	return 0;
//}

// P.71 SimpleAddThree.c
//#include <stdio.h>
//int main(void) {
//	int result;
//	int num1, num2;
//
//	printf("정수 one: ");
//	scanf("%d", &num1);		// 첫 번째 정수 입력
//	printf("정수 two: ");
//	scanf("%d", &num2);		// 두 번째 정수 입력
//
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//
//	return 0;
//}

// P.73 SimpleAddFour.c
//#include <stdio.h>
//int main(void) {
//	int result;
//	int num1, num2, num3;
//
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	result = num1 + num2 + num3;
//	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//
//	return 0;
//}

/*
* P.74 
* 아래의 문제들은 프로그램에 익숙해질 수 있도록 비교적 쉬운 문제들로 구성하였으니, 
* 본인 스스로의 힘으로 해결할 수 있도록 노력하기 바란다.
*/

/*
* 문제 1
* 프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d - %d = %d\n", num1, num2, num1 - num2);
//	printf("%d X %d = %d\n", num1, num2, num1 * num2);
//
//	return 0;
//}

/*
* 문제 2
* 프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 순서대로 입력 받은 후에, 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
* num1Xnum2+num3
* 단, 입력 받은 세 개의 정수가 2, 4, 6이라면 다음의 형태로 출력을 해야 한다.
* 2X4+6=14
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//
//	printf("세 개의 정수 입력 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d X %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}

/*
* 문제 3
* 하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
* 예를 들어서 5가 입력되면 25가 출력되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	printf("%d의 제곱은 %d입니다.", num, num * num);
//
//	return 0;
//}

/*
* 문제 4
* 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자.
* 예를 들어서 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d 나누기 %d의 몫은 %d 입니다.\n", num1, num2, num1 / num2);
//	printf("%d 나누기 %d의 나머지는 %d 입니다.\n", num1, num2, num1 % num2);
//
//	return 0;
//}

/*
* 문제 5
* 입력 받은 세 개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
* (num1-num2)X(num2+num3)X(num3%num1)
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//
//	printf("세 개의 정수 입력 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("(%d-%d)X(%d+%d)X(%d/%d) = %d\n", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 / num1));
//
//	return 0;
//}