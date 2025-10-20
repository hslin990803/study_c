// P.337 ~ 다차원 배열

// P.339 TwoDimArraySize.c
//#include <stdio.h>
//int main(void) {
//	int arr1[3][4];
//	int arr2[7][9];
//
//	printf("세로3, 가로4 : %d \n", sizeof(arr1));
//	printf("세로7, 가로9 : %d \n", sizeof(arr2));
//
//	return 0;
//}

// P.342 PopuResarch.c
//#include <stdio.h>
//int main(void) {
//	int villa[4][2];
//	int popu, i, j;
//
//	/* 가구별 거주인원 입력 받기 */
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//	/* 빌라의 층별 인구수 출력하기 */
//	for (i = 0; i < 4; i++) {
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d층 인구수 : %d \n", i + 1, popu);
//	}
//
//	return 0;
//}

// P.344 TwoDimArrayAddr.c
//#include <stdio.h>
//int main(void) {
//	int arr[3][2];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			printf("%p \n", &arr[i][j]);
//	return 0;
//}

// P.346 TwoDimaArrayInit.c
//#include <stdio.h>
//int main(void) {
//	int i, j;
//
//	/* 2차원 배열 초기화의 예 1 */
//	int arr1[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//
//	/* 2차원 배열 초기화의 예 2 */
//	int arr2[3][3] = {
//		{1},
//		{4,5},
//		{7,8,9}
//	};
//
//	/* 2차원 배열 초기화의 예 3 */
//	int arr3[3][3] = { 1,2,3,4,5,6,7 };
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr2[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr3[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}

// P.348 문제 16-1 [2차원 배열의 활용]
/*
* 문제 1
* 가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여 구구단 중 2단, 3단, 4단을 다음과 같이 저장하자.
* P.348 그림 참고
* 그리고 제대로 저장이 되었는지 확인하기 위한 출력을 진행하는 예제를 작성해보자.
* 
*/