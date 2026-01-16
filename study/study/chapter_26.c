// P.555 ~ 매크로와 선행처리기(Preprocessor) 

// P.559 MacroConst.c
//#include <stdio.h>	
//
//#define NAME	"홍길동"
//#define AGE		24
//#define PRINT_ADDR	puts("주소 : 경기도 용인시 \n");
//
//int main(void) {
//	printf("이름 : %s \n", NAME);
//	printf("나이 : %d \n", AGE);
//	PRINT_ADDR;
//
//	return 0;
//}

// P.560 MacroFunction.c
//#include <stdio.h>
//#define SQUARE(X) X*X
//
//int main(void) {
//	int num = 20;
//
//	/* 정상적 결과 출력 */
//	printf("Square of num : %d \n", SQUARE(num));
//	printf("Square of -5 : %d \n", SQUARE(-5));
//	printf("Square of 2.5 : %g \n", SQUARE(2.5));
//
//	/* 비정상적 결과 출력 */
//	printf("Square of 3-2 : %d \n", SQUARE(3 + 2));
//	return 0;
//}

// P.563 MacroUseMacro.c
//#include <stdio.h>
//#define PI 3.14
//#define PRODUCT(X, Y) ((X) * (Y))
//#define CIRCLE_AREA(R) (PRODUCT((R), (R)) * PI)
//
//int main(void) {
//	double rad = 2.1;
//	printf("반지름 : %g인 원의 넓이 : %g \n", rad, CIRCLE_AREA(rad));
//
//	return 0;
//}

// P.565 MacroFunctionWeakness.c
//#include <stdio.h>
//#define DIFF_ABS(X, Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))
//
//int main(void) {
//	printf("두 값의 차 : %d \n", DIFF_ABS(5, 7));
//	printf("두 값의 차 : %d \n", DIFF_ABS(1.8, -1.4));
//
//	return 0;
//}