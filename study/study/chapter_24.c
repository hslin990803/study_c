// P.501 ~ 파일 입출력

// P.505 FirstFileWrite.c
//#include <stdio.h>
//
//int main(void) {
//	FILE* fp = fopen("data.txt", "wt");
//	if (fp == NULL) {
//		puts("파일오픈 실패!");
//		return -1;	//	비정상적 종료를 의미하기 위해서 -1을 반환
//	}
//
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc('C', fp);
//	fclose(fp);		// 스트림의 종료
//
//	return 0;
//}

// P.509 FirstFileRead.c
//#include <stdio.h>
//int main(void) {
//	int ch, i;
//	FILE* fp = fopen("data.txt", "rt");
//	if (fp == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	for (i = 0; i < 3; i++) {
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//	}
//	fclose(fp);
//
//	return 0;
//}

// P.515 TextDataFileWrite.c
//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp = fopen("simple.txt", "wt");
//	if (fp == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc("My name is Hong \n", fp);
//	fputc("Your name is Yoon \n", fp);
//	fclose(fp);
//
//	return 0;
//}

// P.515 TextDataFileRead.c
//#include <stdio.h>
//int main(void) {
//	char str[30];
//	int ch;
//	FILE* fp = fopen("simple.txt", "rt");
//	if (fp == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//
//	fclose(fp);
//	return 0;
//}

// P.517 TextCharFileCopy.c
//#include <stdio.h>
//
//int main(void) {
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("dst.txt", "wt");
//	int ch;
//
//	if (src == NULL || des == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	while ((ch = fgetc(src)) != EOF)
//		fputc(ch, des);
//
//	if (feof(src) != 0)
//		puts("파일복사 완료!");
//	else
//		puts("파일복사 실패!");
//
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}

// P.518 TextStringFileCopy.c
//#include <stdio.h>
//int main(void) {
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("des.txt", "wt");
//	char str[20];
//
//	if (src == NULL || des == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	while (fgets(str, sizeof(str), src) != NULL)
//		fputs(str, des);
//
//	if (feof(src) != 0)
//		puts("파일복사 완료!");
//	else
//		puts("파일복사 실패!");
//
//	fclose(src);
//	fclose(des);
//	return 0;
//}