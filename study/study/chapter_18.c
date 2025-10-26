// P.371 ~ 다차원 배열과 포인터의 관계

// P.374 2DArrayAddress.c
//#include <stdio.h>
//int main(void) {
//	int arr2d[3][3];
//	printf("%d \n", arr2d);
//	printf("%d \n", arr2d[0]);
//	printf("%d \n\n", &arr2d[0][0]);
//
//	printf("%d \n", arr2d[1]);
//	printf("%d \n\n", &arr2d[1][0]);
//
//	printf("%d \n", arr2d[2]);
//	printf("%d \n\n", arr2d[2][0]);
//
//	printf("sizeof(arr2d) : %d \n", sizeof(arr2d));
//	printf("sizeof(arr2d[0]) : %d \n", sizeof(arr2d[0]));
//	printf("sizeof(arr2d[1]) : %d \n", sizeof(arr2d[1]));
//	printf("sizeof(arr2d[2]) : %d \n", sizeof(arr2d[2]));
//
//	return 0;
//}

// P.376 2DArrPointerOp.c
//#include <stdio.h>
//int main(void) {
//	int arr1[3][2];
//	int arr2[2][3];
//
//	printf("arr1: %p \n", arr1);
//	printf("arr1+1: %p \n", arr1 + 1);
//	printf("arr1+2: %p \n\n", arr1 + 2);
//
//	printf("arr2: %p \n", arr2);
//	printf("arr2+1: %p \n", arr2 + 1);
//
//	return 0;
// }

// P.379 2DArrNameAndptr.c
//#include <stdio.h>
//int main(void) {
//	int arr1[2][2] = {
//		{1,2},{3,4}
//	};
//	int arr2[3][2] = {
//		{1,2},{3,4},{5,6}
//	};
//	int arr3[4][2] = {
//		{1,2},{3,4},{5,6},{7,8}
//	};
//
//	int (*ptr)[2];
//	int i;
//
//	ptr = arr1;
//	printf("** Show 2,2 arr1 **\n");
//	for (i = 0; i < 2; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//
//	ptr = arr2;
//	printf("** Show 3,2 arr2 **\n");
//	for (i = 0; i < 3; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//
//	ptr = arr3;
//	printf("** Show 4,2 arr3 **\n");
//	for (i = 0; i < 4; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//
//	return 0;	
//}

// P.382 ArrPtrAndPtrArr.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
//	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
//	int i, j;
//
//	int* whoA[4] = { &num1, &num2, &num3, &num4 };	// 포인터 배열
//	int (*whoB)[4] = arr2d;	// 배열 포인터
//
//	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 4; j++)
//			printf("%d ", whoB[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}

// P.383 2DArrParam.c
//#include <stdio.h>
//void ShowArr2DStyle(int (*arr)[4], int column)	// 배열 요소 전체 출력
//{
//	int i, j;
//	for (i = 0; i < column; i++) {
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int Sum2DArr(int arr[][4], int column)	// 배열 요소의 합 반환
//{
//	int i, j, sum = 0;
//	for (i = 0; i < column; i++)
//		for (j = 0; j < 4; j++)
//			sum += arr[i][j];
//
//	return sum;
//}
//
//int main(void) {
//	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
//	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };
//
//	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
//	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
//
//	printf("arr1의 합 : %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
//	printf("arr2의 합 : %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
//
//	return 0;
//}

// P.386 2DArrAccessType.c
//#include <stdio.h>
//int main(void) {
//	int a[3][2] = { {1,2},{3,4},{5,6} };
//
//	printf("a[0] : %p \n", a[0]);
//	printf("*(a+0) : %p \n", *(a + 0));
//
//	printf("a[1] : %p \n", a[1]);
//	printf("*(a+1) : %p \n", *(a + 1));
//
//	printf("a[2] : %p \n", a[2]);
//	printf("*(a+2) : %p \n", *(a + 2));
//
//	printf("%d, %d \n", a[2][1], (*(a + 2))[1]);
//	printf("%d, %d \n", a[2][1], *(a[2]+1));
//	printf("%d, %d \n", a[2][1], *(*(a + 2) + 1));
//
//	return 0;
//}

/*
* P.387 문제 18-1 [2차원 배열의 대한 종합점검]
*/

/*
* 문제 1
* 아래에서 보이는 main 함수에서 물음표 ???을 대신할 수 있는 포인터 변수를 선언해보자.
* int main(void)
* {
*	int * arr1[5];
*	int * arr2[3][5];
* 
*	??? = arr1;
*	??? = arr2;
*	----
* }
* 참고로 이 문제는 난이도가 조금 높은 편이다.
* 이번 Chapter의 내용을 잘 이해한 상태에서 적절히 응용을 해서 해결해야 하는 문제이기 때문이다.
* 그렇다고 해서 그냥 답을 봐버리면 의미 없는 문제가 될 것이다.
* 고민해서 해결하자!
* 그러면 마음속 깊이 포인터를 정복했다는 뿌듯함이 밀려올 것이다.
*/
/*
* 답 
* int **ptr1 = arr1;
* int * (*ptr2)[5] = arr2;
*/

/*
* 문제 2
* 아래의 코드를 참조하여 ???을 대신할 수 잇는 매개변수 선언을 추가해보자.
* void SimpleFuncOne(???, ???) {----}
* void SimpleFuncTwo(???, ???) {----}
* int main(void)
* {
*	int arr1[3];
*	int arr2[4];
*	int arr3[3][4];
*	int arr4[2][4];
* 
*	SimpleFuncOne(arr1, arr2);
*	SimpleFuncTwo(arr3, arr4);
*	----
* }
*/
/*
* 답
* void SimpleFuncOne(int * ar1, int * ar2) {----}
* void SimpleFuncTwo(int (*ar3)[4], int (*ar4)[4]) {----}
*/

/*
* 문제 3
* 이 문제도 위의 문제와 유사하다.
* 즉, ???을 대신할 수 있는 매개변수 선언을 추가하는 것이다.
* 그러나 이번에는 약간의 응용력을 요구한다.
* void ComplexFuncOne(???, ???) {----}
* void ComplexFuncTwo(???, ???) {----}
* int main(void)
* {
*	int * arr1[3];
*	int * arr2[3][5];
*	int ** arr3[5];
*	int *** arr4[3][5];
* 
*	ComplexFuncOne(arr1, arr2);
*	ComplexFuncTwo(arr3, arr4);
*	----
* }
*/
/*
* 답
* void ComplexFuncOne(int ** ptr1, int * (*ptr2)[5]) {----}
* void ComplexFuncTwo(int *** ptr3, int *** (*ptr4)[5]) {----}
*/

/*
* 문제 4
* 다음 예제의 출력결과는 무엇인가?
* 이는 예제를 실행하지 않고 답을 해야 한다.
* int main(void)
* {
*	int arr[3][2]={{1,2},{3,4},{5,6}};
*	printf("%d %d \n", arr[1][0], arr[0][1]);
*	printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));
*	printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);
*	printf("%d %d \n", **arr, *(*(arr+0)+0));
* 
*	return 0;
* }
*/
/*
* 답
* 3 2
* 6 4
* 5 2
* 1 1
*/

/*
* 문제 5
* 아래의 코드를 보자(3차원 배열이라고 겁을 먹을 필요는 없다. 이 문제는 3차원 배열의 특성을 몰라도 해결할 수 있는 문제다.)
* 이 예제에서는 인덱스[1][0][1]의 배열요소를 출력하고 있다.
* 이 때 사용된 arr[1][0][1]을 대신할 수 있는 문장을 5개 이상 제시해보자.
* int main(void)
* {
*	int arr[2][2][2]={1,2,3,4,5,6,7,8};
*	printf("%d \n", arr[1][0][1]);
*	return 0;
* }
*/
/*
* 답
* printf("%d \n", arr[1][0][1]);
* printf("%d \n", (*(arr+1))[0][1]);
* printf("%d \n", (*(*(arr+1)+0))[1]);
* printf("%d \n", *(*(*(arr+1)+0)+1));
* printf("%d \n", (*(arr[1]+0))[1]);
* printf("%d \n", *(*(arr[1]+0)+1));
* printf("%d \n", *(arr[1][0]+1));
*/