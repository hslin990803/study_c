// P.290 ~ 포인터와 배열! 함께 이해하기

// P.290 ArrayNameType.c
//#include <stdio.h>
//int main(void) {
//	int arr[3] = { 0,1,2 };
//
//	printf("배열의 이름 : %p \n", arr);
//	printf("첫 번째 요소 : %p \n", &arr[0]);
//	printf("두 번째 요소 : %p \n", &arr[1]);
//	printf("세 번째 요소 : %p \n", &arr[2]);
//	// arr = &arr[i];	// 이 문장은 컴파일 에러를 일으킨다.
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
//	int* ptr = &arr[0];	// int * ptr=arr; 과 동일한 문장
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
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);		// 4가 증가하고 8이 증가한다.
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);		// 8이 증가하고 16이 증가한다.
//
//	printf("%p %p \n", ptr1, ptr2);
//
//	ptr1++;		// 4가 증가한다.
//	ptr2++;		// 8이 증가한다.
//
//	printf("%p %p \n", ptr1, ptr2);
//
//	return 0;
//}

// P.297 PointerBaseArrayAccess.c
//#include <stdio.h>
//int main(void) {
//	int arr[3] = { 11,22,33 };
//	int* ptr = arr;	// int * ptr=&arr[0]; 과 같은 문장
//	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
//
//	printf("%d ", *ptr); ptr++;	// printf 함수호출 후, ptr++ 실행
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr--; // printf 함수호출 후, ptr-- 실행
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); printf("\n");
//
//	return 0;
//}

/*
* P.299 문제 13-1 [포인터를 이용한 배열의 접근]
*/

/*
* 문제 1
* 길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5 로 초기화한 다음, 
* 이 배열의 첫 번째 요소를 가리키는 포인터 변수 ptr을 선언한다.
* 그 다음 포인터 변수 ptr에 저장된 값을 증가시키는 현태의 연산을 기반으로 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고, 
* 정상적으로 증가가 이뤄졌는지 확인하는 예제를 작성해보자.
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
* 문제 2
* 문제 1에서는 포인터 변수 ptr에 저장된 값을 변경시켜가면서 배열요소에 접근하라고 하였다.
* 그런데 이번에는 포인터 변수 ptr에 저장된 값을 변경시키지 않고, ptr을 대상으로 덧셈연산을 하여, 
* 그 결과로 반환되는 주소 값을 통해서 모든 배열요소에 접근하여 값을 2씩 증가시키는 예제를 작성해보자.
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
* 문제 3
* 길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음, 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다.
* 그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근하여, 
* 배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램을 작성해보자.
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
* 문제 4
* 길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화한 다음,
* 배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 예제를 작성해보자.
* 단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.
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
//	char str1[] = "My String";	// 변수 형태의 문자열
//	char* str2 = "Your String"; // 상수 형태의 문자열
//	printf("%s %s \n", str1, str2);
//
//	str2 = "Our String";	// 가리키는 대상 변경
//	printf("%s %s \n", str1, str2);
//
//	str1[0] = 'X';	// 문자열 변경 성공!
//	str2[0] = 'X';	// 문자열 변경 실패!
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