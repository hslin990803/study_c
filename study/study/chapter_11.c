// P.253 ~ 1차원 배열

// P.256 ArrayAccess.c
//#include <stdio.h>
//int main(void) {
//	int arr[5];
//	int sum = 0, i;
//
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//	for (i = 0; i < 5; i++) 
//		sum += arr[i];
//
//	printf("배열요소에 저장된 값의 합 : %d\n", sum);
//
//	return 0;
//}

// P.259 ArrayInit.c
//#include <stdio.h>
//int main(void) {
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = {1,2,3,4,5,6,7};
//	int arr3[5] = { 1,2 };
//	int ar1Len, ar2Len, ar3Len, i;
//
//	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
//	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
//	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));
//
//	ar1Len = sizeof(arr1) / sizeof(int);		// 배열 arr1의 길이 계산
//	ar2Len = sizeof(arr2) / sizeof(int);		// 배열 arr2의 길이 계산
//	ar3Len = sizeof(arr3) / sizeof(int);		// 배열 arr3의 길이 계산
//
//	for (i = 0; i < ar1Len; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//
//	for (i = 0; i < ar2Len; i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//
//	for (i = 0; i < ar3Len; i++)
//		printf("%d ", arr3[i]);
//	printf("\n");
//
//	return 0;
//}

/*
* P.260 문제 11-1 [1차원 배열의 활용]
*/

/*
* 문제 1
* 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자!
* 그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자.
* - 입력된 정수 중에서 최댓값
* - 입력된 정수 중에서 최솟값
* - 입력된 정수의 총 합
* 
* 단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값' 그리고 '총 합'을 계산해야 한다.
* 참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야 한다.
* scanf("%d", &arr[2]);		// 3번째 배열요소에 정수 값 입력 받음
* 
* 변수를 대상으로 & 연산자를 붙여주듯이, 배열요소를 대상으로 할 때에도 & 연산자를 붙여야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[5];
//	int maxNum, minNum, sum;
//
//	printf("정수 5개 입력 : ");
//	
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	maxNum = minNum = sum = arr[0];
//	for (int i = 1; i < 5; i++) {
//		sum += arr[i];
//
//		if (maxNum < arr[i])
//			maxNum = arr[i];
//
//		if (minNum > arr[i])
//			minNum = arr[i];
//	}
//
//	printf("입력된 정수 중에서 최댓값 : %d\n", maxNum);
//	printf("입력된 정수 중에서 최솟값 : %d\n", minNum);
//	printf("입력된 정수 중의 총 합 : %d\n", sum);
//
//	return 0;
//}

/*
* 문제 2
* char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고, 초기화 이후에는 저장된 내용을 출력하는 예제를 작성해보자.
* "Good time"
* 
* 참고로 C언어는 배열 기반의 문자열 저장 및 출력에 대한 별도의 기준을 제공하고 있다.
* 그리고 이와 관련해서 이어서 설명을 한다.
* 하지만 이 문제는 지금까지 우리가 공부한 내용의 범위 내에서 해결해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
//	int arrLen;
//
//	arrLen = sizeof(arr) / sizeof(char);
//	
//	for (int i = 0; i < arrLen; i++)
//		printf("%c", arr[i]);
//
//	return 0;
//}

// P.262 ArrayString.c
//#include <stdio.h>
//int main(void) {
//	char str[] = "Good morning!";
//
//	printf("배열 str의 크기 : %d \n", sizeof(str));
//	printf("널 문자 문자형 출력 : %c \n", str[13]);
//	printf("널 문자 정수형 출력 : %d \n", str[13]);
//
//	str[12] = '?';		// 배열 str에 저장된 문자열 데이터는 변경 가능!
//	printf("문자열 출력 : %s \n", str);
//
//	return 0;
//}

// P.263 ReadString.c
//#include <stdio.h>
//int main(void) {
//	char str[50];
//	int idx = 0;
//	
//	printf("문자열 입력 : ");
//	scanf("%s", str);	// 문자열을 입력 받아서 배열 str에 저장!
//	printf("입력 받은 문자열 : %s \n", str);
//
//	printf("문자 단위 출력 : ");
//	while (str[idx] != '\0') {
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//
//	return 0;
//}

// P.266 StartEndString.c
//#include <stdio.h>
//int main(void) {
//	char str[50] = "I like C programming";
//	
//	printf("string : %s \n", str);
//
//	str[8] = '\0';		// 9번째 요소에 널 문자 저장
//	printf("string : %s \n", str);
//
//	str[6] = '\0';		// 7번째 요소에 널 문자 저장
//	printf("string : %s \n", str);
//
//	str[1] = '\0';		// 2번째 요소에 널 문자 저장
//	printf("string : %s \n", str);
//
//	return 0;
//}

/*
* 문제 11-2 [배열기반의 문자열 표현]
* 문자열의 처리는 상당히 중요하다.
* 따라서 아래의 문제들을 통해서 문자열의 특성에 익숙해지기 바란다.
*/

/*
* 문제 1
* 프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
* 예를 들어서 "Array"라는 단어가 입력되면 5가 출력되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	int len = 0;
//
//	printf("하나의 영단어 입력 : ");
//	scanf("%s", voca);
//
//	while (voca[len] != 0)
//		len++;
//
//	printf("length : %d", len);
//
//	return 0;
//}

/*
* 문제 2
* 프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다.
* 그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.
* 물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
* 뒤집고 나서는 제대로 뒤집혓는지 확인하기 위해서 출력해보자.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	char temp;
//
//	int len = 0;
//
//	printf("영단어 입력 : ");
//	scanf("%s", voca);
//
//	while (voca[len] != '\0')
//		len++;
//
//	for (int i = 0; i < len / 2; i++) {
//		temp = voca[i];
//		voca[i] = voca[(len - i) - 1];
//		voca[(len - i) - 1] = temp;
//	}
//
//	printf("뒤집힌 영단어 : %s  \n", voca);
//
//	return 0;
//}

/*
* 문제 3
* 프로그램 사용자로부터 영단어를 입력 받는다.
* 그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자.
* 예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는 V이므로 V가 출력되어야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	char maxCode = 0;
//
//	int len = 0;
//
//	printf("영단어 입력 : ");
//	scanf("%s", voca);
//
//	while (voca[len] != '\0')
//		len++;
//
//	for (int i = 0; i < len; i++) {
//		if (maxCode < voca[i])
//			maxCode = voca[i];
//	}
//
//	printf("가장 큰 아스키 코드 값의 문자 : %c \n", maxCode);
//
//	return 0;
//}