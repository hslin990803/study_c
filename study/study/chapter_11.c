// P.253 ~ 1���� �迭

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
//	printf("�迭��ҿ� ����� ���� �� : %d\n", sum);
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
//	printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1));
//	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
//	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));
//
//	ar1Len = sizeof(arr1) / sizeof(int);		// �迭 arr1�� ���� ���
//	ar2Len = sizeof(arr2) / sizeof(int);		// �迭 arr2�� ���� ���
//	ar3Len = sizeof(arr3) / sizeof(int);		// �迭 arr3�� ���� ���
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
* P.260 ���� 11-1 [1���� �迭�� Ȱ��]
*/

/*
* ���� 1
* ���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է� ����!
* �׸��� �Է��� ������ ������ ������ ����ϵ��� ������ �ۼ��غ���.
* - �Էµ� ���� �߿��� �ִ�
* - �Էµ� ���� �߿��� �ּڰ�
* - �Էµ� ������ �� ��
* 
* ��, �ݵ�� �Է��� �Ϸ��� ���¿��� '�ִ�'�� '�ּڰ�' �׸��� '�� ��'�� ����ؾ� �Ѵ�.
* ����� �迭�� ������� scanf���� ������ ������ ������ ���� �ؾ� �Ѵ�.
* scanf("%d", &arr[2]);		// 3��° �迭��ҿ� ���� �� �Է� ����
* 
* ������ ������� & �����ڸ� �ٿ��ֵ���, �迭��Ҹ� ������� �� ������ & �����ڸ� �ٿ��� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[5];
//	int maxNum, minNum, sum;
//
//	printf("���� 5�� �Է� : ");
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
//	printf("�Էµ� ���� �߿��� �ִ� : %d\n", maxNum);
//	printf("�Էµ� ���� �߿��� �ּڰ� : %d\n", minNum);
//	printf("�Էµ� ���� ���� �� �� : %d\n", sum);
//
//	return 0;
//}

/*
* ���� 2
* char�� 1���� �迭�� ����� ���ÿ� ���� ������ �������� �ʱ�ȭ�ϰ�, �ʱ�ȭ ���Ŀ��� ����� ������ ����ϴ� ������ �ۼ��غ���.
* "Good time"
* 
* ����� C���� �迭 ����� ���ڿ� ���� �� ��¿� ���� ������ ������ �����ϰ� �ִ�.
* �׸��� �̿� �����ؼ� �̾ ������ �Ѵ�.
* ������ �� ������ ���ݱ��� �츮�� ������ ������ ���� ������ �ذ��ؾ� �Ѵ�.
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
//	printf("�迭 str�� ũ�� : %d \n", sizeof(str));
//	printf("�� ���� ������ ��� : %c \n", str[13]);
//	printf("�� ���� ������ ��� : %d \n", str[13]);
//
//	str[12] = '?';		// �迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
//	printf("���ڿ� ��� : %s \n", str);
//
//	return 0;
//}

// P.263 ReadString.c
//#include <stdio.h>
//int main(void) {
//	char str[50];
//	int idx = 0;
//	
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);	// ���ڿ��� �Է� �޾Ƽ� �迭 str�� ����!
//	printf("�Է� ���� ���ڿ� : %s \n", str);
//
//	printf("���� ���� ��� : ");
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
//	str[8] = '\0';		// 9��° ��ҿ� �� ���� ����
//	printf("string : %s \n", str);
//
//	str[6] = '\0';		// 7��° ��ҿ� �� ���� ����
//	printf("string : %s \n", str);
//
//	str[1] = '\0';		// 2��° ��ҿ� �� ���� ����
//	printf("string : %s \n", str);
//
//	return 0;
//}

/*
* ���� 11-2 [�迭����� ���ڿ� ǥ��]
* ���ڿ��� ó���� ����� �߿��ϴ�.
* ���� �Ʒ��� �������� ���ؼ� ���ڿ��� Ư���� �ͼ������� �ٶ���.
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ���� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� "Array"��� �ܾ �ԷµǸ� 5�� ��µǾ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	int len = 0;
//
//	printf("�ϳ��� ���ܾ� �Է� : ");
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
* ���� 2
* ���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� �����Ѵ�.
* �� ���� �迭�� ����� ���ܾ �������� �����´�.
* ���� �� ���� �� ������ ��ġ�� �����ؼ��� �� �ȴ�.
* ������ ������ ����� ���������� Ȯ���ϱ� ���ؼ� ����غ���.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	char temp;
//
//	int len = 0;
//
//	printf("���ܾ� �Է� : ");
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
//	printf("������ ���ܾ� : %s  \n", voca);
//
//	return 0;
//}

/*
* ���� 3
* ���α׷� ����ڷκ��� ���ܾ �Է� �޴´�.
* �׸��� ���� �Է� ���� ���ܾ �����ϴ� ���� �߿��� �ƽ�Ű �ڵ��� ���� ���� ū ���ڸ� ã�Ƽ� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� �Էµ� ���ܾ "LOVE"��� �� �߿��� �ƽ�Ű �ڵ� ���� ���� ū ���ڴ� V�̹Ƿ� V�� ��µǾ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	char voca[100];
//	char maxCode = 0;
//
//	int len = 0;
//
//	printf("���ܾ� �Է� : ");
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
//	printf("���� ū �ƽ�Ű �ڵ� ���� ���� : %c \n", maxCode);
//
//	return 0;
//}