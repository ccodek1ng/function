#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//�������ܾ�����һ

////100~200����
//int prime(int i)
//{
//	int n = 2;
//	while (n <= sqrt(i))
//	{
//		if (i % n == 0)
//			return 0;
//		n++;
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////���ֲ���
//int binarys(int k, int arr1[], int sz)//���鴫��ʱ ���ݵ��� �׸�Ԫ�ص�ַ   
//{
//	int l, r, mid;
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);    arr1 ������ָ��
//	for (l = 0, r = sz - 1, mid = (r + l) / 2; l <= r; mid = (r + l) / 2)
//	{
//		if (k == arr1[mid])
//		{
//			return mid + 1;
//		}
//		else if (k < arr1[mid])
//		{
//			r = mid - 1;
//		}
//		else if (k > arr1[mid])
//		{
//			l = mid + 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,3,6,8,9,10,12,16,20 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	if(binarys(a,arr,sz))
//	{
//		printf("%d��arr�У��±�Ϊ%d", a, binarys(a, arr,sz) - 1);
//	}
//	else
//	{
//		printf("%d����arr��", a);
//	}
//	return 0;
//}

////ÿ��һ�κ�����n��ֵ��һ (��ַ)
//void plus(int* p)
//{
//	(*p)++;//++���ȼ�����*
//}
//int main()
//{
//	int n = 0;
//	plus(&n);
//	printf("%d", n);
//	return 0;
//}

//�ݹ�   ��������ʱ���������ַ�������
int lenth(char* a)
{
	if (*a != '\0')
	{
		return 1 + lenth(a + 1);
	}
	return 0;
}
int main()
{
	char arr[] = { "four" };
	printf("%d", lenth(arr));
	return 0;
}