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
//#include <stdio.h>
//int MaxNum(int num1, int num2, int num3);
//int MinNum(int num1, int num2, int num3);
//
//int main(void) {
//	int num1, num2, num3;
//
//	printf("���� 3�� �Է� : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("���� ū �� : %d \n", MaxNum(num1, num2, num3));
//	printf("���� ���� �� : %d\n", MinNum(num1, num2, num3));
//
//	return 0;
//}
//
//int MaxNum(int num1, int num2, int num3) {
//	if (num1 > num2)
//		return (num1 > num3) ? num1 : num3;
//	else
//		return (num2 > num3) ? num2 : num3;
//}
//
//int MinNum(int num1, int num2, int num3) {
//	if (num1 < num2)
//		return (num1 < num3) ? num1 : num3;
//	else
//		return (num2 < num3) ? num2 : num3;
//}

/*
* ���� 2
* ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
* �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel�̶�� �̸��� �Լ��� �����ϰ�
* �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���.
* ����� ������ ȭ���� �µ���ȯ�� ������ ������ ����.
* Fah = 1.8 X Cel + 32
*/
//#include <stdio.h>
//double CelToFah(double temp);
//double FahToCel(double temp);
//
//int main(void) {
//	int mode;
//	double temp;
//	
//	printf("��� �Է� : \n 1. ���� > ȭ�� ��ȯ 2. ȭ�� > ���� ��ȯ");
//	scanf("%d", &mode);
//
//	if (mode == 1) {
//		printf("�µ� �Է� : ");
//		scanf("%lf", &temp);
//
//		printf("��ȯ ��� : %lf\n", CelToFah(temp));
//	}
//	else if (mode == 2) {
//		printf("�µ� �Է� : ");
//		scanf("%lf", &temp);
//
//		printf("��ȯ ��� : %lf\n", FahToCel(temp));
//	}
//	
//	return 0;
//}
//
//double CelToFah(double temp) {
//	return (1.8 * temp) + 32;
//}
//
//double FahToCel(double temp) {
//	return (temp - 32) / 1.8;
//}

/*
* ���� 3
* ���ڷ� ���޵� �� ��ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���.
* ���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
* ����� �Ǻ���ġ ������ ������ ����.
* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ~
* �̷��� �Ǻ���ġ ������ 0�� 1���� �����Ѵ�.
* �׸��� �� ��° ������ �������ʹ� ������ �� ���� ������ �����ȴ�.
* ��, 3��° ���� 0�� 1�� ������ �̷����� 1�� �ǰ�, �� ��° ���� 1�� 1�� ������ �̷����� 2���ȴ�.
*/
//#include <stdio.h>
//int Fibo(int num);
//
//int main(void) {
//	int num;
//
//	printf("�Ǻ���ġ ���� �󸶳� ����Ͻðڽ��ϱ�? \n");
//	scanf("%d", &num);
//
//	Fibo(num);
//
//	return 0;
//}
//
//int Fibo(int num) {
//	int prevNum = 0;
//	int nowNum = 1;
//	int next;
//
//	printf("%d ", prevNum);
//
//	for (int i = 1; i < num; i++) {
//		printf("%d ", nowNum);
//		next = prevNum + nowNum;
//		prevNum = nowNum;
//		nowNum = next;
//	}
//	printf("\n");
//}

// P.222 LocalVariable.c
//#include <stdio.h>
//
//int SimpleFuncOne(void) {
//	int num = 10;		// ���ĺ��� SimpleFuncOne�� num ��ȿ
//	num++;
//	printf("SimpleFuncOne num : %d \n", num);
//
//	return 0;		// SimpleFuncOne�� num�� ��ȿ�� ������ ����
//}
//
//int SimpleFuncTwo(void) {
//	int num1 = 20;		// ���ĺ��� num1 ��ȿ
//	int num2 = 30;		// ���ĺ��� num2 ��ȿ
//
//	num1++, num2--;
//
//	printf("num1 & num2 : %d %d \n", num1, num2);
//
//	return 0;		// num1, num2 ��ȿ�� ������ ����
//}
//
//int main(void) {
//	int num = 17;		// ���ĺ��� main�� num ��ȿ
//	SimpleFuncOne();
//	SimpleFuncTwo();
//	printf("main num : %d \n", num);
//
//	return 0;		// main�� num�� ��ȿ�� ������ ����
//}

// P.226 AnotherLocalVal.c
//#include <stdio.h>
//int main(void) {
//	int cnt;
//	for (cnt = 0; cnt < 3; cnt++) {
//		int num = 0;
//		num++;
//		printf("%d��° �ݺ�, �������� num�� %d. \n", cnt + 1, num);
//	}
//
//	if (cnt == 3) {
//		int num = 7;
//		num++;
//		printf("if�� ���� �����ϴ� �������� num�� %d. \n", num);
//	}
//
//	return 0;
//}

// P.228 LocalValHideVal.c
//#include <stdio.h>
//int main(void) {
//	int num = 1;
//
//	if (num == 1) {
//		int num = 7;		// �� ���� �ּ�ó�� �ϰ� ������ Ȯ������!
//		num += 10;
//		printf("if�� �� �������� num : %d \n", num);
//	}
//	printf("main �Լ� �� �������� num: %d \n", num);
//
//	return 0;
//}

// P.230 GlobalVariable.c
//#include <stdio.h>
//void Add(int val);
//int num;		// ���������� �⺻ 0���� �ʱ�ȭ��
//
//int main(void) {
//	printf("num : %d \n", num);
//	Add(3);
//	printf("num : %d \n", num);
//	num++;		// �������� num�� �� 1 ����
//	printf("num : %d \n", num);
//
//	return 0;
//}
//
//void Add(int val) {
//	num += val;		//  �������� num�� �� val ��ŭ ����
//}

// P.231 LocalValHideGlobalVal.c
//#include <stdio.h>
//int Add(int val);
//int num = 1;
//
//int main(void) {
//	int num = 5;
//	printf("num : %d \n", Add(3));
//	printf("num : %d \n", num + 9);
//
//	return 0;
//}
//
//int Add(int val) {
//	int num = 9;
//	num += val;
//
//	return num;
//}

// P.234 StaticLocalVariable.c
//#include <stdio.h>
//void SimpleFunc(void) {
//	static int num1 = 0;		// �ʱ�ȭ���� ������ 0 �ʱ�ȭ
//	int num2 = 0;		// �ʱ�ȭ���� ������ ������ �� �ʱ�ȭ
//	num1++, num2++;
//	printf("static : %d, local : %d \n", num1, num2);
//}
//
//int main(void) {
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}

/*
* P.237 ���� 09-2 [static ������ Ȱ��]
* ������ ���α׷� ����ڰ� �Է��ϴ� ���� �����Ͽ� �� �հ踦 ����ϴ� �����̴�.
* #include <stdio.h>
* int total = 0;
* 
* int AddToTotal(int num) {
*	total += num;
*	return total;
* }
* int main(void) {
*	int num, i;
*	for (i = 0; i < 3; i++) {
*		printf("�Է�%d : ", i + 1);
*		scanf("%d", &num);
*		printf("���� : %d \n", AddToTotal(num));
*	}
*	return 0;
* }
* ���� ���������� �Լ� AddToTotal������ ����� �������� �������� total�� �����Ͽ��µ�,
* �̸� static ������ ��ü�غ���.
* �� static �������� ��ü�������� main �Լ��� ������ ����� �ϸ� �������� �����ؾ� �Ѵ�.
*/

//#include <stdio.h>
//int AddToTotal(int num) {
//	static total = 0;
//	total += num;
//	return total;
//}
//int main(void) {
//	int num, i;
//	for (i = 0; i < 3; i++) {
//		printf("�Է�%d : ", i + 1);
//		scanf("%d", &num);
//		printf("���� : %d \n", AddToTotal(num));
//	}
//
//	return 0;
//}

// P.240 RecursiveFunc.c
//#include <stdio.h>
//void Recursive(int num) {
//	if (num <= 0)	// ����� Ż�� ����
//		return;		// ����� Ż��!
//	printf("Recursive call! %d \n", num);
//	Recursive(num - 1);
//}
//
//int main(void) {
//	Recursive(3);
//	
//	return 0;
//}

// P.243 RecursiveFactorial.c
//#include <stdio.h>
//int Factorial(int n) {
//	if (n == 0)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//
//int main(void) {
//	printf("1! = %d \n", Factorial(1));
//	printf("2! = %d \n", Factorial(2));
//	printf("3! = %d \n", Factorial(3));
//	printf("4! = %d \n", Factorial(4));
//	printf("9! = %d \n", Factorial(9));
//
//	return 0;
//}