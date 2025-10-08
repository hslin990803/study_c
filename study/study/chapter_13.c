// P.290 ~ �����Ϳ� �迭! �Բ� �����ϱ�

// P.290 ArrayNameType.c
//#include <stdio.h>
//int main(void) {
//	int arr[3] = { 0,1,2 };
//
//	printf("�迭�� �̸� : %p \n", arr);
//	printf("ù ��° ��� : %p \n", &arr[0]);
//	printf("�� ��° ��� : %p \n", &arr[1]);
//	printf("�� ��° ��� : %p \n", &arr[2]);
//	// arr = &arr[i];	// �� ������ ������ ������ ����Ų��.
//
//	return 0;
//}

// P.292 ArrayNamePointerOperation.c
//#include <stdio.h>
//int main(void) {
//	int arr1[3] = { 1,2,3 };
//	double arr2[3] = { 1.1, 2.2, 3.3 };
//
//	printf("%d %g \n", *arr1, *arr2);
//	*arr1 += 100;
//	*arr2 += 120.5;
//	printf("%d %g \n", arr1[0], arr2[0]);
//
//	return 0;
//}

// P.294 ArrayNameIsPointer.c
//#include <stdio.h>
//int main(void) {
//	int arr[3] = { 15, 25, 35 };
//	int* ptr = &arr[0];	// int * ptr=arr; �� ������ ����
//	
//	printf("%d %d \n", ptr[0], arr[0]);
//	printf("%d %d \n", ptr[1], arr[1]);
//	printf("%d %d \n", ptr[2], arr[2]);
//	printf("%d %d \n", *ptr, *arr);
//
//	return 0;
//}

// P.295 PointerOperationResult.c
//#include <stdio.h>
//int main(void) {
//	int* ptr1 = 0x0010;
//	double* ptr2 = 0x0010;
//
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);		// 4�� �����ϰ� 8�� �����Ѵ�.
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);		// 8�� �����ϰ� 16�� �����Ѵ�.
//
//	printf("%p %p \n", ptr1, ptr2);
//
//	ptr1++;		// 4�� �����Ѵ�.
//	ptr2++;		// 8�� �����Ѵ�.
//
//	printf("%p %p \n", ptr1, ptr2);
//
//	return 0;
//}

// P.297 PointerBaseArrayAccess.c
//#include <stdio.h>
//int main(void) {
//	int arr[3] = { 11,22,33 };
//	int* ptr = arr;	// int * ptr=&arr[0]; �� ���� ����
//	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
//
//	printf("%d ", *ptr); ptr++;	// printf �Լ�ȣ�� ��, ptr++ ����
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr--; // printf �Լ�ȣ�� ��, ptr-- ����
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); printf("\n");
//
//	return 0;
//}

/*
* P.299 ���� 13-1 [�����͸� �̿��� �迭�� ����]
*/

/*
* ���� 1
* ���̰� 5�� int�� �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5 �� �ʱ�ȭ�� ����, 
* �� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ���� ptr�� �����Ѵ�.
* �� ���� ������ ���� ptr�� ����� ���� ������Ű�� ������ ������ ������� �迭��ҿ� �����ϸ鼭 ��� �迭����� ���� 2�� ������Ű��, 
* ���������� ������ �̷������� Ȯ���ϴ� ������ �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		*ptr += 2;
//		ptr++;
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

/*
* ���� 2
* ���� 1������ ������ ���� ptr�� ����� ���� ������Ѱ��鼭 �迭��ҿ� �����϶�� �Ͽ���.
* �׷��� �̹����� ������ ���� ptr�� ����� ���� �����Ű�� �ʰ�, ptr�� ������� ���������� �Ͽ�, 
* �� ����� ��ȯ�Ǵ� �ּ� ���� ���ؼ� ��� �迭��ҿ� �����Ͽ� ���� 2�� ������Ű�� ������ �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	int i;
//
//	for (i = 0; i < 5; i++)
//		*(ptr + i) += 2;
//
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

/*
* ���� 3
* ���̰� 5�� int�� �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5�� �ʱ�ȭ�� ����, �� �迭�� ������ ��Ҹ� ����Ű�� ������ ���� ptr�� �����Ѵ�.
* �� ���� ������ ���� ptr�� ����� ���� ���ҽ�Ű�� ������ ������ ������� ��� �迭��ҿ� �����Ͽ�, 
* �迭�� ����� ��� ������ ���Ͽ� �� ����� ����ϴ� ���α׷��� �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = &arr[4];
//	int total = 0, i;
//
//	for (i = 0; i < 5; i++)
//		total += *(ptr--);
//
//	printf("%d", total);
//
//	return 0;
//}

/*
* ���� 4
* ���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5, 6���� �ʱ�ȭ�� ����,
* �迭�� ����� ���� ������ 6, 5, 4, 3, 2, 1�� �ǵ��� �����ϴ� ������ �ۼ��غ���.
* ��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �ڹٲ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* fptr = &arr[0];
//	int* bptr = &arr[5];
//	int i, temp;
//
//	for (i = 0; i < 3; i++) {
//		temp = *fptr;
//		*fptr = *bptr;
//		*bptr = temp;
//
//		fptr += 1;
//		bptr -= 1;
//	}
//
//	for (i = 0; i < 6; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

// P.302 TwoStringType.c
//#include <stdio.h>
//int main(void) {
//	char str1[] = "My String";	// ���� ������ ���ڿ�
//	char* str2 = "Your String"; // ��� ������ ���ڿ�
//	printf("%s %s \n", str1, str2);
//
//	str2 = "Our String";	// ����Ű�� ��� ����
//	printf("%s %s \n", str1, str2);
//
//	str1[0] = 'X';	// ���ڿ� ���� ����!
//	str2[0] = 'X';	// ���ڿ� ���� ����!
//	printf("%s %s \n", str1, str2);
//
//	return 0;
//}

// P.304 PointerArray.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* arr[3] = { &num1, &num2, &num3 };
//
//	printf("%d \n", *arr[0]);
//	printf("%d \n", *arr[1]);
//	printf("%d \n", *arr[2]);
//
//	return 0;
//}

// P.305 StringArray.c
//#include <stdio.h>
//int main(void) {
//	char* strArr[3] = { "Simple", "String", "Array" };
//
//	printf("%s \n", strArr[0]);
//	printf("%s \n", strArr[1]);
//	printf("%s \n", strArr[2]);
//
//	return 0;
//}