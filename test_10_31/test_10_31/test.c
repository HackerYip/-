#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//next:
//	printf("hehe\n");
//	printf("haha\n");
//	goto next;
//
//	return 0;
//}

//дһ���ػ�����
//ֻҪ���������ˣ��͵���ʱ60��ػ������60���ڣ������룺��������ȡ���ػ�����������룬ʱ�䵽�ػ�.
//
//shutdown windows�ṩ�Ĺػ�����
//shutdown -s -t 60
////system() - �⺯��-ִ��ϵͳ����

#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//�ж�
//	if (strcmp(input, "������") == 0)
//	{
//		//ȡ���ػ�
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//�ж�
//		if (strcmp(input, "������") == 0)
//		{
//			//ȡ���ػ�
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "abc";
//	//size_t -> unsigned int 
//	size_t len = strlen(arr);
//	printf("%u\n", len);
//	//%d - �з���
//	//%u - �޷���
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };//Ŀ�ĵ�
//	char arr2[] = "HELLO";//Դ����
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc";
//	size_t len = strlen(arr);
//	printf("%u\n", len);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d %d", &a, &b);
//	int m = get_max(10+22, get_max(5, 40));//����,���������ʽ,����
//
//	printf("%d\n", m);
//
//	return 0;
//}
//
//void menu()
//{
//	printf("******   1. play   *****\n");
//	printf("******   0. exit   *****\n");
//}
//
//
//int main()
//{
//	menu();
//
//	return 0;
//}
// 
//дһ���������Խ����������α���������
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);
//	return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = get_max(a, b);

//	//����2������
//	printf("����ǰ:a=%d b=%d\n", a, b);
////	Swap1(a, b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//���������õ�ʱ��ʵ�δ����βΣ��β���ʵ��ʵ�ε�һ����ʱ����
//���Զ��βε��޸ģ�����Ӱ��ʵ��

//int main()
//{
//	int a = 10;
//	//a = 20;
//	int* pa = &a;
//
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//is_prime()
//����������1��������������0

//int is_prime(int n)
//{
//	//2~n-1�������Գ�
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;//����
//}
//
//#include <math.h>
//
//int is_prime(int n)
//{
//	//2~n-1�������Գ�
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;//����
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ���� - ����������ʹ�ӡi
//		if (is_prime(i)==1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//дһ�������ж�һ���ǲ�������
//�����귵��1�� �������귵��0
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//�ҵ��˾ͷ����±�
//�Ҳ�������-1
// 
//int binary_search(int *arr, int k)
//
//int binary_search(int arr[], int k, int sz)
//{
//	//                 4  /4
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;//�����Ҳ�����
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//����arr����binary_search������ʱ����ʵ���ݵ���arr������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int y)
//{
//int n = 0;
//for( n=2; n <= sqrt(y); n++)
//  {
//  if(y % n == 0)//������������0
//    {
//  return 0;
//
//    }
//  else//����������1
//   {
//   return 1;
//  
//    }
//  }
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 100; y <= 200; y++)
//    {
//        //�ж�
//        if (is_prime(y) == 1)
//        count++;
//        {
//            printf("%d ", y);
//        }
//    }
//    printf("\ncount = %d \n",count);
//    return 0;
//}

#include<stdio.h>


int is_leap_year( int y)
{
  if(((y % 4 == 0)&&(y % 100!= 0))||(y % 400 == 0))
    return  1;

  else
    return 0;
}



int main()
{
    int y = 0;
    int count = 0;
    for( y = 1000; y <= 2000; y++)
    {
       if(is_leap_year(y) == 1)
       { 
        count++;
        printf("%d ",y);

        }
     }
  printf("\ncount = %d \n",count);
  return 0;
}



