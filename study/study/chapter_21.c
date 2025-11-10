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
//#include <stdio.h>
//int ConvCase(int ch) {
//	int diff = 'a' - 'A';	// 모든 문자의 대소문자간 차의 크기는 같다.
//	if (ch >= 'A' && ch <= 'Z')
//		return ch + diff;
//	else if (ch >= 'a' && ch <= 'z')
//		return ch - diff;
//	else
//		return -1;
//}
//
//int main(void) {
//	int ch;
//	printf("문자 입력 : ");
//	ch = getchar();		// 문자 입력
//	ch = ConvCase(ch);		// 문자 변환
//	
//	if (ch == -1) {
//		puts("범위를 벗어난 입력입니다.");
//		return -1;
//	}
//	putchar(ch);	// 변환된 문자 출력
//
//	return 0;
//}

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

// P.443 StringCompCase.c
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char str1[20];
//	char str2[20];
//	printf("문자열 입력 1 : ");
//	scanf("%s", str1);
//	printf("문자열 입력 2 : ");
//	scanf("%s", str2);
//
//	if (!strcmp(str1, str2)) {
//		puts("두 문자열은 완벽히 동일합니다.");
//	}
//	else {
//		puts("두 문자열은 동일하지 않습니다.");
//
//		if (!strncmp(str1, str2, 3))
//			puts("그러나 앞 세 글자는 동일합니다.");
//	}
//	return 0;
//}

// P.444 ConvStringToPrimitive.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char str[20];
//	printf("정수 입력 : ");
//	scanf("%s", str);
//	printf("%d \n", atoi(str));
//
//	printf("실수 입력 : ");
//	scanf("%s", str);
//	printf("%g \n", atof(str));
//
//	return 0;
//}

// P.445 문제 21-2 [문자열 처리]
/*
* 문제 1
* 적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해보자.
* 예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 "A15#43"이라 하면,
* 이 문자열 중 아라비아 숫자는 1, 5, 4, 3 이니, 1+5+4+3의 연산결과가 출력되어야 한다.
*/
//#include <stdio.h>
//#include <string.h>
//int ConvToInt(char c) {
//	static int diff = 1 - '1';
//	return c + diff;
//}
//
//int main(void) {
//	char str[50];
//	int len, i;
//	int sum = 0;
//
//	printf("문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//	len = strlen(str);
//
//	for (i = 0; i < len; i++) {
//		if ('1' <= str[i] && str[i] <= '9')
//			sum += ConvToInt(str[i]);
//	}
//	printf("숫자의 총 합 : %d \n", sum);
//
//	return 0;
//}

/*
* 문제 2
* 다음과 같이 총 3개의 배열을 선언한다.
*	char str1[20];
*	char str2[20];
*	char str3[40];
* 그리고는 str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력 받되, fgets 함수 호출을 통해서 입력 받는다.
* 이어서 str1에 저장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이자.
* 그리고 마지막으로 str3에 저장된 문자열을 출력하자.
* 다소 설명이 복잡했는데, 예를 들어서 str1과 str2에 저장된 문자열이 각각 다음과 같다면,
*	str1	"Simple"
*	str2	"String"
* str3에는 문자열 "SimpleString"이 저장되어야 한다.
* 그런데 여기서 한가지 주의해야 할 사항이 있다.
* fgets 함수를 통해서 문자열을 읽어 들이면 \n 문자도 함께 읽혀지는데,
* 이는 문자열의 일부가 되지 않도록 해야 한다는 점이다.
* 쉽게 말해서 str1과 str2에 저장된 문자열에서 \n은 소멸시켜야 한다.
*/
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char str1[20];
//	char str2[20];
//	char str3[40];
//
//	printf("첫 번째 문자열 입력 : ");
//	fgets(str1, sizeof(str1), stdin);
//	str1[strlen(str1) - 1] = 0;		// \n 문자의 삭제
//
//	printf("두 번째 문자열 입력 : ");
//	fgets(str2, sizeof(str2), stdin);
//	str2[strlen(str2) - 1] = 0;		// \n 문자의 삭제
//
//	strcpy(str3, str1);
//	strcat(str3, str2);
//	printf("조합의 결과 : %s \n", str3);
//
//	return 0;
//}

/*
* 문제 3
* 프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력 받는다.
*	"이정선 29"
*	"한수정 7"
*	"오선주 17"
* 이름은 세 글자가 아닐 수도 있고 영문으로 입력될 수도 있다.
* 단, 이름과 나이 사이에만 공백이 삽입되어야 한다.
* 이러한 형식으로 두 사람의 정보를 입력 받아서 이름과 나이가 각각 같은지 다른지를 판단하여 출력하는 프로그램을 작성해보자.
* 참고로 이 문제는 수준이 어느 정도 있는 문제이니 천천히 생각하며 해결하기 바란다.
*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int GetSpaceIdx(char str[]) {
//	int len, i;
//	len = strlen(str);
//	for (i = 0; i < len; i++) {
//		if (str[i] == ' ')
//			return i;
//	}
//	return -1;	// 공백 문자가 존재하지 않는 경우의 반환
//}
//
//int CompName(char str1[], char str2[]) {
//	int idx1 = GetSpaceIdx(str1);
//	int idx2 = GetSpaceIdx(str2);
//
//	if (idx1 != idx2)	// 이름의 길이가 다르면 서로 다른 이름!
//		return 0;
//	else
//		return !strncmp(str1, str2, idx1);
//}
//
//int CompAge(char str1[], char str2[]) {
//	int idx1 = GetSpaceIdx(str1);
//	int idx2 = GetSpaceIdx(str2);
//	int ag1, ag2;
//
//	ag1 = atoi(&str1[idx1 + 1]);	// str1[idx1+1]이 나이가 저장된 위치
//	ag2 = atoi(&str2[idx2 + 1]);	// str2[idx2+1]가 나이가 저장된 위치
//
//	if (ag1 == ag2)
//		return 1;
//	else
//		return 0;
//}
//
//int main(void) {
//	char str1[20];
//	char str2[20];
//
//	printf("첫 번째 사람 정보 입력 : ");
//	fgets(str1, sizeof(str1), stdin);
//	str1[strlen(str1) - 1] = 0;
//
//	printf("두 번째 사람 정보 입력 : ");
//	fgets(str2, sizeof(str2), stdin);
//	str2[strlen(str2) - 1] = 0;
//
//	if (CompName(str1, str2))
//		puts("이름이 동일합니다!");
//	else
//		puts("이름이 동일하지 않습니다!");
//
//	if (CompAge(str1, str2))
//		puts("나이가 같습니다!");
//	else
//		puts("나이가 같지 않습니다!");
//
//	return 0;
//}