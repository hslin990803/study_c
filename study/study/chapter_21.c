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

// P.431 NeedInputBufFlush.c
//#include <stdio.h>
//int main(void) {
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력 : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//
//	fputs("이름 입력 : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	fputs("주민번호 : %s \n", perID);
//	printf("이름 : %s \n", name);
//
//	return 0;
//}

// P.432 InputBufFlush.c
//#include <stdio.h>
//void ClearLineFromReadBuffer(void) {
//	while (getchar() != '\n');
//}
//
//int main(void) {
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력 : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();		// 입력 버퍼 지우기
//
//	fputs("이름 입력 : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("주민번호 : %s \n", perID);
//	printf("이름 : %s\n", name);
//
//	return 0;
//
//}

// P.435 RemoveBSN.c
//#include <stdio.h>
//#include <string.h>
//
//void RemoveBSN(char str[]) {
//	int len = strlen(str);
//	str[len - 1] = 0;
//}
//
//int main(void) {
//	char str[100];
//	printf("문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
//
//	RemoveBSN(str);
//	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
//
//	return 0;
//}

// P.437 StringCopyCase.c
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[20] = "1234567890";
//	char str2[20];
//	char str3[5];
//
//	/* case 1 */
//	strcpy(str2, str1);
//	puts(str2);
//
//	/* case 2 */
//	strncpy(str3, str1, sizeof(str3));
//	puts(str3);
//
//	/* case 3 */
//	strncpy(str3, str1, sizeof(str3) - 1);
//	str3[sizeof(str3) - 1] = 0;
//	puts(str3);
//
//	return 0;
//}

// P.440 StringConcatCase.c
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//	char str1[20] = "First~";
//	char str2[20] = "Second";
//
//	char str3[20] = "Simple num : ";
//	char str4[20] = "1234567890";
//
//	/* case 1 */
//	strcat(str1, str2);
//	puts(str1);
//
//	/* case 2 */
//	strncat(str3, str4, 7);
//	puts(str3);
//
//	return 0;
//}