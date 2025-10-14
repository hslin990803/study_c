// P.309 ~ 포인터와 함수에 대한 이해

// P.312 ArrayParam.c
//#include <stdio.h>
//void ShowArayElem(int* param, int len) {
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	printf("\n");
//}
//
//int main(void) {
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 4,5,6,7,8 };
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//
//	return 0;
//}

// P.312 ArrayParamAccess.c
//#include <stdio.h>
//void ShowArayElem(int* param, int len) {
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	printf("\n");
//}
//
//void AddArayElem(int* param, int len, int add) {
//	int i;
//	for (i = 0; i < len; i++)
//		param[i] += add;
//}
//
//int main(void) {
//	int arr[3] = { 1,2,3 };
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	return 0;
//}

// P.315 CallByValueSwap.c
//#include <stdio.h>
//void Swap(int n1, int n2) {
//	int temp = n1;
//	n1 = n2;
//	n2 = temp;
//	printf("n1 n1 : %d %d \n", n1, n2);
//}
//
//int main(void) {
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	Swap(num1, num2);	// num1과 num2에 저장된 값이 서로 바뀌길 기대!
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	return 0;
//}

// P.317 CallByRefSwap.c
//#include <stdio.h>
//void Swap(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main(void) {
//	int num1 = 10;
//	int num2 = 20;
//
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	Swap(&num1, &num2);
//
//	printf("num1 num2 : %d %d \n", num1, num2);
//
//	return 0;
//}

/*
* 문제 14-1 [Call-by-value & Call-by-reference]
*/

/*
* 문제 1
* 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main 함수를 작성해보자.
* 단, 여기서는 다음 두 가지 형태로 함수를 정의해야 한다.
*  - Call-by-value 기반의 SquareByValue 함수
*  - Call-by-reference 기반의 SquareByReference 함수
* 
* SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며, 
* SquareByReference 함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서
* 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장해야 한다.
*/

/*
* 문제 2
* 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
* 예를 들어서 함수의 이름이 Swap 3라하면, 다음의 형태로 함수가 호출되어야 한다.
* Swap3(&num, &num2, &num3);
* 그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/