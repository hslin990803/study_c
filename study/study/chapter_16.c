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

// P.348 ���� 16-1 [2���� �迭�� Ȱ��] �׸� ������ å ����
/*
* ���� 1
* ������ ���̰� 9, ������ ���̰� 3�� int�� 2���� �迭�� �����Ͽ� ������ �� 2��, 3��, 4���� ������ ���� ��������.
* P.348 �׸� ����
* �׸��� ����� ������ �Ǿ����� Ȯ���ϱ� ���� ����� �����ϴ� ������ �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[3][9];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 9; j++) {
//			arr[i][j] = (i + 2) * (j + 1);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 9; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*
* ���� 2
* �Ʒ� �׸��� �����ؼ� ������ ������ �״�, �׸����� �����ϴ� �迭 A�� �迭 B�� ������ ��������.
* P.349 �׸� ����
* �� �׸��� ���´�� �迭 A�� �迭 B�� ��������.
* �׸��� �迭 A�� ����� ���ÿ� �׸����� ����ϴ� ��� �ʱ�ȭ�� ��������!
* �׸��� �迭 B�� �� �׸����� ���̴� ��� �ʱ�ȭ�� �����ϵ�, �ݵ�� �迭 A�� ����� ���� �̿��ؼ� �ʱ�ȭ�� �����ؾ� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int a[2][4] = {
//		{1,2,3,4},
//		{5,6,7,8}
//	};
//
//	int b[4][2];
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 4; j++) {
//			b[j][i] = a[i][j];
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%2d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*
* ���� 3
* �������� ���α׷��� �ۼ�����.
* ������ ����, ����, ����, ���� �̷��� �� �����̰� �л��� ö��, ö��, ����, ���� �̷��� �� ����̴�.
* ���α׷� ����ڷκ��� �� �� ����� �� ���� ������ �Է¹޴´�.
* �׸��� �̸� ������ ���� �迭�� ������ ���·� �� ���� �����ؾ� �Ѵ�.
* P.349 �׸� ����
* ������ �����ٸ�, ���κ� ������ ���� ������ ����ؼ� ���� �׸����� ���̴� �迭�� ��ġ�� �����ؾ� �Ѵ�.
* �׸��� ���������� ����� ���� ������ ���� ����� ������ �Ѵ�.
* P.349 �׸� ���� 
*/
//#include <stdio.h>
//int record[5][5];
//
//void WriteRecord() {
//	int sum;
//
//	for (int i = 0; i < 4; i++) {
//		sum = 0;
//		printf("%d��° �л��� ���� �Է� \n", i + 1);
//		for (int j = 0; j < 4; j++) {
//			printf("���� %d : ", j + 1);
//			scanf("%d", &record[i][j]);
//			sum += record[i][j];
//		}
//		record[i][4] = sum;
//	}
//}
//
//void WriteSumRecord() {
//	int sum = 0;
//	
//	for (int i = 0; i < 4; i++) {
//		sum = 0;
//		for (int j = 0; j < 4; j++) {
//			sum += record[j][i];
//		}
//		record[4][i] = sum;
//		record[4][4] += sum;
//	}
//}
//
//void ShowAllRecord() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%3d ", record[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//	WriteRecord();
//	WriteSumRecord();
//	ShowAllRecord();
//
//	return 0;
//}

// P.351 ThreeDimArraySize.c
//#include <stdio.h>
//int main(void) {
//	int arr1[2][3][4];
//	double arr2[5][5][5];
//
//	printf("����2, ����3, ����4 int�� �迭 : %d \n", sizeof(arr1));
//	printf("����5, ����5, ����5 double�� �迭 : %d \n", sizeof(arr2));
//
//	return 0;
//}

// P.351 ThreeDimArrayAccess.c
//#include <stdio.h>
//int main(void) {
//	int mean = 0, i, j;
//	int record[3][3][2] = {
//		{
//			{70, 80},	// A �б� �л� 1�� ����
//			{94, 90},	// A �б� �л� 2�� ����
//			{70, 85}		// A �б� �л� 3�� ����
//		},
//		{
//			{83, 90},	// B �б� �л� 1�� ����
//			{95, 60},	// B �б� �л� 2�� ����
//			{90, 82},	// B �б� �л� 3�� ����
//		},
//		{
//			{98, 89},	// C �б� �л� 1�� ����
//			{99, 94},	// C �б� �л� 2�� ����
//			{91, 87},	// C �б� �л� 3�� ����
//		}
//	};
//
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[0][i][j];
//	printf("A �б� ��ü ��� : %g \n", (double)mean / 6);
//
//	mean = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[1][i][j];
//	printf("B �б� ��ü ��� : %g \n", (double)mean / 6);
//
//	mean = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[2][i][j];
//	printf("C �б� ��ü ��� : %g \n", (double)mean / 6);
//
//	return 0;
//}