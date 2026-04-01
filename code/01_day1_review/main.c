#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()/*main函数是整个代码的入口点，程序从这里开始执行。有且仅有一个main*/
{
	printf("hehe\n");
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));


	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = a + b;
	printf("%d\n",c);
	





	return 0;
}

//char字符 short短整型 int整型 long长整型 long long更长的整形 float单精度浮点型 double双精度浮点型 void无类型