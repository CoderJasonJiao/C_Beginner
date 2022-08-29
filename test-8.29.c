#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//#include "add.h"
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//函数递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//递归
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//printf("%d ", num);
//	return 0;
//}

//计算字符串长度

//定义一个变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//不定义变量，直接递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
// 
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//自己写一个 非常的nice 哈哈哈
//void my_print(char* str)
//{
//	if (*str != '\0')
//	{
//		//printf("%c ", *str);
//		my_print(str + 1);
//	}
//	//else
//		printf("%c ", *str);
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//printf("%s\n",my_print(arr));
//	my_print(arr);
//	return 0;
//}

//阶乘函数--循环
int Fac1(int a)
{
	int i = 1;
	int acc = 1;
	for (i = 1; i <= a; i++)
	{
		acc = acc * i;
	}
	return acc;
}

//阶乘--递归
int Fac2(int n)
{
	
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d\n", ret);
	return 0;
}