// P.247 ~ chapter 10 ����! ���α׷���
/*
* ���� 1
* 10���� ������ �Է� �޾Ƽ� 16������ ����ϴ� ���α׷��� �ۼ��� ����.
* �̴� ���Ĺ����� Ȱ�뿡 ���� �����̹Ƿ� ���� �ذ��� �� ���� ���̴�.
*/
//#include <stdio.h>
//int main(void) {
//	int num;
//	
//	printf("10���� ���� �Է� : ");
//	scanf("%d", &num);
//
//	printf("10���� ���� %d�� 16���� %x �Դϴ�. \n", num, num);
//
//	return 0;
//}

/*
* ���� 2
* ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
* ���� �� ���α׷� ����ڰ� 3�� 5�� �Է��ϸ� 3��, 4��, 5���� ��µǾ�� �ϰ�, 2�� 4�� �Է��ϸ� 2��, 3��, 4���� ��µǾ�� �Ѵ�.
* �� �Ѱ��� ������ �ִ�.
* ����ڴ� �� ���� ���ڸ� �Է� �� ���� �Է� ������ �����ο��� �Ѵ�.
* �� 3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� ���α׷��� ���� ����� ����ؾ� �Ѵ�.
* 
* ���� 2�� �ذ��� ���� GUIDE
* �� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ������ �������� ����ϴ� �Լ��� �����ϰ�, main �Լ����� �� �Լ��� ����ϴ� ���·� �����غ���.
*/
//#include <stdio.h>
//int Gugudan(int num1, int num2) {
//	int i, j;
//
//	for (i = num1; i <= num2; i++) {
//		for (j = 1; j < 10; j++) {
//			printf("%d X %d = %d \n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int num1, num2, endNum, startNum;
//
//	printf("���� �� �� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2) {
//		endNum = num1;
//		startNum = num2;
//	}
//	else {
//		endNum = num2;
//		startNum = num1;
//	}
//		
//	Gugudan(startNum, endNum);
//
//	return 0;
//}

/*
* ���� 3
* �� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷��� �ۼ� �� ����.
* 
* ������ ��
* �� ���� ���� �Է� : 6 9
* �� ���� �ִ����� : 3
* 
* ����3�� �ذ��� ���� GUIDE
* ���� num1�� num2�� �ִ� ������� num1�̳� num2���� Ŭ �� ����.
* �׸��� num1�� num2�� �ִ� ������� num1 �Ǵ� num2�� ������ �������� 0�� �ȴ�.
* �� �� ���� Ư���� �̿��ϸ� �ִ� ������� ���� ���� �� �ִ�.
* ����� ������ �ȴٸ� ���ͳݿ��� '��Ŭ���� ȣ����'�̶�� ���� �����غ���.
* �׸��� �̸� ������� ������ �ذ��� �ѹ� �� �õ��ϱ� �ٶ���.
*/
//#include <stdio.h>
//int Divisor(int num1, int num2) {
//	int maxDivisor = 0;
//	int maxNum, minNum;
//
//	if (num1 > num2) {
//		maxNum = num1;
//		minNum = num2;
//	}
//	else {
//		maxNum = num2;
//		minNum = num1;
//	}
//
//	for (int i = 1; i <= minNum; i++) {
//		if ((maxNum % i == 0) && (minNum % i == 0)) {
//			maxDivisor = i;
//		}
//	}
//
//	return maxDivisor;
//}
//
//int main(void) {
//	int num1, num2;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &num1, &num2);
//
//	printf("%d, %d �� ���� �ִ����� : %d \n", num1, num2, Divisor(num1, num2));
//
//	return 0;
//}

/*
* ���� 4
* ���ڰ� �����ϴ� �� �� �ϳ��� �ݿ��� ���� ��ٱ濡 DVD�� ��ȭå�� �ܶ� ������, ���� ���ۿ� ����� �������Ÿ��� �簡���� ���� ���� ���̴�.
* ������ �ݿ����̴�.
* ���� ������ �ָӴϿ��� 5õ���� �ִ�. 
* DVD ������ ������ 3,500���� ���´�.
* ���ۿ� ����� ũ����(500��), �����(700��), �ݶ�(400��)�� ����Ѵ�.
* �ܵ��� �ϳ��� ������ �ʰ� �� ������ ������ �ϳ� �̻� �ݵ�� �����Ϸ��� ��� ���Ÿ� �����ؾ� �ϰڴ°�?
* ���� ���⿡�� ���� ���� ����� ���� ���� ���̴�.
* ���ڰ� ��� ������ �� �� �ִ��� �������� ������ �ֱ� �ٶ���.
* 
* ������ ��
* ���� ����� �����ϰ� �ִ� �ݾ� : 3500
* ũ���� 1��, ����� 2��, �ݶ� 4��
* ũ���� 2��, ����� 3��, �ݶ� 1��
* ũ���� 4��, ����� 1��, �ݶ� 2��
* ��� �����Ͻðڽ��ϱ�?
*/
//#include <stdio.h>
//void Calc(int money, int creamBread, int shrimpCracker, int cokeDrink) {
//	for (int cream = 1; cream <= money / creamBread; cream++) {
//		for (int shrimp = 1; shrimp <= money / shrimpCracker; shrimp++) {
//			for(int coke = 1; coke <= money / cokeDrink; coke++) {
//				int total = cream * creamBread + shrimp * shrimpCracker + coke * cokeDrink;
//
//				if (total == money) {
//					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", cream, shrimp, coke);
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	int creamBread = 500, shrimpCracker = 700, coke = 400;
//	int money = 3500;
//
//	printf("���� ����� �����ϰ� �ִ� �ݾ� : %d\n", money);
//
//	Calc(money, creamBread, shrimpCracker, coke);
//
//	printf("��� �����Ͻðڽ��ϱ�?\n");
//	
//	return 0;
//}

/*
* ���� 5
* 10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷��� �ۼ��� ����.
* ����� ���� num�� 1�� num���� �ۿ� �������� �ʴ´ٸ� �̴� �Ҽ��� �ش��Ѵ�.
* ���� 3�� �Ҽ��̴�.
* �׷��� 4�� �Ҽ��� �ƴϴ�.
* 1, 2, 4�� �������� �����̴�.
* 
* ������ ��
* 2 3 5 7 11 13 17 19 23 29
*/
//#include <stdio.h>
//int isPrime(int num) {
//	if (num < 2)	
//		return 0;
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main(void) {
//	int count = 0;
//	int num = 2;
//
//	while (count < 10) {
//		if (isPrime(num)) {
//			printf("%d ", num);
//			count++;
//		}
//		num++;
//	}
//
//	return 0;
//}

/*
* ���� 6
* ���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�, �̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.
* 
* ������ ��
* ��(second) �Է� : 3615
* [h:1, m:0, s:15]
*/
//#include <stdio.h>
//int main(void) {
//	int second;
//	int h, m, s;
//	printf("��(second) �Է� : ");
//	scanf("%d", &second);
//
//	h = second / 3600;
//	m = (second % 3600) / 60;
//	s = second % 60;
//
//	printf("h:%d, m:%d, s:%d \n", h, m, s);
//
//	return 0;
//}

/*
* ���� 7
* ���α׷� ����ڷκ��� ���� n�� �Է� �޴´�.
* �׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
* 2k <= n (k�� ����)
* 
* ������ ��
* ��� n �Է� : 256
* ������ �����ϴ� k�� �ִ��� 8
* 
* ����7�� �ذ��� ���� GUIDE
* ������ �����ߴٰ� �ؼ� �η������� ����.
* ���� ���� �״�� �ݺ������� �Ű� ������ ���� �ذ�Ǵ� �����̴�.
*/
//#include <stdio.h>
//int main(void) {
//	int n;
//	int k = 0;
//	int value = 1;
//
//	printf("��� n �Է� : ");
//	scanf("%d", &n);
//
//	while (value * 2 <= n) {
//		value *= 2;
//		k++;
//	}
//
//	printf("������ �����ϴ� k�� �ִ��� : %d", k);
//
//	return 0;
//}

/*
* ���� 8
* 2�� n���� ���ϴ� �Լ��� ��������� ������ ����.
* �׸��� �׿� ���� ������ main�Լ��� �����غ���.
* ����� ����Լ��� ������ ó������ ����� ���̱� ������ ���⼭�� ���� ������ �����Ͽ���.
* (������ �Ұ��� �������ٵ� ���� ������.)
* 
* ������ ��
* ���� �Է� : 8
* 2�� 8���� 256
*/
//#include <stdio.h>
//int Square(int num) {
//	if (num == 0)
//		return;
//	else
//		return 2 * Square(num - 1);
//}
//
//int main(void) {
//	int num;
//
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	printf("2�� %d���� %d", num, Square(num));
//
//	return 0;
//}