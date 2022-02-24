#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = "continue to write";
	char b[] = "keep writing";
	int lengtha;
	int lengthb;
	printf("a%s\nb%s\n", a, b);
	lengtha = strlen(a);
	lengthb = strlen(b);
	printf("a%s有%d个字符\nb%s有%d个字符",a,lengtha,b,lengthb);
}
//{
	//int length;
	//char a[13] = "oneoneoneone";
	//char b[] = "chance";
	//printf("%s\n", a);
	//strcpy(a, b);//puts b into a
	//printf("%s\n", a);
	//strcat(a, b);
	//printf("now a is:%s\n b is:%s\n", a,b);
	//printf("%s\n", b);
	//length = strlen(a);
	//printf("a为:%s含有%d个字符长度\n", a, length);
//}
//void summary()
//{
//	printf("make a summary each ten days\n");
//	printf("chance favors the prepared mind\n");
//}
//void main()
//{
//	summary();
//	summary();
//	summary();
//}
//short int main()
//{
//	int a, b, c;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%d ", b,a,c);
//		}
//		printf("\n");
//	}
//	printf("                                                           chance favors the prepared mind__\n");
//	printf("                                                           make a summary each ten days   --\n");
//	for (a = 9; a > 0; a--)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%d ", b, a, c);
//		}
//		printf("\n");
//	}
//}