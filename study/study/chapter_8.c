// P.177 조건에 따른 흐름의 분기

// P.179 IfBasic.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num < 0)	// num이 0보다 작으면 아래의 문장 실행
//		printf("입력 값은 0보다 작다. \n");
//
//	if (num > 0)	// num이 0보다 크면 아래의 문장 실행
//		printf("입력값은 0보다 크다. \n");
//
//	if (num == 0)	// num이 0이면 아래의 문장 실행
//		printf("입력 값은 0이다. \n");
//
//	return 0;
//}

// P.180~181 CalOne.c
//#include <stdio.h>
//int main(void) {
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//	printf("선택? ");
//	scanf("%d", &opt);
//	printf("두 개의 실수 입력 : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//
//	printf("결과 : %f \n", result);
//
//	return 0;
//}

// P.182 Mul3Mul4.c
//#include <stdio.h>
//int main(void) {
//	int num;
//
//	for (num = 1; num < 100; num++) {
//		if (num % 3 == 0 || num % 4 == 0)
//			printf("3 또는 4의 배수 : %d \n", num);
//	}
//	return 0;
//}

// P.183 IFElseBasic.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("입력 값은 0보다 작다. \n");
//	else
//		printf("입력 값은 0보다 작지 않다. \n");
//
//	return 0;
//}

// P.185~186 CalTwo.c
//#include <stdio.h>
//int main(void) {
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//	printf("선택? ");
//	scanf("%d", &opt);
//	printf("두 개의 실수 입력 : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else
//		result = num1 / num2;
//
//	printf("결과 : %f \n", result);
//
//	return 0;
//}

// P.188 ThreeOperand.c
//#include <stdio.h>
//int main(void) {
//	int num, abs;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("절댓값 : %d \n", abs);
//
//	return 0;
//}

/*
* P.189 문제 08-1 [if~else문의 활용]
* if~else와 관련된 문장들의 이해보다 중요한 것은 적용능력이다.
* 따라서 아래의 문제를 제시한다.
* 이 문제들을 풀다 보면 어느 정도 적용능력이 향상될 것이다.
*/

/*
* 문제 1
* 1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해 보자.
* 단! 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int i;
//
//	for (i = 1; i < 100; i++) {
//		if (i % 7 == 0 && i % 9 == 0) {
//			printf("7의 배수이면서 동시에 9의 배수 : %d \n", i);
//		}
//		else if (i % 7 == 0 || i % 9 == 0) {
//			printf("7의 배수 또는 9의 배수 : %d \n", i);
//		}
//	}
//	return 0;
//}

/*
* 문제 2
* 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자.
* 단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다.
* 예를 들어서 입력된 두 수가 순서에 상관없이 12와 5라면 7이 출력되어야 하고,
* 입력된 두 수가 순서에 상관없이 4와 16이라면 12가 출력되어야 한다.
* 즉, 출력 결과는 무조건 0 이상이 되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2)
//		printf("%d - %d = %d \n", num1, num2, num1 - num2);
//	else if(num1 < num2)
//		printf("%d - %d = %d \n", num2, num1, num2 - num1);
//
//	return 0;
//}

/*
* 문제 3
* 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
* 학생의 성적이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D 그리고 그 미만이면 F다!
* 프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다.
* 그리고는 평균을 구한 다음 그에 적절한 학점을 출력하면 된다.
*/
//#include <stdio.h>
//int main(void) {
//	int kor, eng, math, avg;
//
//	printf("국어 점수 입력 : ");
//	scanf("%d", &eng);
//
//	printf("영어 점수 입력 : ");
//	scanf("%d", &kor);
//
//	printf("수학 점수 입력 : ");
//	scanf("%d", &math);
//
//	avg = (eng + kor + math) / 3;
//
//	if (avg >= 90 && avg <= 100)
//		printf("A \n");
//	else if (avg < 90 && avg >= 80)
//		printf("B \n");
//	else if (avg < 80 && avg >= 70)
//		printf("C \n");
//	else if (avg < 70 && avg >= 50)
//		printf("D \n");
//	else
//		printf("F");
//
//	return 0;
//}

/*
* 문제 4
* 위의 문제 2를 if~else문을 이용해서 해결하였는가?
* 어떠한 형태로 해결했건 간에 조건 연산자를 이용하는 형태로 프로그램을 변경해 보자.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	int result;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	result = num1 > num2 ? num1 - num2 : num2 - num1;
//	
//	printf("%d \n", result);
//
//	return 0;
//}

// P.190 WhenOver5000.c
//#include <stdio.h>
//int main(void) {
//	int sum = 0, num = 0;
//
//	while (1) {
//		sum += num;
//		if (sum > 5000)
//			break;		// break문 실행! 따라서 반복문 탈출
//		num++;
//	}
//
//	printf("sum : %d \n", sum);
//	printf("num : %d \n", num);
//
//	return 0;
//}

// P.191~192 ExceptMul2Mul3.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("start! ");
//
//	for (num = 1; num < 20; num++) {
//		if (num % 2 == 0 || num % 3 == 0)
//			continue;
//		printf("%d ", num);
//	}
//	printf("end! \n");
//
//	return 0;
//}

/*
* P.193 문제 08-2 [continue & break의 활용]
* 프로그래밍을 공부하는 사람들 사이에 하는 말이 있다.
* "백견이 불여일타요! 백타가 불여일작이라!"
* 여기에는 직접 프로그래밍을 해보는 것만큼 좋은 공부방법은 없다는 뜻이 담겨있다.
* 그만큼 프로그래밍 문제는 여러분에게 중요하다.
*/

/*
* 문제 1
* 구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력되도록 하자.
* 또한 2단은 2X2까지, 4단은 4X4까지, 6단은 6X6까지, 8단은 8X8까지 출력되도록 프로그램을 구현해 보자.
* 이렇게 어수선한 문제를 제시하는 이유는 continue와 break문의 사용법을 익히기 위해서다.
* 그러니 가급적이면 continue와 break문을 사용해서 이 문제를 해결하기 바란다.
*/
//#include <stdio.h> // 내가 푼 것 (continue와 break 미사용)
//int main(void) {
//	int i, j;
//
//	for (i = 1; i < 10; i++) {
//		if (i % 2 == 0) {
//			for (j = 1; j <= i; j++) {
//				printf("%d X %d = %d \n", i, j, i * j);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 정답
//#include <stdio.h>
//int main(void) {
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		if (i % 2 != 0)
//			continue;
//
//		for (j = 1; j < 10; j++) {
//			if (i < j)
//				break;
//			printf("%d X %d = %d \n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*
* 문제 2
* 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자
*   A Z
* + Z A
* -------
*   9 9
* 참고로, 가능한 모든 수의 조합을 시도하기 위해서는 반복문을 중첩시켜야 한다.
*/
//#include <stdio.h> // 내가 푼 것 (continue와 break 미사용)
//int main(void) {
//	int a, z;
//
//	for (a = 0; a < 10; a++) {
//		for (z = 0; z < 10; z++) {
//			if ((a * 10 + z) + (z * 10 + a) == 99) {
//				printf("%d %d + %d %d = %d \n", a, z, z, a, (a * 10 + z) + (z * 10 + a));
//			}
//		}
//	}
//
//	return 0;
//}

// 정답
//#include <stdio.h>
//int main(void) {
//	int A, Z;
//	int result;
//	for (A = 0; A < 10; A++) {
//		for (Z = 0; Z < 10; Z++) {
//			if (A == Z)
//				continue;
//			result = (A * 10 + Z) + (Z * 10 + A);
//			if (result == 99)
//				printf("%d%d+%d%d=%d\n", A, Z, Z, A, result);
//		}
//	}
//	return 0;
//}

// P.194 EnglishSchool.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("1이상 5이하의 정수 입력 : ");
//	scanf("%d", &num);
//
//	switch (num) {
//	case 1:
//		printf("1은 ONE \n");
//		break;
//	case 2:
//		printf("2는 TWO \n");
//		break;
//	case 3:
//		printf("3은 THREE \n");
//		break;
//	case 4:
//		printf("4는 FOUR \n");
//		break;
//	case 5:
//		printf("5는 FIVE \n");
//		break;
//	default :
//		printf("I don't know! \n");
//	}
//	return 0;
//}

// P.197 AdvanEnglishSchool.c
//#include <stdio.h>
//int main(void) {
//	char sel;
//	printf("M 오전, A 오후, E 저녁 \n");
//	printf("입력 : ");
//	scanf("%c", &sel);
//
//	switch (sel) {
//	case 'M':
//	case 'm':
//		printf("Morning \n");
//		break;
//	case 'A':
//	case 'a':
//		printf("Afternoon \n");
//		break;
//	case 'E':
//	case 'e':
//		printf("Evening \n");
//		break; // 사실 불필요한 break문!
//	}
//	return 0;
//}

/*
* P.200 문제 08-3 [switch문으로 대신하기]
* 그림 08-10의 if...else if...else는 변수 n에 저장된 값의 범위를 출력하도록 구성되어 있다.
* 필자는 이것을 예로 해서 switch문이 모든 if...else if...else를 대신하기에는 무리가 있음을 설명하였지만,
* 그림 08-10의 if...else if...else는 약간의 조작(?)을 통해서 wtich문으로 변경이 가능하다.
* 따라서 이를 switch문으로 변경해서 실행해보기 바란다.
*/
//#include <stdio.h>
//int main(void) {
//	int num;
//	
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	switch (num / 10) {
//	case 0:
//		printf("0이상 10미만");
//		break;
//	case 1:
//		printf("10이상 20미만");
//		break;
//	case 2:
//		printf("20이상 30미만");
//		break;
//	default:
//		printf("30이상");
//	}
//	return 0;
//}

// P.201 GoToBasic.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("자연수 입력 : ");
//	scanf("%d", &num);
//
//	if (num == 1)
//		goto ONE;
//	else if (num == 2)
//		goto TWO;
//	else
//		goto OTHER;
//
//ONE:
//	printf("1을 입력하셨습니다! \n");
//	goto END;
//TWO : 
//	printf("2를 입력하셨습니다! \n");
//	goto END;
//OTHER :
//	printf("3 혹은 다른 값을 입력하셨군요! \n");
//
//END : 
//	return 0;
//}