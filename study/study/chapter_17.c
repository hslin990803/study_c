// P.357 ~ 포인터의 포인터

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
//	ptr2 = *dptr;	// ptr2 = ptr 과 같은 문장
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
//	SwapIntPtr(&ptr1, &ptr2);	// ptr1과 ptr2의 주소 값 전달!
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
* 문제 17-1 [이중 포인터 변수의 활용]
* 다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
*	int * maxPtr;
*	int * minPtr;
*	int arr[5];
* 그리고 MaxAndMin이란 이름의 함수를 정의하고 이를 호출하면서 위의 배열과 두 포인터 변수에 대한 정보를 전달하자.
* 어떠한 정보를 어떻게 전달할지는 여러분이 결정할 몫이다.
* 그리고 호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열요소의 주소 값이,
* minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값이 저장되어야 한다.
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
//		printf("정수 입력 %d : ", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
//	printf("최대 : %d, 최소 : %d \n", *maxPtr, *minPtr);
//
//	return 0;
//}