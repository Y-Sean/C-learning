#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//int main()
//{
	//FILE* pf = fopen("test.txt", "r");
	//失败，返回空指针

	//FILE* pf = fopen("test.txt", "w");
	//FILE* pf = fopen("text1.txt", "a");
	//没有该文件，就生成；并返回该文件指针

	//FILE* pf = fopen("..\\..\\text1.txt", "a");
	//..\\存放该程序文件的上一级

	//FILE* pf = fopen("c:\\Sean\\test.txt", "a");
	//绝对路径需要有访问权限

	//assert(pf!=NULL);
	/*if (pf == NULL)
	{
		perror("fopen");
		return;
	}

	fclose(pf);
	pf = NULL;
	return 0;
}*/

//int main()
//{
//	FILE* pf;
//
//	//int fputc,fputs
//	//失败返回EOF
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	fputc('a', pf);
//	fputs("bcdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//int fgetc ( FILE * stream );
//	//char * fgets ( char * str, int num, FILE * stream );
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	int n = fgetc(pf);
//	printf("%c", n);
//	printf("\n");
//	char str[20] = { 0 };
//	char* p = fgets(str, 5, pf);
//	printf(p);
//	return 0;
//}

//int main()
//{
//	//int fprintf ( FILE * stream, const char * format, ... );
//	//int fscanf ( FILE * stream, const char * format, ... );
//
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//	assert(pf);
//	//char ch;
//	////scanf("%c", &ch);
//	//fscanf(pf, "%c", &ch);
//	//putchar(ch);
//
//	/*printf("abcd");
//	fprintf(pf, "abcd");*/
//
//	printf("%c", 'g');
//	fprintf(pf, "%c", 'g');
//	return 0;
//}

//int main()
//{
//	//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	assert(pf);
//	//fputs("abcd", pf);
//	char arr[20] = { 0 };
//	fread(arr, 1, 3, pf);
//	printf(arr);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	assert(pf);
//	//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fwrite("abcdef", 1, 6, pf);
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	//00000000 00000000 00100111 00010000
//	FILE* pf = fopen("test.txt", "wb");
//	/*fwrite(&a, 4, 1, pf);
//	pf = fopen("test.txt", "ab");*/
//	fwrite("10000", 1, 5, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf;
//	char ch;
//	// 以 r 模式打开文件
//	pf = fopen("test_r.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		printf("Opened test_r.txt in r mode\n");
//		fclose(pf);
//	}
//
//	// 以 r+ 模式打开文件
//	pf = fopen("test_r+.txt", "r+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		printf("Opened test_r+.txt in r+ mode\n");
//		fclose(pf);
//	}
//
//	// 以 a 模式打开文件
//	pf = fopen("test_a.txt", "a");
//	assert(pf != NULL);
//	fprintf(pf, "Appending with a\n");
//	fclose(pf);
//
//	// 以 a+ 模式打开文件
//	pf = fopen("test_a+.txt", "a+");
//	assert(pf != NULL);
//	fprintf(pf, "Appending with a+\n");
//	rewind(pf); // 将文件指针移到文件开头
//	fscanf(pf, "%c", &ch);
//	putchar(ch);
//	fclose(pf);
//
//	// 以 w 模式打开文件
//	pf = fopen("test_w.txt", "w");
//	assert(pf != NULL);
//	fprintf(pf, "Writing with w\n");
//	fclose(pf);
//
//	// 以 w+ 模式打开文件
//	pf = fopen("test_w+.txt", "w+");
//	assert(pf != NULL);
//	fprintf(pf, "Writing with w+\n");
//	fclose(pf);
//
//	return 0;
//}

//int scanf ( const char * format, ... );
//int fscanf ( FILE * stream, const char * format, ... );
// 从标准输入流输入数据
// 从流里读取数据
//int sscanf ( const char * s, const char * format, ...);
//从字符串里读取格式化数据

//int main()
//{
//	const char* p = "hello world 666";
//	char arr[20] = { 0 };
//	int num = 0;
//	sscanf(p, "%s %*s %d", arr, &num);
//	puts(arr);
//	printf("%d", num);
//	return 0;
//}

//int printf ( const char * format, ... );
//int fprintf ( FILE * stream, const char * format, ... );
//int sprintf ( char * str, const char * format, ... );

//int main()
//{
//	char buffer[50];
//	int n, a = 5, b = 3;
//	n = sprintf(buffer, "%d plus %d is %d", a, b, a + b);
//	printf("[%s] is a string %d chars long\n", buffer, n);
//	return 0;
//}

//int fseek ( FILE * stream, long int offset, int origin );
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "w");
//	fputs("This is an apple.", pFile);
//
//	fseek(pFile, 1, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}

//long int ftell ( FILE * stream );

//int fseek(FILE* stream, long int offset, int origin);
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//
//	fseek(pFile, 1, SEEK_SET);
//
//	printf("%d", ftell(pFile));
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite("10000", 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}