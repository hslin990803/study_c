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

/*
* 문제 2
* 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의 함수와
* 그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel이라는 이름의 함수를 정의하고
* 이 두 함수를 호출하는 예제를 완성해보자.
* 참고로 섭씨와 화씨간 온도변환의 공식은 다음과 같다.
* Fah = 1.8 X Cel + 32
*/

/*
* 문제 3
* 인자로 전달된 수 만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
* 예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
* 참고로 피보나치 수여ㅑㄹ은 다음과 같다.
* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ~
* 이렇듯 피보나치 수열은 0과 1에서 시작한다.
* 그리고 세 번째 이후의 수열부터는 이전의 두 값의 합으로 구성된다.
* 즉, 3번째 수는 0과 1의 합으로 이뤄져서 1이 되고, 네 번째 수는 1과 1의 합으로 이뤄져서 2가된다.
*/