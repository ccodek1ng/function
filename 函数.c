#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������ ���ܾ�����һ�������õ�����Դ�ļ���ͷ�ļ�  ��֤ģ�黯

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

////ȡַ����
////������������ֵ   D:\microsoft vs project\��֧��ѭ��\10.22\ѭ����ϰ.cpp ��ǩ��
////ʵ��-->�β�  �����ı�����βΣ���ʵ��û��Ӱ�� �βε����������ں�����
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

//Ƕ��   ��   ��ʽ����

//Ƕ��   -   �����е��ú���

////��ʽ����  -   �����ķ���ֵ ��Ϊ�����Ĳ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));// return value: On success, the total number of characters written is returned.
//	return 0;
//}

////�����������Ͷ���
////����  һ�����ͷ�ļ�
////int add(int, int);
//#include"add.h"
//int main()
//{
//	int a = 1, b = 1;
//	printf("%d",add(a, b));
//	return 0;
//}
////���� ���Ե���������һ��Դ�ļ�
////int add(int x, int y)
////{
////	return x + y;
////}

////�ݹ�  �����������  
//int main()
//{
//	printf("1");
//	main();
//	return 0;
//}//��ݹ����пؼ�·������������������ʱ��ջ���

////�ݹ� ��
////����1234 ->��� 1 2 3 4
//int apart(unsigned int a)
//{
//	if (a / 10 == 0)//ֹͣ����
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
//	if (a > 9)//��������
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