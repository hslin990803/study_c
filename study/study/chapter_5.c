// P.105 ~ ����� �⺻ �ڷ���

// P.109 SizeOfOperator.c
//#include <stdio.h>
//int main(void) {
//	char ch = 9;
//	int inum = 1052;
//	double dnum = 3.1415;
//
//	printf("���� ch�� ũ�� : %d\n", sizeof(ch));
//	printf("���� inum�� ũ�� : %d\n", sizeof(inum));
//	printf("���� dnum�� ũ�� : %d\n", sizeof(dnum));
//
//	printf("���� char�� ũ�� : %d\n", sizeof(char));
//	printf("���� int�� ũ�� : %d\n", sizeof(int));
//	printf("���� long�� ũ�� : %d\n", sizeof(long));
//	printf("���� long long�� ũ�� : %d\n", sizeof(long long));
//	printf("���� float�� ũ�� : %d\n", sizeof(float));
//	printf("���� double�� ũ�� : %d\n", sizeof(double));
//
//	return 0;
//}

// P.110 CharShoreBaseAdd.c
//#include <stdio.h>
//int main(void) {
//	char num1 = 1, num2 = 2, result1 = 0;
//	short num3 = 300, num4 = 400, result2 = 0;
//
//	printf("size of num1 & num2 : %d, %d \n", sizeof(num1), sizeof(num2));
//	printf("size of num3 & num4 : %d, %d \n", sizeof(num3), sizeof(num4));
//
//	printf("size of char add : %d \n", sizeof(num1+ num2));
//	printf("size of short add : %d \n", sizeof(num3 + num4));
//
//
//	result1 = num1 + num2;
//	result2 = num3 + num4;
//	printf("size of result1 & result2 : %d, %d \n", sizeof(result1), sizeof(result2));
//
//	return 0;
//}

// P.113 CircleArea.c
//#include <stdio.h>
//int main(void) {
//	double rad;
//	double area;
//
//	printf("���� ������ �Է� : ");
//	scanf("%lf", &rad);
//
//	area = rad * rad * 3.1415;
//	printf("���� ���� : %f \n", area);
//
//	return 0;
//}

// P.117 HowChar.c
//#include <stdio.h>
//int main(void) {
//	char ch1 = 'A', ch2 = 65;
//	int ch3 = 'Z', ch4 = 90;
//
//	printf("%c %d \n", ch1, ch1);
//	printf("%c %d \n", ch2, ch2);
//	printf("%c %d \n", ch3, ch3);
//	printf("%c %d \n", ch4, ch4);
//
//	return 0;
//}

/*
* P.118 ~ 119
* ���� 05-1 [scanf �Լ��� �ƽ�Ű �ڵ�]
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� �� ���� x, y ��ǥ�� �Է� �޾Ƽ�, �� ���� �̷�� ���簢���� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
* ��, �� ����� x, y ��ǥ ���� �� �ϴ��� x, y ��ǥ ������ �۴ٰ� �����ϰ�, �� ����� ��ǥ������ ���� �Է� �޴� ���·� ������ �ۼ��غ���.
* ������ �� �ִ� ������ ���� ������ ����.
* 
* �� ����� x, y ��ǥ : 2 4
* �� �ϴ��� x, y ��ǥ : 4 8
* �� ���� �̷�� ���簢���� ���̴� 8�Դϴ�.
*/

//#include <stdio.h>
//int main(void) {
//	int leftX, leftY;
//	int rightX, rightY;
//	int length, width; // length = ����, width = ����
//
//	printf("�� ����� x, y ��ǥ �Է� : ");
//	scanf("%d %d", &leftX, &leftY);
//
//	printf("�� �ϴ��� x, y ��ǥ �Է� : ");
//	scanf("%d %d", &rightX, &rightY);
//
//	length = rightX - leftX;
//	width = rightY - leftY;
//
//	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.", length * width);
//}

/*
* ���� 2
* ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double�� ������ ��������.
* �׸��� �� ���� ��Ģ���� ����� ����غ���.
*/

//#include <stdio.h>
//int main(void) {
//	double a, b;
//
//	printf("�� ���� �Ǽ� �Է� : ");
//	scanf("%lf %lf", &a, &b);
//
//	printf("%lf + %lf = %lf \n", a, b, a + b);
//	printf("%lf - %lf = %lf \n", a, b, a - b);
//	printf("%lf X %lf = %lf \n", a, b, a * b);
//	printf("%lf / %lf = %lf \n", a, b, a / b);
//
//	return 0;
//}

/*
* ���� 3
* Appendix A�� �ƽ�Ű �ڵ� ǥ�� �����Ͽ� ���� ������ ���� �غ���
* ����1] �ƽ�Ű �ڵ带 �����ϴ� ���� ������ ��� �Ǵ°�? : 0 ~ 127
* ����2] �빮�� A�������� �빮�� Z���� ���� ��� �����ϴ°�? ������ ���� ���غ���. : 1�� ����
* ����3] ���ĺ� �빮�ڿ� �ҹ��ڰ��� ���� ���� ��� �Ǵ°�? ��Ģ���� ã�ƺ���. : ���ĺ� �빮�� + 32�� �ϸ� ���ĺ� �ҹ��ڰ� ����
*/

/*
* ���� 4
* ���α׷� ����ڷκ��� �ƽ�Ű �ڵ� ���� ������ ���·� �Է� ���� �Ŀ� �ش� ������ �ƽ�Ű �ڵ� ���ڸ� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� ����ڰ� ���� 65�� �Է��ϸ� ���� A�� ����ؾ� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num; 
//
//	printf("�ƽ�Ű �ڵ� �� �Է� : ");
//	scanf("%d", &num);
//
//	printf("%c", num);
//
//	return 0;
//}

/*
* ���� 5
* ���α׷� ����ڷκ��� ���ĺ� ���� �ϳ��� �Է� �޴´�.
* �׸��� �̿� �ش��ϴ� �ƽ�Ű �ڵ� ���� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� ���α׷� ����ڰ� ���� A�� �Է��ϸ� ���� 65�� ����ؾ��Ѵ�.
*/

//#include <stdio.h>
//int main(void) {
//	char ch;
//
//	printf("���ĺ� ���� �ϳ� �Է� : ");
//	scanf("%c", &ch);
//
//	printf("%d", ch);
//
//	return 0;
//}

// P.122 LiteralSize.c
//#include <stdio.h>
//int main(void) {
//	printf("literal int size : %d \n", sizeof(7));
//	printf("literal double size : %d \n", sizeof(7.14));
//	printf("literal char size : %d \n", sizeof('A'));
//
//	return 0;
//}

// P.126 AutoConvOne.c
//#include <stdio.h>
//int main(void) {
//	double num1 = 245;
//	int num2 = 3.1415;
//	int num3 = 129;
//	char ch = num3;
//
//	printf("���� 245�� �Ǽ��� : %f \n", num1);
//	printf("�Ǽ� 3.1415�� ������ : %d \n", num2);
//	printf("ū ���� 129�� ���� ������ : %d \n", ch);
//
//	return 0;
//}

// P.129 ConvDiv.c
//#include <stdio.h>
//int main(void) {
//	int num1 = 3, num2 = 4;
//	double divResult;
//	divResult = (double)num1 / num2;
//
//	printf("������ ��� : %f \n", divResult);
//
//	return 0;
//}