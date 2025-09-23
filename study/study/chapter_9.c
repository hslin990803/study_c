// P.207~ C언의 핵심! 함수!

// P.209 PrintfOutput.c
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	num1 = printf("12345\n");
//	num2 = printf("I love my home\n");
//	printf("%d %d \n", num1, num2);
//
//	return 0;
//}

// P.212 SimpleAddFunc.c
//#include <stdio.h>
//int Add(int num1, int num2) {
//	return num1 + num2;
//}
//
//int main(void) {
//	int result;
//	result = Add(3, 4);
//	printf("덧셈결과 1 : %d \n", result);
//	result = Add(5, 8);
//	printf("덧셈결과 2 : %d \n", result);
//
//	return 0;
//}

// P.214 SmartAddFunc.c
//#include <stdio.h>
//int Add(int num1, int num2) {	// 인자전달(o), 반환 값(o)
//	return num1 + num2;
//}
//
//void ShowAddResult(int num) {	// 인자전달(o), 반환 값(x)
//	printf("덧셈결과 출력 : %d \n", num);
//}
//
//int ReadNum(void) {		// 인자전달(o), 반환 값(x)
//	int num;
//
//	scanf("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void) {	// 인자전달(x), 반환 값(x)
//	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
//}
//
//int main(void) {
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//
//	return 0;
//}

// P.218 NumCompare.c
//#include <stdio.h>
//int NumberCompare(int num1, int num2);
//
//int main(void) {
//	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
//	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
//
//	return 0;
//}
//
//int NumberCompare(int num1, int num2) {
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}

// P.219 AbsoCompare.c
//#include <stdio.h>
//int AbsoCompare(int num1, int num2);	// 절댓값이 큰 정수 반환
//int GetAbsoValue(int num);	// 전달인자의 절댓값을 반환
//
//int main(void) {
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//	printf("%d와 %d중 절대값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
//
//	return 0;
//}
//
//int AbsoCompare(int num1, int num2) {
//	if (GetAbsoValue(num1) > GetAbsoValue(num2))
//		return num1;
//	else
//		return num2;
//}
//
//int GetAbsoValue(int num) {
//	if (num < 0)
//		return num * (-1);
//	else
//		return num;
//}

/*
* P.221 문제 09-1 [다양한 함수 정의하기]
*/

/*
* 문제 1
* 세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환함수를 정의해보자.
* 그리고 이 함수들을 호출하는 적절한 main함수도 작성해보자.
*/
//#include <stdio.h>
//int MaxNum(int num1, int num2, int num3);
//int MinNum(int num1, int num2, int num3);
//
//int main(void) {
//	int num1, num2, num3;
//
//	printf("정수 3개 입력 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("가장 큰 수 : %d \n", MaxNum(num1, num2, num3));
//	printf("가장 작은 수 : %d\n", MinNum(num1, num2, num3));
//
//	return 0;
//}
//
//int MaxNum(int num1, int num2, int num3) {
//	if (num1 > num2)
//		return (num1 > num3) ? num1 : num3;
//	else
//		return (num2 > num3) ? num2 : num3;
//}
//
//int MinNum(int num1, int num2, int num3) {
//	if (num1 < num2)
//		return (num1 < num3) ? num1 : num3;
//	else
//		return (num2 < num3) ? num2 : num3;
//}

/*
* 문제 2
* 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의 함수와
* 그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel이라는 이름의 함수를 정의하고
* 이 두 함수를 호출하는 예제를 완성해보자.
* 참고로 섭씨와 화씨간 온도변환의 공식은 다음과 같다.
* Fah = 1.8 X Cel + 32
*/
//#include <stdio.h>
//double CelToFah(double temp);
//double FahToCel(double temp);
//
//int main(void) {
//	int mode;
//	double temp;
//	
//	printf("모드 입력 : \n 1. 섭씨 > 화씨 변환 2. 화씨 > 섭씨 변환");
//	scanf("%d", &mode);
//
//	if (mode == 1) {
//		printf("온도 입력 : ");
//		scanf("%lf", &temp);
//
//		printf("변환 결과 : %lf\n", CelToFah(temp));
//	}
//	else if (mode == 2) {
//		printf("온도 입력 : ");
//		scanf("%lf", &temp);
//
//		printf("변환 결과 : %lf\n", FahToCel(temp));
//	}
//	
//	return 0;
//}
//
//double CelToFah(double temp) {
//	return (1.8 * temp) + 32;
//}
//
//double FahToCel(double temp) {
//	return (temp - 32) / 1.8;
//}

/*
* 문제 3
* 인자로 전달된 수 만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
* 예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
* 참고로 피보나치 수열은 다음과 같다.
* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ~
* 이렇듯 피보나치 수열은 0과 1에서 시작한다.
* 그리고 세 번째 이후의 수열부터는 이전의 두 값의 합으로 구성된다.
* 즉, 3번째 수는 0과 1의 합으로 이뤄져서 1이 되고, 네 번째 수는 1과 1의 합으로 이뤄져서 2가된다.
*/
//#include <stdio.h>
//int Fibo(int num);
//
//int main(void) {
//	int num;
//
//	printf("피보나치 수열 얼마나 출력하시겠습니까? \n");
//	scanf("%d", &num);
//
//	Fibo(num);
//
//	return 0;
//}
//
//int Fibo(int num) {
//	int prevNum = 0;
//	int nowNum = 1;
//	int next;
//
//	printf("%d ", prevNum);
//
//	for (int i = 1; i < num; i++) {
//		printf("%d ", nowNum);
//		next = prevNum + nowNum;
//		prevNum = nowNum;
//		nowNum = next;
//	}
//	printf("\n");
//}

// P.222 LocalVariable.c
//#include <stdio.h>
//
//int SimpleFuncOne(void) {
//	int num = 10;		// 이후부터 SimpleFuncOne의 num 유효
//	num++;
//	printf("SimpleFuncOne num : %d \n", num);
//
//	return 0;		// SimpleFuncOne의 num이 유효한 마지막 문장
//}
//
//int SimpleFuncTwo(void) {
//	int num1 = 20;		// 이후부터 num1 유효
//	int num2 = 30;		// 이후부터 num2 유효
//
//	num1++, num2--;
//
//	printf("num1 & num2 : %d %d \n", num1, num2);
//
//	return 0;		// num1, num2 유효한 마지막 문장
//}
//
//int main(void) {
//	int num = 17;		// 이후부터 main의 num 유효
//	SimpleFuncOne();
//	SimpleFuncTwo();
//	printf("main num : %d \n", num);
//
//	return 0;		// main의 num이 유효한 마지막 문장
//}

// P.226 AnotherLocalVal.c
//#include <stdio.h>
//int main(void) {
//	int cnt;
//	for (cnt = 0; cnt < 3; cnt++) {
//		int num = 0;
//		num++;
//		printf("%d번째 반복, 지역번수 num은 %d. \n", cnt + 1, num);
//	}
//
//	if (cnt == 3) {
//		int num = 7;
//		num++;
//		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
//	}
//
//	return 0;
//}

// P.228 LocalValHideVal.c
//#include <stdio.h>
//int main(void) {
//	int num = 1;
//
//	if (num == 1) {
//		int num = 7;		// 이 행을 주석처리 하고 실행결과 확인하자!
//		num += 10;
//		printf("if문 내 지역변수 num : %d \n", num);
//	}
//	printf("main 함수 내 지역변수 num: %d \n", num);
//
//	return 0;
//}

// P.230 GlobalVariable.c
//#include <stdio.h>
//void Add(int val);
//int num;		// 전역변수는 기본 0으로 초기화됨
//
//int main(void) {
//	printf("num : %d \n", num);
//	Add(3);
//	printf("num : %d \n", num);
//	num++;		// 전역변수 num의 값 1 증가
//	printf("num : %d \n", num);
//
//	return 0;
//}
//
//void Add(int val) {
//	num += val;		//  전역변수 num의 값 val 만큼 증가
//}

// P.231 LocalValHideGlobalVal.c
//#include <stdio.h>
//int Add(int val);
//int num = 1;
//
//int main(void) {
//	int num = 5;
//	printf("num : %d \n", Add(3));
//	printf("num : %d \n", num + 9);
//
//	return 0;
//}
//
//int Add(int val) {
//	int num = 9;
//	num += val;
//
//	return num;
//}

// P.234 StaticLocalVariable.c
//#include <stdio.h>
//void SimpleFunc(void) {
//	static int num1 = 0;		// 초기화하지 않으면 0 초기화
//	int num2 = 0;		// 초기화하지 않으면 쓰레기 값 초기화
//	num1++, num2++;
//	printf("static : %d, local : %d \n", num1, num2);
//}
//
//int main(void) {
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}

/*
* P.237 문제 09-2 [static 변수의 활용]
* 다음은 프로그램 사용자가 입력하는 값을 누적하여 그 합계를 출력하는 예제이다.
* #include <stdio.h>
* int total = 0;
* 
* int AddToTotal(int num) {
*	total += num;
*	return total;
* }
* int main(void) {
*	int num, i;
*	for (i = 0; i < 3; i++) {
*		printf("입력%d : ", i + 1);
*		scanf("%d", &num);
*		printf("누적 : %d \n", AddToTotal(num));
*	}
*	return 0;
* }
* 위의 예제에서는 함수 AddToTotal에서의 사용을 목적으로 전역변수 total을 선언하였는데,
* 이를 static 변수로 대체해보자.
* 단 static 변수로의 대체과정에서 main 함수의 변경은 없어야 하며 실행결과도 동일해야 한다.
*/

//#include <stdio.h>
//int AddToTotal(int num) {
//	static total = 0;
//	total += num;
//	return total;
//}
//int main(void) {
//	int num, i;
//	for (i = 0; i < 3; i++) {
//		printf("입력%d : ", i + 1);
//		scanf("%d", &num);
//		printf("누적 : %d \n", AddToTotal(num));
//	}
//
//	return 0;
//}

// P.240 RecursiveFunc.c
//#include <stdio.h>
//void Recursive(int num) {
//	if (num <= 0)	// 재귀의 탈출 조건
//		return;		// 재귀의 탈출!
//	printf("Recursive call! %d \n", num);
//	Recursive(num - 1);
//}
//
//int main(void) {
//	Recursive(3);
//	
//	return 0;
//}

// P.243 RecursiveFactorial.c
//#include <stdio.h>
//int Factorial(int n) {
//	if (n == 0)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//
//int main(void) {
//	printf("1! = %d \n", Factorial(1));
//	printf("2! = %d \n", Factorial(2));
//	printf("3! = %d \n", Factorial(3));
//	printf("4! = %d \n", Factorial(4));
//	printf("9! = %d \n", Factorial(9));
//
//	return 0;
//}