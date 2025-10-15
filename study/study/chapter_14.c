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

/*
* 문제 14-2 [const 선언에 대한 추가적인 이해]
* 이번에 제시하는 문제에서는 포인터 변수 대상의 const 선언에 대한 추가적인 이해를 목적으로 하고 있다.
* 따라서 문제에서 제시하는 바를 반드시 고민하고 결과를 도출해야 한다.
*/

/*
* 문제 1
* 아래에 정의된 함수를 보자.
* 인자로 전달되는 정보를 참조하여 int형 배열요소 전체를 출력하는 함수이다.
* void ShowAllData(const int * arr, int len)
* {
*	int i;
*	for(i=0; i<len; i++)
*		printf("%d ", arr[i]); 
* }
* 위 함수의 매개변수 선언에서 매개변수 arr을 대상으로 const 선언을 한 이유가 무엇이겠는가?
* 이 함수를 정의한 사람의 의도를 이야기해 보자.
*/

/*
* 문제 2
* 아래의 예제는 한 가지 지적할만한 사항을 지니고 있다.
* 그것이 무엇인지 이야기해 보자.
* 특히 이와 관련해서 ShowData 함수를 유심히 관찰하기 바란다.
* 
* void ShowData(const int * ptr)
* {
*	int * rptr=ptr;
*	printf("%d \n", *rptr);
*	*rptr=20;
* }
* 
* int main(void)
* {
*	int num=10;
*	int * ptr = &num;
*	ShowData(ptr);
*	return 0;
* }
*/