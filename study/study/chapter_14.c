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