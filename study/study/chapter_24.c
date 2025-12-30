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

// P.520 BinartFileCopy.c
//#include <stdio.h>
//
//int main(void) {
//	FILE* src = fopen("src.bin", "rb");
//	FILE* des = fopen("dst.bin", "wb");
//	char buf[20];
//	int readCnt;
//
//	if (src == NULL || des == NULL) {
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	while (1) {
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//
//		if (readCnt < sizeof(buf)) {
//			if (feof(src) != 0) {
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("파일복사 완료");
//				break;
//			}
//			else
//				puts("파일복사 실패");
//
//			break;
//		}
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//
//	fclose(src);
//	fclose(des);
//
//	return 0;
//}

// 문제 21-1 [문자열 방식의 데이터 입출력]
/*
* 문제 1
* 프로그램상에서 mystory.txt라는 이름의 파일을 생성해서 본인의 이름, 주민번호, 전화번호를 저장하는 프로그램을 작성하자.
* 단 저장의 형태는 다음과 같아야 한다(# 문자도 함께 저장되어야 한다).
*	# 이름 : 윤성우
*	# 주민번호 : 900208-1012589
*	# 전화번호 : 010-1111-2222
* 그리고 저장이 완료되면 메모장으로 확인이 가능해야 한다.
*/

/*
* 문제 2
* 문제 1에서 작성한 파일에 데이터를 추가하자.
* 추가할 데이터는 즐겨 먹는 음식의 정보와 취미이다.
* 입력의 형태는 다음과 같아야 한다.
*	#즐겨먹는 음식 : 짬뽕, 탕수육
*	#취미 : 축구
* 마찬가지로 추가가 완료되면 제대로 추가되었는지 메모장으로 확인해보기 바란다.
*/

/*
* 문제 3
* 문제 1과 2에서 생성한 파일에 저장된 정보 전체를 출력하는 프로그램을 작성하자.
*/

// P.523 ComplexFileWrite.c
//#include <stdio.h>
//
//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("friend.txt", "wt");
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("이름 성별 나이 순 입력 : ");
//		scanf("%s %c %d", name, &sex, &age);
//		getchar();	// 버퍼에 남아있는 \n 소멸을 위해서
//		fprintf(fp, "%s %c %d", name, sex, age);
//	}
//	fclose(fp);
//
//	return 0;
//}

// P.525 ComplexFileRead.c
//#include <stdio.h>
//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("freind.txt", "rt");
//	int ret;
//
//	while (1) {
//		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
//		if (ret == EOF)
//			break;
//		printf("%s %c %d \n", name, sex, age);
//	}
//	fclose(fp);
//	
//	return 0;
//}

// P.526 StructFileWriteRead.c
//#include <stdio.h>
//typedef struct fren {
//	char name[10];
//	char sex;
//	int age;
//} Friend;
//
//int main(void) {
//	FILE* fp;
//	Friend myfren1;
//	Friend myfren2;
//
//	/*** file write ***/
//	fp = fopen("friend.bin", "wb");
//	printf("이름, 성별, 나이 순 입력 : ");
//	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//
//	/*** file read ***/
//	fp = fopen("friend.bin", "rb");
//	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
//	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
//	fclose(fp);
//
//	return 0;
//}

// P.529 MoveFileReWrPos.c
//#include <stdio.h>
//int main(void) {
//	/* 파일 생성 */
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("123456789", fp);
//	fclose(fp);
//
//	/* 파일개방 */
//	fp = fopen("text.txt", "rt");
//
//	/* SEEK_END test */
//	fseek(fp, -2, SEEK_END);
//	putchar(fgetc(fp));
//
//	/* SEEK_SET test */
//	fseek(fp, 2, SEEK_SET);
//	putchar(fgetc(fp));
//
//	/* SEEK_CUR test */
//	fseek(fp, 2, SEEK_CUR);
//	putchar(fgetc(fp));
//
//	fclose(fp);
//	
//	return 0;
//}