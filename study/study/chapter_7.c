// P.147 ~ �ݺ������� ����ϴ� �ݺ���

// P.149 SimpeWhile.c
//#include <stdio.h>
//int main(void) {
//	int num = 0;
//
//	while (num < 5) {
//		printf("Hello world! %d \n", num);
//		num++;
//	}
//
//	return 0;
//}

// P.153 NineNineDan.c
//#include <stdio.h>
//int main(void) {
//	int dan = 0, num = 1;
//	printf("�� ��? ");
//	scanf("%d", &dan);
//
//	while (num < 10) {
//		printf("%dX%d=%d \n", dan, num, dan * num);
//		num++;
//	}
//	return 0;
//}

/*
* P.155 ���� 07-1 [while���� Ȱ��]
* �ݺ����� ù ������ while���� �����Ͽ�����, ���� �������� ���ؼ� while���� Ȱ��ɷ��� ��� ��Ű�� �ٶ���.
* ��� �Ŀ� �ݺ����� ��ø���� ���� ���ݺ��� �� ���� �����ؾ� �ϴ�, �Ʒ��� ������ ���ؼ� while���� �ͼ������� �ٶ���.
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world!"�� ����ϴ� ���α׷��� �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 0;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	while (i < num) {
//		printf("Hello world! %d\n", i);
//		i++;
//	}
//	return 0;
//}

/*
* ���� 2
* ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��غ���.
* ���� �� 5�� �Է� �޾Ҵٸ�, 3, 6, 9, 12, 15�� ����ؾ� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 1;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("%d\n", 3 * i);
//		i++;
//	}
//	return 0;
//}

/*
* ���� 3
* ���α׷� ����ڷκ��� ����ؼ� ������ �Է� �޴´�.
* �׸��� �� ���� ����ؼ� ���� ������.
* �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������ ��ӵǾ�� �ϸ�,
* 0�� �ԷµǸ� �Էµ� ��� ������ ���� ����ϰ� ���α׷��� �����Ų��.
*/
//#include <stdio.h>
//int main(void) {
//	int num = 0, result = 0;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//	result += num;
//
//	while (num != 0) {
//		printf("���� �Է� : ");
//		scanf("%d", &num);
//		result += num;
//	}
//	printf("�Էµ� ��� ������ �� : %d", result);
//
//	return 0;
//}

/*
* ���� 4
* ���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� ����ϴ� ���α׷��� �ۼ��غ���.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i = 9;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	while (i > 0) {
//		printf("%d X %d = %d \n", num, i, num * i);
//		i--;
//	}
//	return 0;
//}

/*
* ���� 5
* ���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��ϵ� ���� �� ���� ������ �������Ѿ� �Ѵ�.
* "���� ��� ������ �Է��� ������ ���α׷� ����ڿ��� ���´�. �׸��� �� ����ŭ ������ �Է� �޴´�."
* "��� ���� �Ҽ��� ���ϱ��� ����ؼ� ����Ѵ�."
*/
//#include <stdio.h>
//int main(void) {
//	int count, num, result = 0, i = 0;
//	double avg;
//
//	printf("�� ���� ������ �Է��� ���Դϱ�? ");
//	scanf("%d", &count);
//
//	while (i < count) {
//		printf("���� �Է� : ");
//		scanf("%d", &num);
//		result += num;
//
//		i++;
//	}
//	avg = result / count;
//	printf("��� �� : %lf", avg);
//
//	return 0;
//}

// P.156 TwoToNine.c
//#include <stdio.h>
//int main(void) {
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10) {		// 2�ܺ��� 9�ܱ��� �ݺ�
//		is = 1;	// ���ο� ���� ������ ���ؼ�
//		while (is < 10) {	// �� ���� 1���� 9�� ���� ǥ��
//			printf("%dX%d=%d\n", cur, is, cur * is);
//			is++;
//		}
//		cur++;	// ���� ������ �Ѿ�� ���� ����
//		printf("\n");
//	}
//	return 0;
//}

/*
* P.157 ���� 07-2 [while���� ��ø]
* �̹��� �����ϴ� �������� while���� ��ø������ �� ���� �ذ��� �� �ִ� �������̴�.
* ���� ��ø��Ű�� �ʰ� �ذ��� ����������, while���� ��ø�� ��������ڴ� ���̴� �ݵ�� while ���� ��ø���Ѽ� �ذ��� ����.
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
* ��! �Ѱ��� ������ �ִ�.
* ������ �ݵ�� 1�̻��̾�� �Ѵ�.
* ������ 1�̸��� ���� �ԷµǴ� ��쿡��, �̸� �Է����� �������� �ʰ� �� �Է��� �䱸�ؾ� �Ѵ�.
* �׷��� �ᱹ 1�̻��� ���� 5���� ��� �Է� ���� �� �ֵ��� ���α׷��� �ϼ��ؾ� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int i = 0, sum = 0;
//	int num;
//
//	while (i < 5) {
//		printf("���� �Է� : ");
//		scanf("%d", &num);
//
//		while (num < 1) {
//			printf("1�̻��� ���� �Է����ּ���. ");
//			scanf("%d", &num);
//		}
//		sum += num;
//		i++;
//	}
//	printf("�Էµ� ������ �� �� : %d\n", sum);
//
//	return 0;
//}

/*
* ���� 2
* �Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.
* *
* o*
* oo*
* ooo*
* oooo*
* �����, �� 5���� ���ļ� ����� �̷�����, ���� ������ ������ o ������ ���� �����Ѵٴ� Ư¡�� ������� while���� ��ø�� �����ϸ� �ȴ�.
*/
//#include <stdio.h>
//int main(void) {
//	int i = 0, j = 0;
//
//	while (i < 5) {
//		j = 0;
//		while (j < i) {
//			printf("o");
//			j++;
//		}
//		printf("*\n");
//		i++;
//	}
//	return 0;
//}

// P.160 UsefulDoWhile.c
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 0;
//
//	do {
//		printf("���� �Է�(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	} while (num != 0);
//
//	printf("�հ� : %d \n", total);
//
//	return 0;
//}

/*
* P.161 ���� 07-3 [while���� do~while���� �ͼ�������]
*/

/*
* ���� 1
* �ٷ� ������ ���� ���� UsefulDowhile.c�� while�� ������� �� ������ ���, �����غ� �� �ִ� ������ ���´� �� �����̴�.
* �� �� ���� ����� ������ ����.
* 
* - ��� 1
* ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.
* 
* - ��� 2
* while ���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.
* 
* �� �� ���� ����� ���� �����ؼ� ���� UsefulDoWhile.c�� while�� ������� �� ������ ����.
* ����� ��� ����̵� do~while���� �������� �����ٴ� ���ڿ������ٴ� ������ �� ���̴�.
*/
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 1;
//
//	while (num != 0) {
//		num = 0;
//		printf("���� �Է�(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("�հ� : %d \n", total);
//
//	return 0;
//}

/*
* ���� 2
* 0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�, do~while�� ������� �����غ���.
* ����� ������ ����� 2550�� �Ǿ�� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int total = 0, num = 0;
//
//	do {
//		total += num;
//		num = num + 2;
//	} while (num <= 100);
//	printf("0�̻� 100������ ���� �� ¦���� �� : %d", total);
//
//	return 0;
//}

/*
* ���� 3
* while���� ��ø���� ���� TwoToNine.c�� do~while���� ��ø������� �� ������ ����.
* do~while���� ��ø�� ���ؼ��� ������ ����� ��������, while���� ��ø�� �����Ͽ�����, ����� ������ �����ϴ�.
*/
//#include <stdio.h>
//int main(void) {
//	int cur = 2;
//	int is = 0;
//
//	do {
//		is = 1;
//		do {
//			printf("%dX%d=%d\n", cur, is, cur * is);
//			is++;
//		} while (is < 10);
//		cur++;
//		printf("\n");
//	} while (cur < 10);
//
//	return 0;
//}

// P.165 AddToNum.c
//#include <stdio.h>
//int main(void) {
//	int total = 0;
//	int i, num;
//	printf("0���� num������ ����, num��? ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num + 1; i++)
//		total += i;
//
//	printf("0���� %d���� ������� : %d \n", num, total);
//
//	return 0;
//}

// P.166 RealMean.c
//#include <stdio.h>
//int main(void) {
//	double total = 0.0;
//	double input = 0.0;
//	int num = 0;
//
//	for (; input >= 0.0;) {
//		total += input;
//		printf("�Ǽ� �Է�(minus to quit) : ");
//		scanf("%lf", &input);
//		num++;
//	}
//
//	printf("��� : %f \n", total / (num - 1));
//
//	return 0;
//}

/*
* P.167 ���� 07-4 [for���� Ȱ��]
* �Ʒ��� ������ Ǯ��� �͵� ������,
* �ռ� ������ while, do~while ���� ������ ������ ����� for�� ������� �� ������ ���� �͵� for���� �ͼ������µ� ū ������ �ȴ�.
* �׷� �̾ �� ���� ������ �����ϰڴ�.
* ���� �� ������ for���� �̿��ؼ� �ذ��ؾ� �ϸ�, ������ ������ �ִٸ�, �Ʒ��� �������� 
* while���� do~while���� �̿��ؼ� �ٽ� �ѹ� Ǯ��� �͵� ���� �н��� �ȴ�.
*/

/*
* ���� 1
* ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�, 
* �� ������ �����Ͽ� �� ���̿� �����ϴ� ���� ���� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
* ���� �� 3�� 5�� �ԷµǸ�, 3+4+5�� ����� ��µǾ�� �Ѵ�.
* �׸��� ������ ���� ������ �ϱ� ���ؼ�, ù ��° �ԷµǴ� �������� �� ��° �ԷµǴ� ������ �� Ŀ�� �Ѵٴ� ������ �ɱ�� �ϰڴ�.
*/
//#include <stdio.h>
//int main(void) {
//	int i, j;
//	int start, end;
//	int total = 0;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &start, &end);
//
//	for (i = start; i <= end; i++) {
//		total += i;
//	}
//	printf("%d�� %d ���̿� �����ϴ� �������� �� : %d", start, end, total);
//
//	return 0;
//}

/*
* ���� 2
* ���� ������ ���(factorial) ����ϴ� ���α׷��� �ۼ��غ���.
* n! = 1X2X3X ~ Xn
* ���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �޴´�.
* �׷��� n�� ��� n!�� ����ؼ� ����� �̷����� �Ѵ�.
*/
//#include <stdio.h>
//int main(void) {
//	int num, i;
//	int total = 1;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++) {
//		total *= i;
//	}
//	printf("%d! = %d", num, total);
//
//	return 0;
//}

// P.168 TwoToNineForVer.c
//#include <stdio.h>
//int main(void) {
//	int cur, is;
//
//	for (cur = 2; cur < 10; cur++) {
//		for (is = 1; is < 10; is++) {
//			printf("%dX%d=%d \n", cur, is, cur * is);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}