// P.415 ~ ���ڿ� ���ڿ� ���� �Լ�
// P.420 ReadWriteChar.c
//#include <stdio.h>
//int main(void) {
//	int ch1, ch2;
//
//	ch1 = getchar();	// ���� �Է�
//	ch2 = fgetc(stdin);		// ����Ű �Է�
//
//	putchar(ch1);	// ���� ���
//	fputc(ch2, stdout);		// ���� Ű ���
//
//	return 0;
//}

// P.421 ConsoleEOF.c
//#include <stdio.h>
//int main(void) {
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//	return 0;
//}

/*
* P.423 ���� 21-1 [getchar �Լ��� putchar �Լ��� Ȱ��]
* ���α׷� ����ڷκ��� ���ĺ� ���ڸ� �ϳ� �Է� �޾Ƽ�, �Է� ���� ���ڰ� �빮�ڸ� �̸� �ҹ��ڷ� ��ȯ�ؼ� ������ְ�,
* �Է� ���� ���ڰ� �ҹ��ڸ� �̸� �빮�ڷ� ��ȯ�ؼ� ������ִ� ���α׷��� �ۼ��غ���.
* ��, ������ ����¿��� getchar �Լ��� putchar �Լ��� ����ϱ�� ����.
* �׸��� ���α׷� ����ڰ� ���ĺ� �̿��� ���ڸ� �Է��ϴ� ��쿡�� �׿� ���� ���� �޽����� ������ ����ϱ�� ����.
*/