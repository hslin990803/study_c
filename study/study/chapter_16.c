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