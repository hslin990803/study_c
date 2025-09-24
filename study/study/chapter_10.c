// P.247 ~ chapter 10 도전! 프로그래밍
/*
* 도전 1
* 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해 보자.
* 이는 서식문자의 활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
*/
//#include <stdio.h>
//int main(void) {
//	int num;
//	
//	printf("10진수 정수 입력 : ");
//	scanf("%d", &num);
//
//	printf("10진수 정수 %d는 16진수 %x 입니다. \n", num, num);
//
//	return 0;
//}

/*
* 도전 2
* 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
* 예를 들어서 프로그램 사용자가 3과 5를 입력하면 3단, 4단, 5단이 출력되어야 하고, 2와 4를 입력하면 2단, 3단, 4단이 출력되어야 한다.
* 단 한가지 조건이 있다.
* 사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
* 즉 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.
* 
* 도전 2의 해결을 위한 GUIDE
* 두 개의 정수를 인자로 전달받아서 두 수 사이의 구구단을 출력하는 함수를 정의하고, main 함수에서 이 함수를 출력하는 형태로 구현해보자.
*/
//#include <stdio.h>
//int Gugudan(int num1, int num2) {
//	int i, j;
//
//	for (i = num1; i <= num2; i++) {
//		for (j = 1; j < 10; j++) {
//			printf("%d X %d = %d \n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int num1, num2, endNum, startNum;
//
//	printf("정수 두 개 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2) {
//		endNum = num1;
//		startNum = num2;
//	}
//	else {
//		endNum = num2;
//		startNum = num1;
//	}
//		
//	Gugudan(startNum, endNum);
//
//	return 0;
//}

/*
* 도전 3
* 두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성 해 보자.
* 
* 실행의 예
* 두 개의 정수 입력 : 6 9
* 두 수의 최대공약수 : 3
* 
* 도전3의 해결을 위한 GUIDE
* 정수 num1과 num2의 최대 공약수는 num1이나 num2보다 클 수 없다.
* 그리고 num1과 num2의 최대 공약수로 num1 또는 num2를 나누면 나머지가 0이 된다.
* 이 두 가지 특성을 이용하면 최대 공약수를 쉽게 구할 수 있다.
* 참고로 여유가 된다면 인터넷에서 '유클리드 호제법'이라는 것을 조사해보자.
* 그리고 이를 기반으로 문제의 해결을 한번 더 시도하기 바란다.
*/
//#include <stdio.h>
//int Divisor(int num1, int num2) {
//	int maxDivisor = 0;
//	int maxNum, minNum;
//
//	if (num1 > num2) {
//		maxNum = num1;
//		minNum = num2;
//	}
//	else {
//		maxNum = num2;
//		minNum = num1;
//	}
//
//	for (int i = 1; i <= minNum; i++) {
//		if ((maxNum % i == 0) && (minNum % i == 0)) {
//			maxDivisor = i;
//		}
//	}
//
//	return maxDivisor;
//}
//
//int main(void) {
//	int num1, num2;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d, %d 두 수의 최대공약수 : %d \n", num1, num2, Divisor(num1, num2));
//
//	return 0;
//}

/*
* 도전 4
* 필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근길에 DVD나 만화책을 잔뜩 빌리고, 동네 슈퍼에 들려서 군것질거리를 사가지고 집에 들어가는 것이다.
* 오늘은 금요일이다.
* 현재 필자의 주머니에는 5천원이 있다. 
* DVD 한편을 빌리면 3,500원이 남는다.
* 슈퍼에 들려서 크림빵(500원), 새우깡(700원), 콜라(400원)을 사려한다.
* 잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?
* 물론 여기에는 여러 가지 경우의 수가 있을 것이다.
* 필자가 어떠한 선택을 할 수 있는지 여러분이 제시해 주기 바란다.
* 
* 실행의 예
* 현재 당신이 소유하고 있는 금액 : 3500
* 크림빵 1개, 새우깡 2개, 콜라 4개
* 크림빵 2개, 새우깡 3개, 콜라 1개
* 크림빵 4개, 새우깡 1개, 콜라 2개
* 어떻게 구입하시겠습니까?
*/
//#include <stdio.h>
//void Calc(int money, int creamBread, int shrimpCracker, int cokeDrink) {
//	for (int cream = 1; cream <= money / creamBread; cream++) {
//		for (int shrimp = 1; shrimp <= money / shrimpCracker; shrimp++) {
//			for(int coke = 1; coke <= money / cokeDrink; coke++) {
//				int total = cream * creamBread + shrimp * shrimpCracker + coke * cokeDrink;
//
//				if (total == money) {
//					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, shrimp, coke);
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	int creamBread = 500, shrimpCracker = 700, coke = 400;
//	int money = 3500;
//
//	printf("현재 당신이 소유하고 있는 금액 : %d\n", money);
//
//	Calc(money, creamBread, shrimpCracker, coke);
//
//	printf("어떻게 구입하시겠습니까?\n");
//	
//	return 0;
//}

/*
* 도전 5
* 10개의 소수(Prime Number)을 출력하는 프로그램을 작성해 보자.
* 참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다.
* 따라서 3은 소수이다.
* 그러나 4는 소수가 아니다.
* 1, 2, 4로 나눠지기 때문이다.
* 
* 실행의 예
* 2 3 5 7 11 13 17 19 23 29
*/
//#include <stdio.h>
//int isPrime(int num) {
//	if (num < 2)	
//		return 0;
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main(void) {
//	int count = 0;
//	int num = 2;
//
//	while (count < 10) {
//		if (isPrime(num)) {
//			printf("%d ", num);
//			count++;
//		}
//		num++;
//	}
//
//	return 0;
//}

/*
* 도전 6
* 프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
* 
* 실행의 예
* 초(second) 입력 : 3615
* [h:1, m:0, s:15]
*/
//#include <stdio.h>
//int main(void) {
//	int second;
//	int h, m, s;
//	printf("초(second) 입력 : ");
//	scanf("%d", &second);
//
//	h = second / 3600;
//	m = (second % 3600) / 60;
//	s = second % 60;
//
//	printf("h:%d, m:%d, s:%d \n", h, m, s);
//
//	return 0;
//}

/*
* 도전 7
* 프로그램 사용자로부터 숫자 n을 입력 받는다.
* 그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해 보자.
* 2k <= n (k는 제곱)
* 
* 실행의 예
* 상수 n 입력 : 256
* 공식을 만족하는 k의 최댓값은 8
* 
* 도전7의 해결을 위한 GUIDE
* 수식이 등장했다고 해서 두려워하지 말자.
* 위의 식을 그대로 반복문으로 옮겨 놓으면 쉽게 해결되는 문제이다.
*/
//#include <stdio.h>
//int main(void) {
//	int n;
//	int k = 0;
//	int value = 1;
//
//	printf("상수 n 입력 : ");
//	scanf("%d", &n);
//
//	while (value * 2 <= n) {
//		value *= 2;
//		k++;
//	}
//
//	printf("공식을 만족하는 k의 최댓값은 : %d", k);
//
//	return 0;
//}

/*
* 도전 8
* 2의 n승을 구하는 함수를 재귀적으로 구현해 보자.
* 그리고 그에 따른 적절한 main함수도 구현해보자.
* 참고로 재귀함수의 구현이 처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시하였다.
* (본문에 소개한 예제보다도 쉬운 문제다.)
* 
* 실행의 예
* 정수 입력 : 8
* 2의 8승은 256
*/
//#include <stdio.h>
//int Square(int num) {
//	if (num == 0)
//		return;
//	else
//		return 2 * Square(num - 1);
//}
//
//int main(void) {
//	int num;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	printf("2의 %d승은 %d", num, Square(num));
//
//	return 0;
//}