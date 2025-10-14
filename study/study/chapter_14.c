// P.309 ~ �����Ϳ� �Լ��� ���� ����

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
//	Swap(num1, num2);	// num1�� num2�� ����� ���� ���� �ٲ�� ���!
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
* ���� 14-1 [Call-by-value & Call-by-reference]
*/

/*
* ���� 1
* ���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main �Լ��� �ۼ��غ���.
* ��, ���⼭�� ���� �� ���� ���·� �Լ��� �����ؾ� �Ѵ�.
*  - Call-by-value ����� SquareByValue �Լ�
*  - Call-by-reference ����� SquareByReference �Լ�
* 
* SquareByValue �Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ� �ϸ�, 
* SquareByReference �Լ��� ������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ�
* �ش� ������ ����� ���� ������ �� ������ �ٽ� �����ؾ� �Ѵ�.
*/

/*
* ���� 2
* �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���.
* ���� �� �Լ��� �̸��� Swap 3���ϸ�, ������ ���·� �Լ��� ȣ��Ǿ�� �Ѵ�.
* Swap3(&num, &num2, &num3);
* �׸��� �Լ�ȣ���� ����� num1�� ����� ���� num2��, num2�� ����� ���� num3��, �׸��� num3�� ����� ���� num1�� ����Ǿ�� �Ѵ�.
*/