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
//#include <stdio.h>
//int SquareByValue(int num) {
//	return num * num;
//}
//void SquareByReference(int* ptr) {
//	int num = *ptr;
//
//	*ptr = num * num;
//}
//
//int main(void) {
//	int num;	
//
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	printf("%d \n", SquareByValue(num));
//	SquareByReference(&num);
//
//	printf("%d \n", num);
//
//	return 0;
//}

/*
* 문제 2
* 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
* 예를 들어서 함수의 이름이 Swap3라하면, 다음의 형태로 함수가 호출되어야 한다.
* Swap3(&num, &num2, &num3);
* 그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/
//#include <stdio.h>
//void Swap3(int* ptr1, int* ptr2, int* ptr3) {
//	int temp = *ptr3;
//	*ptr3 = *ptr2;
//	*ptr2 = *ptr1;
//	*ptr1 = temp;
//}
//
//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30;
//
//	printf("스왑 전 : %d %d %d \n", num1, num2, num3);
//
//	Swap3(&num1, &num2, &num3);
//
//	printf("스왑 후 : %d %d %d \n", num1, num2, num3);
//
//	return 0;
//}

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
* 내 답변 
* arr의 주소값의 변경을 막기 위해
*/

/*
* 모범 답안
* 문제에서 정의한 함수의 기능은 인자로 전달된 배열의 전체요소를 출력하는 것이다.
* 따라서 프로그래머가 실수로라도 배열요소의 값을 바꾸는 일은 없어야 한다.
* 그래서 매개변수 arr에 const 선언을 추가한 것이다.
* 이제 프로그래머가 실수로 배열요소의 값을 바꾸는 코드를 작성할 경우 컴파일 에러가 발생할 것이다.
* 따라서 프로그래머는 자신의 실수를 인식하고 적절히 코드를 수정할 기회를 얻을 수 있게 되었다.
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

/*
* 내 답변
* num의 주소값을 여러번 선언하여 코드 가독성이 좋지않아보임
*/

/*
* 모범 답안
* 문제에서 제시한 다음 함수를 관찰하자.
* 
* void ShowData(const int * ptr)
* {
*		int * rptr = ptr;
*		printf("%d \n", *rptr);
*		*rptr=20;
* }
* 매개변수 ptr에 const선언이 추가되어있다.
* 이는 함수 ShowData 내에서 ptr을 통해 ptr이 가리키는 변수에 저장된 값을 변경시키지 않겠다는 의도가 포함된 선언이다.
* 그런데 다음 행에서 다음과 같이 ptr에 저장된 값을 const로 선언되지 않은 포인터 변수에 대입하고 있다.
* 
*	int * rptr = ptr;	// 이 문장에서 경고 메시지가 발생한다.
* 
* 결과적으로 rptr을 이용해서 ptr이 가리키는 변수에 저장된 값을 변경할 수 있는 상황이 되어버렸다.
* 따라서 ptr에 const 선언을 추가한 것이 의미 없는 상황이 되어버렸다.
* 이렇듯 const 선언을 무의미하게 만드는 문장을 삽입하는 것은 잘못된 일이다.
*/