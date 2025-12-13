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