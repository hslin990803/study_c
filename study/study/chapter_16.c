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