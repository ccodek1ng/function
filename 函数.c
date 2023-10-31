#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数的 功能尽量单一，并利用单独的源文件，头文件  保证模块化

//                                      库函数

////    查    https://legacy.cplusplus.com/reference/  https://en.cppreference.com/w/  
////例如   memset    void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	int b[] = { 5,5,5,5,5,5,5 };
//	char a[] = { "wocenimu" };
//	memset(a, '*', 8);
//	//memset(b, 1, 7);    ???
//	printf("%s\n", a);
//	printf("%d\n", b[6]);
//	return 0;
//}

//自定义函数

////取址调用
////两个变量交换值   D:\microsoft vs project\分支和循环\10.22\循环练习.cpp 书签处
////实参-->形参  函数改变的是形参，对实参没有影响 形参的生命周期在函数内
//void swap(int* x, int* y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int a = 5, b = 7;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//嵌套   和   链式访问

//嵌套   -   函数中调用函数

////链式访问  -   函数的返回值 作为函数的参数
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));// return value: On success, the total number of characters written is returned.
//	return 0;
//}

////函数的声明和定义
////声明  一般放在头文件
////int add(int, int);
//#include"add.h"
//int main()
//{
//	int a = 1, b = 1;
//	printf("%d",add(a, b));
//	return 0;
//}
////定义 可以单独放在另一个源文件
////int add(int x, int y)
////{
////	return x + y;
////}

////递归  程序调用自身  
//int main()
//{
//	printf("1");
//	main();
//	return 0;
//}//如递归所有控件路径，函数将导致运行时堆栈溢出

////递归 例
////输入1234 ->输出 1 2 3 4
//int apart(unsigned int a)
//{
//	if (a / 10 == 0)//停止条件
//	{
//		printf("%d ", a % 10);
//		return 0;
//	}
//	else
//		apart(a / 10);
//	printf("%d ", a % 10);
//	return 0;
//}
//void apart0(unsigned int a)
//{
//	if (a > 9)//继续条件
//	{
//		apart0(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	unsigned int a;
//	scanf("%d", &a);
//	apart(a);
//	printf("\n");
//	apart0(a);
//	return 0;
//}