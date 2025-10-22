// P.357 ~ �������� ������

// P.359 DoublePointerAccess.c
//#include <stdio.h>
//int main(void) {
//	double num = 3.14;
//	double* ptr = &num;
//	double** dptr = &ptr;
//	double* ptr2;
//
//	printf("%9p %9p \n", ptr, *dptr);
//	printf("%9g %9g \n", num, **dptr);
//	ptr2 = *dptr;	// ptr2 = ptr �� ���� ����
//	*ptr2 = 10.99;
//	printf("%9g %9g \n", num, **dptr);
//
//	return 0;
//}

// P.361 PointerSwapFail.c
//#include <stdio.h>
//void SwapIntPtr(int* p1, int* p2) {
//	int* temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main(void) {
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(ptr1, ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}

// P.363 PointerSwapSuccess.c
//#include <stdio.h>
//void SwapIntPtr(int** dp1, int** dp2) {
//	int* temp = *dp1;
//	*dp1 = *dp2;
//	*dp2 = temp;
//}
//
//int main(void) {
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);	// ptr1�� ptr2�� �ּ� �� ����!
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}

// P.365 PointerArrayType.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* ptr3 = &num3;
//
//	int* ptrArr[] = { ptr1,ptr2,ptr3 };
//	int** dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//
//	return 0;
//}

// P.367 TriplePointer.c
//#include <stdio.h>
//int main(void) {
//	int num = 100;
//	int* ptr = &num;
//	int** dptr = &ptr;
//	int*** tptr = &dptr;
//
//	printf("%d %d \n", **dptr, ***tptr);
//
//	return 0;
//}

/*
* ���� 17-1 [���� ������ ������ Ȱ��]
* ������ ���� �� ���� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.
*	int * maxPtr;
*	int * minPtr;
*	int arr[5];
* �׸��� MaxAndMin�̶� �̸��� �Լ��� �����ϰ� �̸� ȣ���ϸ鼭 ���� �迭�� �� ������ ������ ���� ������ ��������.
* ��� ������ ��� ���������� �������� ������ ���̴�.
* �׸��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū ���� ����� �迭����� �ּ� ����,
* minPtr���� ���� ���� ���� ����� �迭����� �ּ� ���� ����Ǿ�� �Ѵ�.
*/
//#include <stdio.h>
//void MaxAndMin(int *arr, int size, int **mxPtr, int **mnPtr) {
//	int* max, * min;
//	
//	max = min = &arr[0];
//	for (int i = 0; i < size; i++) {
//		if (*max < arr[i])
//			max = &arr[i];
//		if (*min > arr[i])
//			min = &arr[i];
//	}
//
//	*mxPtr = max;
//	*mnPtr = min;
//}
//
//int main(void) {
//	int* maxPtr;
//	int* minPtr;
//	int arr[5];
//
//	for (int i = 0; i < 5; i++) {
//		printf("���� �Է� %d : ", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
//	printf("�ִ� : %d, �ּ� : %d \n", *maxPtr, *minPtr);
//
//	return 0;
//}