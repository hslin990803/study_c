// P.207~ C���� �ٽ�! �Լ�!

// P.209 PrintfOutput.c
//#include <stdio.h>
//int main(void) {
//	int num1, num2;
//	num1 = printf("12345\n");
//	num2 = printf("I love my home\n");
//	printf("%d %d \n", num1, num2);
//
//	return 0;
//}

// P.212 SimpleAddFunc.c
//#include <stdio.h>
//int Add(int num1, int num2) {
//	return num1 + num2;
//}
//
//int main(void) {
//	int result;
//	result = Add(3, 4);
//	printf("������� 1 : %d \n", result);
//	result = Add(5, 8);
//	printf("������� 2 : %d \n", result);
//
//	return 0;
//}

// P.214 SmartAddFunc.c
//#include <stdio.h>
//int Add(int num1, int num2) {	// ��������(o), ��ȯ ��(o)
//	return num1 + num2;
//}
//
//void ShowAddResult(int num) {	// ��������(o), ��ȯ ��(x)
//	printf("������� ��� : %d \n", num);
//}
//
//int ReadNum(void) {		// ��������(o), ��ȯ ��(x)
//	int num;
//
//	scanf("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void) {	// ��������(x), ��ȯ ��(x)
//	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
//	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
//}
//
//int main(void) {
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//
//	return 0;
//}

// P.218 NumCompare.c
//#include <stdio.h>
//int NumberCompare(int num1, int num2);
//
//int main(void) {
//	printf("3�� 4�߿��� ū ���� %d �̴�. \n", NumberCompare(3, 4));
//	printf("7�� 2�߿��� ū ���� %d �̴�. \n", NumberCompare(7, 2));
//
//	return 0;
//}
//
//int NumberCompare(int num1, int num2) {
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}

// P.219 AbsoCompare.c
//#include <stdio.h>
//int AbsoCompare(int num1, int num2);	// ������ ū ���� ��ȯ
//int GetAbsoValue(int num);	// ���������� ������ ��ȯ
//
//int main(void) {
//	int num1, num2;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//	printf("%d�� %d�� ���밪�� ū ���� : %d \n", num1, num2, AbsoCompare(num1, num2));
//
//	return 0;
//}
//
//int AbsoCompare(int num1, int num2) {
//	if (GetAbsoValue(num1) > GetAbsoValue(num2))
//		return num1;
//	else
//		return num2;
//}
//
//int GetAbsoValue(int num) {
//	if (num < 0)
//		return num * (-1);
//	else
//		return num;
//}

/*
* P.221 ���� 09-1 [�پ��� �Լ� �����ϱ�]
*/

/*
* ���� 1
* �� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�Լ��� �����غ���.
* �׸��� �� �Լ����� ȣ���ϴ� ������ main�Լ��� �ۼ��غ���.
*/

/*
* ���� 2
* ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
* �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel�̶�� �̸��� �Լ��� �����ϰ�
* �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
* ����� ������ ȭ���� �µ���ȯ�� ������ ������ ����.
* Fah = 1.8 X Cel + 32
*/

/*
* ���� 3
* ���ڷ� ���޵� �� ��ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���.
* ���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
* ����� �Ǻ���ġ ���������� ������ ����.
* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ~
* �̷��� �Ǻ���ġ ������ 0�� 1���� �����Ѵ�.
* �׸��� �� ��° ������ �������ʹ� ������ �� ���� ������ �����ȴ�.
* ��, 3��° ���� 0�� 1�� ������ �̷����� 1�� �ǰ�, �� ��° ���� 1�� 1�� ������ �̷����� 2���ȴ�.
*/