// P.337 ~ ������ �迭

// P.339 TwoDimArraySize.c
//#include <stdio.h>
//int main(void) {
//	int arr1[3][4];
//	int arr2[7][9];
//
//	printf("����3, ����4 : %d \n", sizeof(arr1));
//	printf("����7, ����9 : %d \n", sizeof(arr2));
//
//	return 0;
//}

// P.342 PopuResarch.c
//#include <stdio.h>
//int main(void) {
//	int villa[4][2];
//	int popu, i, j;
//
//	/* ������ �����ο� �Է� �ޱ� */
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%d�� %dȣ �α��� : ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//	/* ������ ���� �α��� ����ϱ� */
//	for (i = 0; i < 4; i++) {
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d�� �α��� : %d \n", i + 1, popu);
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
//	/* 2���� �迭 �ʱ�ȭ�� �� 1 */
//	int arr1[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//
//	/* 2���� �迭 �ʱ�ȭ�� �� 2 */
//	int arr2[3][3] = {
//		{1},
//		{4,5},
//		{7,8,9}
//	};
//
//	/* 2���� �迭 �ʱ�ȭ�� �� 3 */
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

// P.348 ���� 16-1 [2���� �迭�� Ȱ��]
/*
* ���� 1
* ������ ���̰� 9, ������ ���̰� 3�� int�� 2���� �迭�� �����Ͽ� ������ �� 2��, 3��, 4���� ������ ���� ��������.
* P.348 �׸� ����
* �׸��� ����� ������ �Ǿ����� Ȯ���ϱ� ���� ����� �����ϴ� ������ �ۼ��غ���.
* 
*/