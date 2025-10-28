// P.391 ~ �Լ� �����Ϳ� void ������

// P.394 FunctionPointer.c
//#include <stdio.h>
//void SimpleAdder(int n1, int n2) {
//	printf("%d + %d = %d \n", n1, n2, n1 + n2);
//}
//
//void ShowString(char* str) {
//	printf("%s \n", str);
//}
//
//int main(void) {
//	char* str = "Function Pointer";
//	int num1 = 10, num2 = 20;
//
//	void (*fptr1)(int, int) = SimpleAdder;
//	void (*fptr2)(char*) = ShowString;
//
//	/* �Լ� ������ ������ ���� ȣ�� */
//	fptr1(num1, num2);
//	fptr2(str);
//
//	return 0;
//}

// P.395 UsefulFunctionPointer.c
//#include <stdio.h>
//int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) {
//	return cmp(age1, age2);
//}
//
//int OlderFirst(int age1, int age2) {
//	if (age1 > age2)
//		return age1;
//	else if (age1 < age2)
//		return age2;
//	else
//		return 0;
//}
//
//int YongerFirst(int age1, int age2) {
//	if (age1 < age2)
//		return age1;
//	else if (age1 > age2)
//		return age2;
//	else
//		return 0;
//}
//
//int main(void) {
//	int age1 = 20;
//	int age2 = 30;
//	int first;
//
//	printf("������� 1 \n");
//	first = WhoIsFirst(age1, age2, OlderFirst);
//	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);
//
//	printf("������� 2 \n");
//	first = WhoIsFirst(age1, age2, YongerFirst);
//	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);
//
//	return 0;
//}

// P.397 VoidTypePointer.c
//#include <stdio.h>
//void SoSimpleFunc(void) {
//	printf("I'm so simple");
//}
//
//int main(void) {
//	int num = 20;
//	void* ptr;
//
//	ptr = &num;		// ���� num�� �ּ� �� ����
//	printf("%p \n", ptr);
//
//	ptr = SoSimpleFunc;		// �Լ� SoSimpleFunc�� �ּ� �� ����
//	printf("%p \n", ptr);
//
//	return 0;
//}

// P.399 ArgcArgv.c
//#include <stdio.h>
//int main(int argc, char* argv[]) {
//	int i = 0;
//	printf("���޵� ���ڿ��� �� : %d \n", argc);
//
//	for (i = 0; i < argc; i++)
//		printf("%d��° ���ڿ� : %s \n", i + 1, argv[i]);
//
//	return 0;
//}

// P.401 ArgvParamType.c
//#include <stdio.h>
//void ShowAllString(int argc, char* argv[]) {
//	int i;
//	for (i = 0; i < argc; i++)
//		printf("%s \n", argv[i]);
//}
//
//int main(void) {
//	char* str[3] = {
//		"C Programming",
//		"c++ Programming",
//		"JAVA Programming"
//	};
//
//	ShowAllString(3, str);
//	return 0;
//}

// P.403 ArgvEndNULL.c
//#include <stdio.h>
//int main(int argc, char* argv[]) {
//	int i = 0;
//	printf("���޵� ���ڿ��� �� : %d \n", argc);
//
//	while (argv[i] != NULL) {
//		printf("%d��° ���ڿ� : %s \n", i + 1, argv[i]);
//		i++;
//	}
//
//	return 0;
//}