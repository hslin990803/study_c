// P.133 ~ printf �Լ��� scnaf �Լ� �����ϱ�

// P.134 StringPrintf.c
//#include <stdio.h>
//int main(void) {
//	printf("I like programming \n");
//	printf("I love puppy! \n");
//	printf("I am so happy \n");
//	
//	printf("���� �������� ���ߴ�. \"��~! ��~!\" ���� �Ϳ���.");
//	return 0;
//}

// P.137 FormPrintf.c
//#include <stdio.h>
//int main(void) {
//	int myAge = 12;
//	printf("�� ���̴� 10������ %d��, 16������ %X���Դϴ�. \n", myAge, myAge);
//
//	return 0;
//}

// P.139 OctHex.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 7, num2 = 13;
//
//	printf("%o %#o \n", num1, num1);
//	printf("%x %#x \n", num2, num2);
//
//	return 0;
//}

// P.139 RealNumOutput.c
//#include <stdio.h>
//int main(void) {
//	printf("%f \n", 0.1234);
//	printf("%e \n", 0.1234);	// e ǥ��� ����� ���
//	printf("%f \n", 0.12345678);
//	printf("%e \n", 0.12345678);	// e ǥ��� ����� ���
//
//	return 0;
//}

// P.141 UsingPG.c
//#include <stdio.h>
//int main(void) {
//	double d1 = 1.23e-3;	// 0.00123
//	double d2 = 1.23e-3;	// 0.000123
//	double d3 = 1.23e-5;	// 0.0000123
//	double d4 = 1.23e-6;	// 0.00000123
//
//	printf("%g \n", d1);	// %f ��Ÿ�� ���
//	printf("%g \n", d2);	// %f ��Ÿ�� ���
//	printf("%g \n", d3);	// %e ��Ÿ�� ���
//	printf("%g \n", d4);	// %e ��Ÿ�� ���
//
//	return 0;
//}

// P.142 UsingPS.c
//#include <stdio.h>
//int main(void) {
//	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");
//
//	return 0;
//}

// P.143 FieldWidth.c
//#include <stdio.h>
//int main(void) {
//	printf("%-8s %14s %5s \n", "��  ��", "�����а�", "�г�");
//	printf("%-8s %14s %5d \n", "�赿��", "���ڰ���", 3);
//	printf("%-8s %14s %5d \n", "������", "��ǻ�Ͱ���", 2);
//	printf("%-8s %14s %5d \n", "�Ѽ���", "�̼�������", 4);
//
//	return 0;
//}

// P.144 ScanfConvOne.c
//#include <stdio.h>
//int main(void) {
//	int num1, num2, num3;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %o %x", &num1, &num2, &num3);
//
//	printf("�Էµ� ���� 10���� ��� : ");
//	printf("%d %d %d \n", num1, num2, num3);
//
//	return 0;
//}

// P.145 ScanfConvTwo.c
//#include <stdio.h>
//int main(void) {
//	float num1;
//	double num2;
//	long double num3;
//
//	printf("�Ǽ� �Է�1(e ǥ�������) : ");
//	scanf("%f", &num1);
//	printf("�Էµ� �Ǽ� %f \n", num1);
//
//	printf("�Ǽ� �Է�2(e ǥ�������) : ");
//	scanf("%lf", &num2);
//	printf("�Էµ� �Ǽ� %f \n", num2);
//
//	printf("�Ǽ� �Է�3(e ǥ�������) : ");
//	scanf("%Lf", &num3);
//	printf("�Էµ� �Ǽ� %Lf \n", num3);
//
//	return 0;
//}