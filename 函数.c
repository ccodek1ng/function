#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

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

//两个变量交换值   D:\microsoft vs project\分支和循环\10.22\循环练习.cpp 书签处
//实参-->形参  函数改变的是形参，对实参没有影响 形参的生命周期在函数内
void swap(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 5, b = 7;
	printf("a=%d b=%d\n", a, b);
	swap(&a,&b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}