#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//                                      �⺯��

////    ��    https://legacy.cplusplus.com/reference/  https://en.cppreference.com/w/  
////����   memset    void * memset ( void * ptr, int value, size_t num );
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

//�Զ��庯��

//������������ֵ   D:\microsoft vs project\��֧��ѭ��\10.22\ѭ����ϰ.cpp ��ǩ��
//ʵ��-->�β�  �����ı�����βΣ���ʵ��û��Ӱ�� �βε����������ں�����
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