// P.49 ~

// P.50 SimpleAddOne.c
//#include <stdio.h>
//int main(void) {
//	3 + 4;	// 3�� 4�� ���� �����
//
//	return 0;
//}

// P.52 VarDeclAndInit.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 0, num2 = 0;		// ���� num1, num2�� ����
//	int num3 = 30, num4 = 40;	// ���� num3, num4�� ���� �� �ʱ�ȭ
//
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	num1 = 10;	// ���� num1�� �ʱ�ȭ
//	num2 = 20;	// ���� num2�� �ʱ�ȭ
//
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	printf("num3 : %d, num4 : %d \n", num3, num4);
//
//	return 0;
//}

// P.55 SimpeAddTwo.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 3;
//	int num2 = 4;
//	int result = num1 + num2;
//
//	printf("���� ��� : %d \n", result);
//	printf("%d+%d=%d \n", num1, num2, result);
//	printf("%d��(��) %d�� ���� %d�Դϴ�.\n", num1, num2, result);
//
//	return 0;
//}

// P.57 OperatorOne.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 9, num2 = 2;
//
//	printf("%d+%d=%d \n", num1, num2, num1 + num2);
//	printf("%d-%d=%d \n", num1, num2, num1 - num2);
//	printf("%dX%d=%d \n", num1, num2, num1 * num2);
//	printf("%d ������ %d�� ��=%d \n", num1, num2, num1 / num2);
//	printf("%d ������ %d�� ������=%d \n", num1, num2, num1 % num2);
//
//	return 0;
//}

// P.59 OperatorTwo.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 2, num2 = 4, num3 = 6;
//	num1 += 3;	// num1 = num1 + 3;
//	num2 *= 4;	// num2 = num2 * 4;
//	num3 %= 5;	// num3 = num3 % 5;
//
//	printf("Result : %d, %d, %d \n", num1, num2, num3);
//
//	return 0;
//}

// P.60 OperatorThree.c
//#include <stdio.h>
//int main(void) {
//	int num1 = +2;
//	int num2 = -4;
//
//	num1 = -num1;
//	printf("num1: %d \n", num1);
//	num2 = -num2;
//	printf("num2: %d \n", num2);
//
//	return 0;
//}

// P.61 OperatorFour.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 12;
//	int num2 = 12;
//
//	printf("num1: %d \n", num1);
//	printf("num1++: %d \n", num1++);	// ���� ����
//	printf("num1: %d \n\n", num1);
//
//	printf("num2: %d\n", num2);
//	printf("++num2: %d\n", ++num2);		// ���� ����
//	printf("num2: %d\n", num2);
//
//	return 0;
//}

// P.62 OperatorFive.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = (num1--) + 2;	// ���� ����
//
//	printf("num1: %d \n", num1);
//	printf("num2: %d \n", num2);
//
//	return 0;
//}

// P.64 OperatorSix.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == num2);
//	result2 = (num1 <= num2);
//	result3 = (num1 > num2);
//
//	printf("result1: %d\n", result1);
//	printf("result2: %d\n", result2);
//	printf("result3: %d\n", result3);
//
//	return 0;
//}

// P.66 OperatorSeven.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == 10 && num2 == 12);
//	result2 = (num1 < 12 || num2 > 12);
//	result3 = (!num1);
//
//	printf("result1: %d\n", result1);
//	printf("result2: %d\n", result2);
//	printf("result3: %d\n", result3);
//
//	return 0;
//}

// P.67 CommaOp.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 1, num2 = 2;
//	printf("Hello "), printf("world! \n");
//	num1++, num2++;
//	printf("%d ", num1), printf("%d ", num2), printf("\n");
//
//	return 0;
//}

// P.71 SimpleAddThree.c
//#include <stdio.h>
//int main(void) {
//	int result;
//	int num1, num2;
//
//	printf("���� one: ");
//	scanf("%d", &num1);		// ù ��° ���� �Է�
//	printf("���� two: ");
//	scanf("%d", &num2);		// �� ��° ���� �Է�
//
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//
//	return 0;
//}

// P.73 SimpleAddFour.c
//#include <stdio.h>
//int main(void) {
//	int result;
//	int num1, num2, num3;
//
//	printf("�� ���� ���� �Է�: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	result = num1 + num2 + num3;
//	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//
//	return 0;
//}

/*
* P.74 
* �Ʒ��� �������� ���α׷��� �ͼ����� �� �ֵ��� ���� ���� ������� �����Ͽ�����, 
* ���� �������� ������ �ذ��� �� �ֵ��� ����ϱ� �ٶ���.
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d - %d = %d\n", num1, num2, num1 - num2);
//	printf("%d X %d = %d\n", num1, num2, num1 * num2);
//
//	return 0;
//}

/*
* ���� 2
* ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�, ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
* num1Xnum2+num3
* ��, �Է� ���� �� ���� ������ 2, 4, 6�̶�� ������ ���·� ����� �ؾ� �Ѵ�.
* 2X4+6=14
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("%d X %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}

/*
* ���� 3
* �ϳ��� ������ �Է� �޾Ƽ�, �� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� 5�� �ԷµǸ� 25�� ��µǾ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	printf("%d�� ������ %d�Դϴ�.", num, num * num);
//
//	return 0;
//}

/*
* ���� 4
* �Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǾ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d ������ %d�� ���� %d �Դϴ�.\n", num1, num2, num1 / num2);
//	printf("%d ������ %d�� �������� %d �Դϴ�.\n", num1, num2, num1 % num2);
//
//	return 0;
//}

/*
* ���� 5
* �Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
* (num1-num2)X(num2+num3)X(num3%num1)
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("(%d-%d)X(%d+%d)X(%d/%d) = %d\n", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 / num1));
//
//	return 0;
//}