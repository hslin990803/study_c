// P.177 ���ǿ� ���� �帧�� �б�

// P.179 IfBasic.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	if (num < 0)	// num�� 0���� ������ �Ʒ��� ���� ����
//		printf("�Է� ���� 0���� �۴�. \n");
//
//	if (num > 0)	// num�� 0���� ũ�� �Ʒ��� ���� ����
//		printf("�Է°��� 0���� ũ��. \n");
//
//	if (num == 0)	// num�� 0�̸� �Ʒ��� ���� ����
//		printf("�Է� ���� 0�̴�. \n");
//
//	return 0;
//}

// P.180~181 CalOne.c
//#include <stdio.h>
//int main(void) {
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է� : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//
//	printf("��� : %f \n", result);
//
//	return 0;
//}

// P.182 Mul3Mul4.c
//#include <stdio.h>
//int main(void) {
//	int num;
//
//	for (num = 1; num < 100; num++) {
//		if (num % 3 == 0 || num % 4 == 0)
//			printf("3 �Ǵ� 4�� ��� : %d \n", num);
//	}
//	return 0;
//}

// P.183 IFElseBasic.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("�Է� ���� 0���� �۴�. \n");
//	else
//		printf("�Է� ���� 0���� ���� �ʴ�. \n");
//
//	return 0;
//}

// P.185~186 CalTwo.c
//#include <stdio.h>
//int main(void) {
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է� : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else
//		result = num1 / num2;
//
//	printf("��� : %f \n", result);
//
//	return 0;
//}

// P.188 ThreeOperand.c
//#include <stdio.h>
//int main(void) {
//	int num, abs;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("���� : %d \n", abs);
//
//	return 0;
//}

/*
* P.189 ���� 08-1 [if~else���� Ȱ��]
* if~else�� ���õ� ������� ���غ��� �߿��� ���� ����ɷ��̴�.
* ���� �Ʒ��� ������ �����Ѵ�.
* �� �������� Ǯ�� ���� ��� ���� ����ɷ��� ���� ���̴�.
*/

/*
* ���� 1
* 1�̻� 100�̸��� ���� �߿��� 7�� ����� 9�� ����� ����ϴ� ���α׷��� �ۼ��� ����.
* ��! 7�� ����̸鼭 ���ÿ� 9�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int i;
//
//	for (i = 1; i < 100; i++) {
//		if (i % 7 == 0 && i % 9 == 0) {
//			printf("7�� ����̸鼭 ���ÿ� 9�� ��� : %d \n", i);
//		}
//		else if (i % 7 == 0 || i % 9 == 0) {
//			printf("7�� ��� �Ǵ� 9�� ��� : %d \n", i);
//		}
//	}
//	return 0;
//}

/*
* ���� 2
* �� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� ������ ����.
* ��, ������ ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�.
* ���� �� �Էµ� �� ���� ������ ������� 12�� 5��� 7�� ��µǾ�� �ϰ�,
* �Էµ� �� ���� ������ ������� 4�� 16�̶�� 12�� ��µǾ�� �Ѵ�.
* ��, ��� ����� ������ 0 �̻��� �Ǿ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2)
//		printf("%d - %d = %d \n", num1, num2, num1 - num2);
//	else if(num1 < num2)
//		printf("%d - %d = %d \n", num2, num1, num2 - num1);
//
//	return 0;
//}

/*
* ���� 3
* �л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����.
* �л��� ������ 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D �׸��� �� �̸��̸� F��!
* ���α׷� ���� �� ������� ����, ����, ������ ������ �Է� �޴´�.
* �׸���� ����� ���� ���� �׿� ������ ������ ����ϸ� �ȴ�.
*/
//#include <stdio.h>
//int main(void) {
//	int kor, eng, math, avg;
//
//	printf("���� ���� �Է� : ");
//	scanf("%d", &eng);
//
//	printf("���� ���� �Է� : ");
//	scanf("%d", &kor);
//
//	printf("���� ���� �Է� : ");
//	scanf("%d", &math);
//
//	avg = (eng + kor + math) / 3;
//
//	if (avg >= 90 && avg <= 100)
//		printf("A \n");
//	else if (avg < 90 && avg >= 80)
//		printf("B \n");
//	else if (avg < 80 && avg >= 70)
//		printf("C \n");
//	else if (avg < 70 && avg >= 50)
//		printf("D \n");
//	else
//		printf("F");
//
//	return 0;
//}

/*
* ���� 4
* ���� ���� 2�� if~else���� �̿��ؼ� �ذ��Ͽ��°�?
* ��� ���·� �ذ��߰� ���� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� ������ ����.
*/
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	int result;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	result = num1 > num2 ? num1 - num2 : num2 - num1;
//	
//	printf("%d \n", result);
//
//	return 0;
//}

// P.190 WhenOver5000.c
//#include <stdio.h>
//int main(void) {
//	int sum = 0, num = 0;
//
//	while (1) {
//		sum += num;
//		if (sum > 5000)
//			break;		// break�� ����! ���� �ݺ��� Ż��
//		num++;
//	}
//
//	printf("sum : %d \n", sum);
//	printf("num : %d \n", num);
//
//	return 0;
//}

// P.191~192 ExceptMul2Mul3.c
//#include <stdio.h>
//int main(void) {
//	int num;
//	printf("start! ");
//
//	for (num = 1; num < 20; num++) {
//		if (num % 2 == 0 || num % 3 == 0)
//			continue;
//		printf("%d ", num);
//	}
//	printf("end! \n");
//
//	return 0;
//}

/*
* P.193 ���� 08-2 [continue & break�� Ȱ��]
* ���α׷����� �����ϴ� ����� ���̿� �ϴ� ���� �ִ�.
* "����� �ҿ���Ÿ��! ��Ÿ�� �ҿ������̶�!"
* ���⿡�� ���� ���α׷����� �غ��� �͸�ŭ ���� ���ι���� ���ٴ� ���� ����ִ�.
* �׸�ŭ ���α׷��� ������ �����п��� �߿��ϴ�.
*/

/*
* ���� 1
* �������� ����ϵ� ¦�� ��(2��, 4��, 6��, 8��)�� ��µǵ��� ����.
* ���� 2���� 2X2����, 4���� 4X4����, 6���� 6X6����, 8���� 8X8���� ��µǵ��� ���α׷��� ������ ����.
* �̷��� ������� ������ �����ϴ� ������ continue�� break���� ������ ������ ���ؼ���.
* �׷��� �������̸� continue�� break���� ����ؼ� �� ������ �ذ��ϱ� �ٶ���.
*/

/*
* ���� 2
* ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��غ���
*   A Z
* + Z A
* -------
*   9 9
* �����, ������ ��� ���� ������ �õ��ϱ� ���ؼ��� �ݺ����� ��ø���Ѿ� �Ѵ�.
*/