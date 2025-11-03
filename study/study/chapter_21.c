// P.415 ~ 문자와 문자열 관련 함수
// P.420 ReadWriteChar.c
//#include <stdio.h>
//int main(void) {
//	int ch1, ch2;
//
//	ch1 = getchar();	// 문자 입력
//	ch2 = fgetc(stdin);		// 엔터키 입력
//
//	putchar(ch1);	// 문자 출력
//	fputc(ch2, stdout);		// 엔터 키 출력
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
* P.423 문제 21-1 [getchar 함수와 putchar 함수의 활용]
* 프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
* 입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자.
* 단, 문자의 입출력에는 getchar 함수와 putchar 함수를 사용하기로 하자.
* 그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자.
*/

// P.424 WriteString.c
//#include <stdio.h>
//int main(void)
//{
//	char* str = "Simple String";
//
//	printf("1. puts test ------- \n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test ---- \n");
//	fputs(str, stdout); printf("\n");
//	fputs("So Simple String", stdout); printf("\n");
//
//	printf("3. end of main ----\n");
//
//	return 0;
//}

// P.426 ReadString.c
//#include <stdio.h>
//int main(void)
//{
//	char str[7];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d : %s \n", i + 1, str);
//	}
//
//	return 0;
//}