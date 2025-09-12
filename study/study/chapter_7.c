// P.147 ~ 반복실행을 명령하는 반복문

// P.149 SimpeWhile.c
//#include <stdio.h>
//int main(void) {
//	int num = 0;
//
//	while (num < 5) {
//		printf("Hello world! %d \n", num);
//		num++;
//	}
//
//	return 0;
//}

// P.153 NineNineDan.c
//#include <stdio.h>
//int main(void) {
//	int dan = 0, num = 1;
//	printf("몇 단? ");
//	scanf("%d", &dan);
//
//	while (num < 10) {
//		printf("%dX%d=%d \n", dan, num, dan * num);
//		num++;
//	}
//	return 0;
//}

/*
* P.155 문제 07-1 [while문의 활용]
* 반복문의 첫 관문인 while문을 공부하였으니, 다음 문제들을 통해서 while문의 활용능력을 향상 시키기 바란다.
* 잠시 후에 반복문의 중첩으로 들어가면 지금보다 더 많이 생각해야 하니, 아래의 문제를 통해서 while문에 익숙해지기 바란다.
*/

/*
* 문제 1
* 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello world!"를 출력하는 프로그램을 작성해보자.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 0;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	while (i < num) {
//		printf("Hello world! %d\n", i);
//		i++;
//	}
//	return 0;
//}

/*
* 문제 2
* 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자.
* 예를 들어서 5를 입력 받았다면, 3, 6, 9, 12, 15를 출력해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 1;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("%d\n", 3 * i);
//		i++;
//	}
//	return 0;
//}

/*
* 문제 3
* 프로그램 사용자로부터 계속해서 정수를 입력 받는다.
* 그리고 그 값을 계속해서 다해 나간다.
* 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며,
* 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
*/
//#include <stdio.h>
//int main(void) {
//	int num = 0, result = 0;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//	result += num;
//
//	while (num != 0) {
//		printf("정수 입력 : ");
//		scanf("%d", &num);
//		result += num;
//	}
//	printf("입력된 모든 정수의 합 : %d", result);
//
//	return 0;
//}

/*
* 문제 4
* 프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 9;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	while (i > 0) {
//		printf("%d X %d = %d \n", num, i, num * i);
//		i--;
//	}
//	return 0;
//}

/*
* 문제 5
* 프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 다음 두 가지 조건을 만족시켜야 한다.
* "먼저 몇개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력 받는다."
* "평균 값은 소수점 이하까지 계산해서 출력한다."
*/
//#include <stdio.h>
//int main(void) {
//	int count, num, result = 0, i = 0;
//	double avg;
//
//	printf("몇 개의 정수를 입력할 것입니까? ");
//	scanf("%d", &count);
//
//	while (i < count) {
//		printf("정수 입력 : ");
//		scanf("%d", &num);
//		result += num;
//
//		i++;
//	}
//	avg = result / count;
//	printf("평균 값 : %lf", avg);
//
//	return 0;
//}

// P.156 TwoToNine.c
//#include <stdio.h>
//int main(void) {
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10) {		// 2단부터 9단까지 반복
//		is = 1;	// 새로운 단의 시작을 위해서
//		while (is < 10) {	// 각 단의 1부터 9의 곱을 표현
//			printf("%dX%d=%d\n", cur, is, cur * is);
//			is++;
//		}
//		cur++;	// 다음 단으로 넘어가기 위한 증가
//		printf("\n");
//	}
//	return 0;
//}

/*
* P.157 문제 07-2 [while문의 중첩]
* 이번에 제시하는 문제들은 while문을 중첩시켰을 때 쉽게 해결할 수 있는 문제들이다.
* 물론 중첩시키지 않고도 해결이 가능하지만, while문의 중첩을 ㅇ녀습하자는 것이니 반드시 while 문을 중첩시켜서 해결을 하자.
*/

/*
* 문제 1
* 프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성해보자.
* 단! 한가지 조건이 있다.
* 정수는 반드시 1이상이어야 한다.
* 만약의 1미만의 수가 입력되는 경우에는, 이를 입력으로 인정하지 않고 재 입력을 요구해야 한다.
* 그래서 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록 프로그램을 완성해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int i = 0, sum = 0;
//	int num;
//
//	while (i < 5) {
//		printf("정수 입력 : ");
//		scanf("%d", &num);
//
//		while (num < 1) {
//			printf("1이상의 수를 입력해주세요. ");
//			scanf("%d", &num);
//		}
//		sum += num;
//		i++;
//	}
//	printf("입력된 정수의 총 합 : %d\n", sum);
//
//	return 0;
//}

/*
* 문제 2
* 아래의 출력을 보이는 프로그램을 작성해보자.
* *
* o*
* oo*
* ooo*
* oooo*
* 참고로, 총 5행의 걸쳐서 출력이 이뤄지고, 행이 더해질 때마다 o 문자의 수가 증가한다는 특징을 기반으로 while문의 중첩을 구성하면 된다.
*/
//#include <stdio.h>
//int main(void) {
//	int i = 0, j = 0;
//
//	while (i < 5) {
//		j = 0;
//		while (j < i) {
//			printf("o");
//			j++;
//		}
//		printf("*\n");
//		i++;
//	}
//	return 0;
//}

// P.160 UsefulDoWhile.c
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 0;
//
//	do {
//		printf("정수 입력(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	} while (num != 0);
//
//	printf("합계 : %d \n", total);
//
//	return 0;
//}

/*
* P.161 문제 07-3 [while문과 do~while문에 익숙해지기]
*/

/*
* 문제 1
* 바로 위에서 보인 예제 UsefulDowhile.c를 while문 기반으로 재 구현할 경우, 생각해볼 수 있는 구현의 형태는 두 가지이다.
* 그 두 가지 방법은 다음과 같다.
* 
* - 방법 1
* 변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.
* 
* - 방법 2
* while 문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
* 
* 이 두 가지 방법을 각각 적용해서 예제 UsefulDoWhile.c를 while문 기반으로 재 구현해 보자.
* 참고로 어떠한 방법이든 do~while문을 적용했을 때보다는 부자연스럽다는 느낌이 들 것이다.
*/
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 1;
//
//	while (num != 0) {
//		num = 0;
//		printf("정수 입력(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("합계 : %d \n", total);
//
//	return 0;
//}

/*
* 문제 2
* 0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반으로 구현해보자.
* 참고로 덧셈의 결과는 2550이 되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 0;
//
//	do {
//		total += num;
//		num = num + 2;
//	} while (num <= 100);
//	printf("0이상 100이하의 정수 중 짝수의 합 : %d", total);
//
//	return 0;
//}

/*
* 문제 3
* while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재 구현해 보자.
* do~while문의 중첩에 대해서는 별도의 언급이 없었지만, while문의 중첩을 이해하였으니, 충분히 응용이 가능하다.
*/
//#include <stdio.h>
//int main(void) {
//	int cur = 2;
//	int is = 0;
//
//	do {
//		is = 1;
//		do {
//			printf("%dX%d=%d\n", cur, is, cur * is);
//			is++;
//		} while (is < 10);
//		cur++;
//		printf("\n");
//	} while (cur < 10);
//
//	return 0;
//}

// P.165 AddToNum.c
//#include <stdio.h>
//int main(void) {
//	int total = 0;
//	int i, num;
//	printf("0부터 num까지의 덧셈, num은? ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num + 1; i++)
//		total += i;
//
//	printf("0부터 %d까지 덧셈결과 : %d \n", num, total);
//
//	return 0;
//}

// P.166 RealMean.c
//#include <stdio.h>
//int main(void) {
//	double total = 0.0;
//	double input = 0.0;
//	int num = 0;
//
//	for (; input >= 0.0;) {
//		total += input;
//		printf("실수 입력(minus to quit) : ");
//		scanf("%lf", &input);
//		num++;
//	}
//
//	printf("평균 : %f \n", total / (num - 1));
//
//	return 0;
//}

/*
* P.167 문제 07-4 [for문의 활용]
* 아래의 문제를 풀어보는 것도 좋지만,
* 앞서 제시한 while, do~while 관련 예제나 문제의 답안을 for문 기반으로 재 구현해 보는 것도 for문에 익숙해지는데 큰 도움이 된다.
* 그럼 이어서 두 개의 문제를 제시하겠다.
* 물론 이 문제는 for문을 이용해서 해결해야 하며, 마음에 여유가 있다면, 아래의 문제들을 
* while문과 do~while문을 이용해서 다시 한번 풀어보는 것도 좋은 학습이 된다.
*/

/*
* 문제 1
* 프로그램 사용자로부터 두 개의 정수를 입력 받아서, 
* 두 정수를 포함하여 그 사이에 존재하는 정수 들의 합을 계산해서 출력하는 프로그램을 작성해 보자.
* 예를 들어서 3과 5가 입력되면, 3+4+5의 결과가 출력되어야 한다.
* 그리고 문제를 조금 간단히 하기 위해서, 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더 커야 한다는 조건을 걸기로 하겠다.
*/
//#include <stdio.h>
//int main(void) {
//	int i, j;
//	int start, end;
//	int total = 0;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &start, &end);
//
//	for (i = start; i <= end; i++) {
//		total += i;
//	}
//	printf("%d와 %d 사이에 존재하는 정수들의 합 : %d", start, end, total);
//
//	return 0;
//}

/*
* 문제 2
* 다음 수식인 계승(factorial) 계산하는 프로그램을 작성해보자.
* n! = 1X2X3X ~ Xn
* 프로그램 사용자로부터 n에 해당하는 정수를 입력 받는다.
* 그러면 n의 계승 n!를 계산해서 출력이 이뤄져야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i;
//	int total = 1;
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++) {
//		total *= i;
//	}
//	printf("%d! = %d", num, total);
//
//	return 0;
//}

// P.168 TwoToNineForVer.c
//#include <stdio.h>
//int main(void) {
//	int cur, is;
//
//	for (cur = 2; cur < 10; cur++) {
//		for (is = 1; is < 10; is++) {
//			printf("%dX%d=%d \n", cur, is, cur * is);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}