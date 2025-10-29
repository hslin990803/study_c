// P.405 ~ chapter 20 도전! 프로그래밍3
/*
* 도전 1
* 길이가 4x4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게 초기화하자.
* 그리고 배열의 요소들을 오른쪽 방향으로 90*씩 이동시켜서 그 결과를 출력하는 프로그램을 작성해 보자.
* 참고로 배열이 변경되는 형태는 다음과 같다.
* P.406 그림 참고
*/
//#include <stdio.h>
//void Rotate(int* arr) {
//	int size = 4;
//	int temp[4][4];
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			*(temp[0] + j * size + (size - 1 - i)) = *(arr + i * size + j);
//		}
//	}
//
//	for (int i = 0; i < size * size; i++) { 
//		*(arr + i) = *(temp[0] + i);
//	}
//}
//
//void PrintArr(int * arr) {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4 ; j++) {
//			printf("%3d", *(arr + i * 4 + j));
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//	int arr[4][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//
//	printf("원본 배열\n");
//	PrintArr(&arr[0][0]);
//
//	for (int i = 1; i <= 4; i++) {
//		printf("\n\n %d번째 회전\n", i);
//		Rotate(&arr[0][0]);
//		PrintArr(&arr[0][0]);
//	}
//
//	return 0;
//}

/*
* 도전2
* 달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다.
* 여기서 말하는 달팽이 배열은 다음과 같다.
* 
* P.406 그림 참고
* 
* 위 그림에서는 4x4의 달팽이 배열과 5x5의 달팽이 배열을 보여주고 있다.
* 이 내용을 참조하여 프로그램 사용자로부터 하나의 숫자 n을 입력 받아서 
* nxn의 길이에 해당하는 달팽이 배열을 출력해주는 프로그램을 작성해보자.
* 
* P.407 그림 참고
* 
* 도전2의 해결을 위한 GUIDE
* 필자가 책에 실을 문제를 고민하던 중 이 문제를 소개받았다.
* 관계성을 찾는 문제이면서 동시에 재미도 있는 문제라고 생각이 들었다.
* 그래서 책에 실을 생각으로 직접 해결을 하기 시작했다.
* 부끄러운 이야기지만 문제 해결을 위한 관계성을 찾는 것이 생각만큼 간단하지 않았다.
* 그림 20-2에서 보면 오른쪽으로 돌면서 배열을 채우고 있는 것을 볼 수 있다.
* 프로그래밍도 저러한 순서로 진행이 되어야 한다.
* 그것이 가장 쉬운 방법이다.
* 또 한가지 조언을 드리자면, 배열을 채우는데 있어서 가로방향으로 채우는 반복문과 
* 세로방향으로 채우는 반복문을 독립적으로 구성하는 것이 쉽게 문제를 해결하는 포인트가 된다.
*/
//#include <stdio.h>
//int main() {
//	int arr[100][100] = { 0 };
//	int num;
//	int count = 1;
//
//	printf("숫자를 입력하시오 : ");
//	scanf("%d", &num);
//
//	int top = 0, bottom = num - 1;
//	int left = 0, right = num - 1;
//	
//	while (count <= num * num) {
//		// 오른쪽으로
//		for (int i = left; i <= right; i++)
//			arr[top][i] = count++;
//		top++;
//
//		// 아래쪽으로
//		for (int i = top; i <= bottom; i++)
//			arr[i][right] = count++;
//		right--;
//
//		// 왼쪽으로
//		for (int i = right; i >= left; i--)
//			arr[bottom][i] = count++;
//		bottom--;
//
//		// 위쪽으로
//		for (int i = bottom; i >= top; i--)
//			arr[i][left] = count++;
//		left++;
//	}
//	
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++) {
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*
* 도전 3
* 프로그램을 구현하다 보면 난수(Random Number)를 발생시켜야 하는 경우가 종종 있다.
* 여기서 말하는 난수란 임의의, 정해지지 않은, 무엇이 될지 모르는 수를 의미한다.
* 그런데 다행인 것은 ANSI 표준에서 난수를 생성할 때 호출할 수 있는 다음 함수를 제공하고 있다는 것이다.
*	#include <stdio.h>
*	int rand(void);	// 의사 난수(pseudo-random number)를 반환
* 
* ANSI 표준에서는 이렇게 난수를 생성할 때 사용할 수 있는 함수 rand를 제공하고 있다.
* 이 함수의 사용방법은 다음과 같다.
*/

// P.407 RandomNum.c
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int i;
//	printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX);
//	for (i = 0; i < 5; i++)
//		printf("난수 출력 : %d \n", rand());
//	return 0;
//}

/*
* 그럼 이어서 문제를 제시하겠다.
* 위의 예제에서는 0이상 RAND_MAX 이하의 난수를 총 5개 생성하고 있다.
* 이 예제를 적절히 변경해서 0 이상 99 이하의 난수를 총 5개 생성하는 프로그램을 작성해보자.
* (힌트 : % 연산자를 적절히 활용하면 된다.)
*/

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int i;
//	
//	for (i = 0; i < 5; i++)
//		printf("난수 출력 : %d \n", rand()%100);
//	return 0;
//}

/*
* 도전 4
* 도전 3에서 제시한 예제를 여러 번 실행해보면 한가지 특징을 발견할 수 있다.
* 그것은 출력되는 난수가 규칙적이라는 것이다.
* 예를 들어서 처음 실행했을 때 생성된 난수가 21, 1, 43, 13, 2이라면 몇 번을 실행해도 그 값이 그대로 출력이 된다.
* 그리고 이는 분명히 문제다!
* 왜냐하면 이렇게 되면 예측이 가능하기 때문에 진짜 난수라 할 수 없기 때문이다.
* 그래서 rand 함수가 반환하는 난수를 가리켜 '의사 난수(pseudo-random number)'라 하는 것이다.
* 의사 난수는 가짜 난수를 의미한다.
* 그래서 ANSI 표준에서는 이러한 문제를 어느 정도 해결할 수 있도록 srand라는 함수를 정의하였다.
* 
*	#include <stdio.h>
*	void srand(unsigned int seed);	// 발생할 난수의 씨드 값 지정
* 
* 위의 함수는 하나의 값을 전달받는다.
* 그리고 그 전달된 값은 난수를 생성하는데 필요한 씨앗으로 사용한다.
* 그래서 이 값을 가리켜 씨드(seed) 값이라고 한다.
* '콩 심은데 콩 나고, 팥 심은데 팥 난다'라는 속담이 있듯이, 씨드 값이 무엇이냐에 따라서 rand 함수가 반환하는 난수의 형태가 달라진다.
* 그럼 다음 예제를 통해서 난수 생성에 필요한 씨앗을 심어보겠다.
*/

// P.409 SeedRandomNum.c
//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//	int seed, i;
//	printf("씨드 값 입력 : ");
//	scanf("%d", &seed);
//	srand(seed);	// 씨앗을 심는다.
//
//	for (i = 0; i < 5; i++)
//		printf("정수 출력 : %d \n", rand());		// 열매를 수확한다.
//	return 0;
//}

/*
* 위 예제 8행에서는 프로그램 사용자로부터 씨드 값을 입력 받아서 9행에서 srand의 인자로 전달하고 있다.
* 즉 씨앗을 하나 심은 것이다.
* 씨앗을 심었으니 열매를 거둬들여야 한다.
* 12행에서는 rand 함수를 이용해서 열매를 거둬 들이고 있다.
* srand 함수는 공부했으니 이제 제법 그럴듯한 난수를 발생시킬 수 있겠는가?
* 아니다! 여전히 문제는 남아있다.
* 위 예제처럼 프로그램을 실행할 때마다 씨드 값을 입력 받을 수는 없는 노릇 아닌가?
* 설사 입력 받는다 해도 매번 다른 값을 입력 받는다는 가정을 세우는 것은 무리가 있다.
* 그런데 이에 대한 해결책이 하나 있다.
* 시스템 시간을 이용하는 것이다.
* 현재 여러분 컴퓨터의 시간값을 얻어와서 srand 함수의 인자로 전달하는 것이다.
* 컴퓨터의 시간은 계속 변하기 때문에 매번 다른 씨앗을 얻는 도구로 활용이 가능하다.
* 그렇다면 컴퓨터의 현재시간을 어떻게 얻어와야 할까?
* 헤더파일 time.h에 선언되어 있는 time이라는 이름의 함수를 사용하면 된다.
* 이 함수는 컴퓨터의 현재시간과 1970년 1월 1일 이후의 시간적 차를 초단위로 계산해서 반환해 준다.
* 우리는 정확한 시간을 얻겠다는 것이 아니고 프로그램 실행 시마다 다른 정수 하나를 얻겠다는 것이므로 이 정도면 충분하다.
* 그럼 이를 적용한 예제를 제시하겠다.
* 실제로 매 실행 시마다 출력되는 난수가 다름을 확인할 수 있을 것이다.
*/

// P.410 TimeSeedRandomNum.c
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main(void) {
//	int i;
//	srand((int)time(NULL));		// 현재시간을 이용해서 씨드 설정
//	for (i = 0; i < 5; i++)
//		printf("정수 출력 : %d \n", rand());
//	return 0;
//}

/*
* 위 예제 8행에서는 time 함수를 호출하면서 인자로 NULL을 전달하고 있다.
* 이렇듯 단순히 시간정보를 반환 받는 것이 목적이라면 NULL을 전달하면 된다.
* 자! 그럼 문제를 제시하겠다.
* 두 개의 주사위를 던졌을 때의 결과를 출력하는 프로그램을 작성해보자.
* 물론 그 결과는 예측이 불가능해야 한다.
* 
* - 실행의 예
* 주사위 1의 결과 2
* 주사위 2의 결과 6
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	srand((int)time(NULL));		// 현재 시간을 이용해서 씨드 설정
//
//	for (int i = 1; i <= 2; i++)
//		printf("주사위 %d의 결과 %d\n", i, rand()%6+1);
//
//	return 0;
//}

/*
* 도전 5
* 가위 바위 보 게임을 만들어 보자.
* 사용자로부터 가위 바위 보 중에서 하나를 입력 받는다.
* 그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 한다.
* 이 둘을 비교해서 승자와 패자를 가려주는 프로그램을 작성해 보자.
* 단 프로그램의 진행은 사용자가 질 때까지 계속되어야 하고, 마지막에 가서는 게임의 결과(예 : 4승 3무)까지 출력해 주도록 하자.
* 
* - 실행의 예
* 바위는 1, 가위는 2, 보는 3 : 2
* 당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!
* 바위는 1, 가위는 2, 보는 3 : 1
* 당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!
* 바위는 1, 가위는 2, 보는 3 : 3
* 당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!
* 바위는 1, 가위는 2, 보는 3 : 3
* 당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!
* 
* 게임의 결과 : 0승, 3무
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//char * Select(int num) {
//	switch (num) {
//	case 1 :
//		return "바위";
//	case 2:
//		return "가위";
//	case 3:
//		return "보";
//	}
//}
//
//char* WhoWin(int result) {
//	switch (result) {
//	case 0:
//		return "비겼습니다!";
//	case 1:
//		return "당신이 이겼습니다!";
//	case 2:
//		return "당신이 졌습니다!";
//	}
//}
//
//int main() {
//	int player, computer;
//	int rock = 1, scissors = 2, paper = 3;
//	int win = 0, draw = 0, lose = 0;
//	int result;
//
//	srand((int)time(NULL));
//
//
//	do {
//		printf("바위는 1, 가위는 2, 보는 3 : ");
//		scanf("%d", &player);
//
//		computer = rand() % 3 + 1;
//		result = (computer - player + 3) % 3;
//
//		printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s \n", Select(player), Select(computer), WhoWin(result));
//
//		if (result == 1)
//			win++;
//		else if (result == 0)
//			draw++;
//		else if (result == 2)
//			lose++;
//	} while (result != 2);
//	
//	printf("\n게임의 결과 : %d승 %d무 %d패\n", win, draw, lose);
//	return 0;
//}

/*
* 도전 6
* 친구와 둘이서 숫자 맞추기 게임을 해 본적이 있을 것이다(보통은 야구 게임이라고 불린다).
* 이것을 컴퓨터와 할 수 있도록 프로그램을 작성해보자. 게임의 방식은 다음과 같다.
* 컴퓨터는 0에서 9사이의 숫자 중에서 서로 다른 세 개의 숫자를 고르고, 사용자는 이것을 맞춰야 한다.
* 중요한 것은 숫자의 순서까지 정확히 맞춰야 한다는 것이다.
* 단 사용자가 예상한 숫자를 입력할 때마다 컴퓨터는 입력된 숫자와 컴퓨터 자신이 생각한 숫자가 얼마나 비슷한지를 알려줘야 한다.
* 예를 들어서 컴퓨터가 고른 숫자가 1 4 9이고, 사용자가 입력한 숫자가 4 0 9이면, 두 개의 숫자 4와 9가 일치한다.
* 9는 숫자와 위치까지 일치하지만(1 strike), 4는 숫자만 일치한다(1 ball).
* 이런 경우 컴퓨터는 다음과 같은 메시지를 출력해 준다.
* 
*	1strike, ball
* 
* 만약에 사용자가 1 4 9를 입력하였다면 "3strike, 0ball"이 되어서 프로그램은 종료가 된다.
* 이때 몇 번 만에 3 strike를 얻어냈는지에 대해서는 출력해 주기로 하자.
* (진행하면서 "몇 번째 도전입니다."라는 메시지를 출력해 줘도 좋다.)
* 
* - 실행의 예
* Start Game!
* 3개의 숫자 선택 : 1 2 8
* 1번째 도전 결과 : 1 strike, 1 ball !!
* 3개의 숫자 선택 : 3 0 8
* 2번째 도전 결과 : 2 strike, 0 ball !!
* 3개의 숫자 선택 : 2 0 8
* 3번째 도전 결과 : 3 strike, 0 ball !!
* 
* Game Over!
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void CheckGame(int* strike, int* ball, int playerNumArr[3], int compNumArr[3]) {
//	// strike 검사
//	for (int i = 0; i < 3; i++) {
//		if (compNumArr[i] == playerNumArr[i])
//			(*strike)++;
//	}
//
//	// ball 검사
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (i != j && compNumArr[i] == playerNumArr[j]) {
//				(*ball)++;
//				break;
//			}
//		}
//	}
//}
//
//void SetCompNumArr(int compNumArr[3]) {
//	for (int i = 0; i < 3; i++) {
//		compNumArr[i] = rand() % 10;
//
//		// 중복확인
//		for (int j = 0; j < i; j++) {
//			if (compNumArr[i] == compNumArr[j]) {
//				i--;
//				break;
//			}		
//		}
//	}
//}
//
//int main() {
//	int isGameOver = 0;
//	int count = 1;
//	int compNumArr[3] = { 0 };
//	int playerNumArr[3] = { 0 };
//	int strike = 0, ball = 0;
//
//	srand((int)time(NULL));
//
//	printf("Start Game!\n");
//	
//	SetCompNumArr(compNumArr);
//
//	do {
//		printf("3개의 숫자 선택 : ");
//		scanf("%d %d %d", &playerNumArr[0], &playerNumArr[1], &playerNumArr[2]);
//
//		CheckGame(&strike, &ball, playerNumArr, compNumArr);
//
//		printf("%d번째 도전 결과 : %d strike, %d ball !! \n\n", count, strike, ball);
//		if (strike == 3)
//			isGameOver = 1;
//
//		strike = 0;
//		ball = 0;
//		count++;
//	} while (isGameOver != 1);
//
//	printf("\nGame Over!\n");
//
//	return 0;
//}