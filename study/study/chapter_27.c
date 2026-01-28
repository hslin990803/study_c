// P.580 ~ 파일의 분할과 헤더파일의 디자인

// P.580 SimpleOneFile.c
//#include <stdio.h>
//int num = 0;
//
//void Increment(void) {
//	num++;
//}
//
//int GetNum(void) {
//	return num;
//}
//
//int main(void) {
//	printf("num : %d \n", GetNum());
//	Increment();
//	printf("num : %d \n", GetNum());
//	Increment();
//	printf("num : %d \n", GetNum());
//
//	return 0;
//}

// P.588 header1.h header2.h main.c
//#include <stdio.h>
//
//int main(void)
//#include "27_header1.h"
//#include "27_header2.h"

// P.592 basic Arith.h basic Arith.c areaArith.h areaArith.c roundArith.h roundArith.c