// P.337 ~ 다차원 배열

// P.339 TwoDimArraySize.c
//#include <stdio.h>
//int main(void) {
//	int arr1[3][4];
//	int arr2[7][9];
//
//	printf("세로3, 가로4 : %d \n", sizeof(arr1));
//	printf("세로7, 가로9 : %d \n", sizeof(arr2));
//
//	return 0;
//}

// P.342 PopuResarch.c
//#include <stdio.h>
//int main(void) {
//	int villa[4][2];
//	int popu, i, j;
//
//	/* 가구별 거주인원 입력 받기 */
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//	/* 빌라의 층별 인구수 출력하기 */
//	for (i = 0; i < 4; i++) {
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d층 인구수 : %d \n", i + 1, popu);
//	}
//
//	return 0;
//}

// P.344 TwoDimArrayAddr.c
//#include <stdio.h>
//int main(void) {
//	int arr[3][2];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			printf("%p \n", &arr[i][j]);
//	return 0;
//}

// P.346 TwoDimaArrayInit.c
//#include <stdio.h>
//int main(void) {
//	int i, j;
//
//	/* 2차원 배열 초기화의 예 1 */
//	int arr1[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//
//	/* 2차원 배열 초기화의 예 2 */
//	int arr2[3][3] = {
//		{1},
//		{4,5},
//		{7,8,9}
//	};
//
//	/* 2차원 배열 초기화의 예 3 */
//	int arr3[3][3] = { 1,2,3,4,5,6,7 };
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr1[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr2[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d ", arr3[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}

// P.348 문제 16-1 [2차원 배열의 활용] 그림 많으니 책 참고
/*
* 문제 1
* 가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여 구구단 중 2단, 3단, 4단을 다음과 같이 저장하자.
* P.348 그림 참고
* 그리고 제대로 저장이 되었는지 확인하기 위한 출력을 진행하는 예제를 작성해보자.
*/
//#include <stdio.h>
//int main(void) {
//	int arr[3][9];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 9; j++) {
//			arr[i][j] = (i + 2) * (j + 1);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 9; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*
* 문제 2
* 아래 그림과 관련해서 문제를 제시할 테니, 그림에서 제시하는 배열 A와 배열 B를 유심히 관찰하자.
* P.349 그림 참고
* 위 그림의 형태대로 배열 A와 배열 B를 선언하자.
* 그리고 배열 A는 선언과 동시에 그림에서 명시하는 대로 초기화를 진행하자!
* 그리고 배열 B도 위 그림에서 보이는 대로 초기화를 진행하되, 반드시 배열 A에 저장된 값을 이용해서 초기화를 진행해야 한다.
*/
//#include <stdio.h>
//int main(void) {
//	int a[2][4] = {
//		{1,2,3,4},
//		{5,6,7,8}
//	};
//
//	int b[4][2];
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 4; j++) {
//			b[j][i] = a[i][j];
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%2d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*
* 문제 3
* 성적관리 프로그램을 작성하자.
* 과목은 국어, 영어, 수학, 국사 이렇게 네 과목이고 학생은 철희, 철수, 영희, 영수 이렇게 네 사람이다.
* 프로그램 사용자로부터 이 네 사람의 네 과목 점수를 입력받는다.
* 그리고 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장해야 한다.
* P.349 그림 참고
* 저장이 끝났다면, 개인별 총점과 과목별 총점을 계산해서 다음 그림에서 보이는 배열의 위치에 저장해야 한다.
* 그리고 마지막에는 저장된 값의 검증을 위한 출력을 보여야 한다.
* P.349 그림 참고 
*/
//#include <stdio.h>
//int record[5][5];
//
//void WriteRecord() {
//	int sum;
//
//	for (int i = 0; i < 4; i++) {
//		sum = 0;
//		printf("%d번째 학생의 성적 입력 \n", i + 1);
//		for (int j = 0; j < 4; j++) {
//			printf("과목 %d : ", j + 1);
//			scanf("%d", &record[i][j]);
//			sum += record[i][j];
//		}
//		record[i][4] = sum;
//	}
//}
//
//void WriteSumRecord() {
//	int sum = 0;
//	
//	for (int i = 0; i < 4; i++) {
//		sum = 0;
//		for (int j = 0; j < 4; j++) {
//			sum += record[j][i];
//		}
//		record[4][i] = sum;
//		record[4][4] += sum;
//	}
//}
//
//void ShowAllRecord() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%3d ", record[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//	WriteRecord();
//	WriteSumRecord();
//	ShowAllRecord();
//
//	return 0;
//}

// P.351 ThreeDimArraySize.c
//#include <stdio.h>
//int main(void) {
//	int arr1[2][3][4];
//	double arr2[5][5][5];
//
//	printf("높이2, 세로3, 가로4 int형 배열 : %d \n", sizeof(arr1));
//	printf("높이5, 세로5, 가로5 double형 배열 : %d \n", sizeof(arr2));
//
//	return 0;
//}

// P.351 ThreeDimArrayAccess.c
//#include <stdio.h>
//int main(void) {
//	int mean = 0, i, j;
//	int record[3][3][2] = {
//		{
//			{70, 80},	// A 학급 학생 1의 성적
//			{94, 90},	// A 학급 학생 2의 성적
//			{70, 85}		// A 학급 학생 3의 성적
//		},
//		{
//			{83, 90},	// B 학급 학생 1의 성적
//			{95, 60},	// B 학급 학생 2의 성적
//			{90, 82},	// B 학급 학생 3의 성적
//		},
//		{
//			{98, 89},	// C 학급 학생 1의 성적
//			{99, 94},	// C 학급 학생 2의 성적
//			{91, 87},	// C 학급 학생 3의 성적
//		}
//	};
//
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[0][i][j];
//	printf("A 학급 전체 평균 : %g \n", (double)mean / 6);
//
//	mean = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[1][i][j];
//	printf("B 학급 전체 평균 : %g \n", (double)mean / 6);
//
//	mean = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 2; j++)
//			mean += record[2][i][j];
//	printf("C 학급 전체 평균 : %g \n", (double)mean / 6);
//
//	return 0;
//}