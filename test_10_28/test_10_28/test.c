#define _CRT_SECURE_NO_WARNINGS 1

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//
//	printf("%d\n", y);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;//Сʱ��
//	int m = 0;//������
//	int s = 0;//����
//	int seconds = 0;
//	//����
//	scanf("%d", &seconds);
//
//	//����
//	h = seconds / 3600;
//	m = (seconds % 3600) / 60;
//	s = (seconds % 3600) % 60;
//
//	//���
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//
//#include <stdio.h>
//
//
//int main()
//{
//	//����
//	int data[5] = { 0 };
//	int  sum = 0;
//	int i = 0;
//	float avg = 0.0f;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//	//����
//	for (i = 0; i < 5; i++)
//	{
//		sum += data[i];
//	}
//	avg = sum / 5.0;
//
//	//���
//	printf("%.1f\n", avg);
//
//	return 0;
//}
//
//
//
///*
//int main()
//{
//	//����
//	int score = 0;
//	int sum = 0;
//	int i = 0;
//	float avg = 0.0f;
//
//	for(i=0; i<5; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	//����
//	avg = sum/5.0;
//	//���
//	printf("%.1f\n", avg);
//
//	return 0;
//}
//*/
//
//
//#include <stdio.h>
//
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//
//	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
//	printf("%d%d%d%d", d, c, b, a);
//
//	return 0;
//}
//
//
///*
//int main()
//{
//	//����
//	int n = 0;
//	scanf("%d", &n);//1234
//	//���㲢���
//	while(n)
//	{
//		printf("%d", n%10);//43
//		n = n/10;
//	}
//	return 0;
//}
//
//*/
//
//
//
////#include <stdio.h>
////int sum(int a)
////{
////    int c = 0;
////    static int b = 3;
////    c += 1;
////    b += 2;
////    return (a + b + c);
////}
////
////int main()
////{
////    int i;
////    int a = 2;
////    for (i = 0; i < 5; i++)
////    {
////        printf("%d,", sum(a));
////    }
////}
////
////int Add(int x, int y)
////{
////	//������Ҫ��ɵĴ���
////}
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	//
////	int ret = Add(a, b);
////
////	printf("%d\n", ret);
////
////	return 0;
////}
//
//#include <stdio.h>
//
////int main()
////{
////	float a = 5 / 2.0;
////	printf("%f\n", a);
////
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////    //����
////    int n = 0;
////    scanf("%d", &n);//1234
////    //���㲢���
////    while (n)
////    {
////        printf("%d", n % 10);//43
////        n = n / 10;
////    }
////    return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		if (i = 5)//�����Ǹ�ֵ�����ж�
////			printf("%d ", i);//5
////	}
////	return 0;
////}
////
//
//
////int func(int a)
////{
////    int b;
////    switch (a)
////    {
////    case 1: b = 30;
////    case 2: b = 20;
////    case 3: b = 16;
////    default: b = 0;
////    }
////    return b;
////}
////��func(1) = ��      ��
//
////
////char�����зŵ����ַ�
////�ַ�����ASCII ��ֵ��
////�ַ��ڴ洢��ʱ�򣬴洢����ASCII��ֵ
////
////
////#include <stdio.h>
////int main() {
////	int x = 3;
////	int y = 3;
////	switch (x % 2) {
////	case 1:
////		switch (y)
////		{
////		case 0:
////			printf("first");
////		case 1:
////			printf("second");
////			break;
////		default: printf("hello");
////		}
////
////	case 2:
////		printf("third");
////	}
////	//hellothird
////	return 0;
////}
////
////
//
//
////д���뽫�������������Ӵ�С�����
//
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////
////	//����
////	scanf("%d %d %d", &a, &b, &c);//2 1 3
////	//����
////	//���ֵ����a�У���Сֵ����c��
////	//a��b�Ľϴ�ֵ����a��
////	if (a < b)
////	{
////		int tmp = a;
////		a = b;
////		b = tmp;
////	}
////	//��a��c�еĽϴ�ֵ����a��
////	if (a < c)
////	{
////		int tmp = a;
////		a = c;
////		c = tmp;
////	}
////	//��b��c�Ľϴ�ֵ����b��
////	if (b < c)
////	{
////		int tmp = b;
////		b = c;
////		c = tmp;
////	}
////
////	//���
////	printf("%d %d %d\n", a, b, c);
////
////	return 0;
////}
////	
//
////int main()
////{
////	int i = 0;
////	//for (i = 1; i <= 100; i++)
////	//{
////	//	//�ж�i�Ƿ���3�ı���
////	//	if (i % 3 == 0)
////	//	{
////	//		printf("%d ", i);
////	//	}
////	//}
////
////	for (i = 3; i <= 100; i+=3)
////	{
////		printf("%d ", i);
////	}
////	return 0;
////}
////
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);
////	//�����Լ��
////	int ret = 0;
////	//1. ��m��n ��Сֵ������������Լ��
////	if (m > n)
////		ret = n;
////	else
////		ret = m;
////
////	while (1)
////	{
////		if (m % ret == 0 && n % ret == 0)
////		{
////			break;
////		}
////		ret--;
////	}
////	//��ӡ
////	printf("%d\n", ret);
////
////	return 0;
////}
////
//
//
////int main()
////{
////	int m = 0;
////	int n = 0;
////	scanf("%d %d", &m, &n);//18 24
////	//�����Լ��
////	int ret = 0;
////	while (ret=m%n)
////	{
////		m = n;
////		n = ret;
////	}
////	printf("%d\n", n);
////
////	return 0;
////}
//
////�����жϵĹ���
////1. �ܱ�4���������Ҳ��ܱ�100����������
////2. �ܱ�400����������
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 1000; y <= 2000; y++)
////	{
////		//�ж�y�ǲ�������
////		//if (y % 4 == 0 && y % 100 != 0)
////		//{
////		//	count++;
////		//	printf("%d ", y);
////		//}
////		//if (y % 400 == 0)
////		//{
////		//	count++;
////		//	printf("%d ", y);
////		//}
////
////		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400==0))
////		{
////			count++;
////			printf("%d ", y);
////		}
////	}
////
////	//�������
////	printf("\ncount = %d\n", count);
////	return 0;
////}
////
//
//
//
////��ӡ100~200֮�������
////����Ҳ������
////ֻ�ܱ�1�����������������־�������
////7
////2 3 4 5 6
////
////int main()
////{
////	int y = 0;
////	for (y = 100; y <= 200; y++)
////	{
////		//�ж�y�ǲ�������
////		//��2~y-1������ȥ�Գ�y����
////		int n = 0;
////		int flag = 1;//����y������
////		for (n = 2; n < y; n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y��������
////				break;
////			}
////		}
////		if (flag == 1)
////			printf("%d ", y);
////	}
////	return 0;
////}
////
////#include <math.h>
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 100; y <= 200; y++)
////	{
////		//�ж�y�ǲ�������
////		//��2~y-1������ȥ�Գ�y����
////		int n = 0;
////		int flag = 1;//����y������
////		for (n = 2; n <= sqrt(y); n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y��������
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("%d ", y);
////			count++;
////		}
////		
////	}
////	printf("\ncount = %d\n", count);
////
////	return 0;
////}
////
//
//
//#include <math.h>
////
////int main()
////{
////	int y = 0;
////	int count = 0;
////	for (y = 101; y <= 200; y+=2)
////	{
////		//�ж�y�ǲ�������
////		//��2~y-1������ȥ�Գ�y����
////		int n = 0;
////		int flag = 1;//����y������
////		for (n = 2; n <= sqrt(y); n++)
////		{
////			if (y % n == 0)
////			{
////				flag = 0;//y��������
////				break;
////			}
////		}
////		if (flag == 1)
////		{
////			printf("%d ", y);
////			count++;
////		}
////
////	}
////	printf("\ncount = %d\n", count);
////
////	return 0;
////}
//
////
////�Գ���
//// ��������N�־���
////
//
//
////strcmp - string compare
////����0��˵��2���ַ������
////���ش���0������
////����С��0������
////
////#include <string.h>
////
////int main()
////{
////	int i = 0;
////	char password[20] = "";
////
////	//����������"123456"
////	for (i = 0; i < 3; i++)
////	{
////		printf("����������:>");
////		scanf("%s", password);//password��ȡ��ַ��ԭ����password�����������������������ǵ�ַ
////		if (strcmp(password, "123456") == 0)//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��strcmp�������
////		{
////			printf("��½�ɹ�\n");
////			break;
////		}
////		else
////		{
////			printf("�������\n");
////		}
////	}
////	if (i == 3)
////	{
////		printf("��������������˳�����\n");
////	}
////
////
////	return 0;
////}
//
////��������Ϸ
//
////�����������һ��1~100֮�������
////������
////��Ҳ�С�ˣ����Ի���ߣ���С��
////��Ҳ´��ˣ����Ի���ߣ��´���
////��Ҳ¶��ˣ����Ի���ߣ���ϲ�㣬�¶���
//
////C���������ɵ�������ķ�ʽ��rand����
////0~RAND_MAX 0x7fff
////0~32767
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****    1. play     ******\n");
//	printf("*****    0. exit     ******\n");
//	printf("***************************\n");
//}
//
//
//void game()
//{
//	int guess = 0;
//	//��������Ϸ�Ĺ���
//	//���������
//	int r = rand() % 100 + 1;//0~99-->1~100
//	//������
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ��-�����������������
//
//	do
//	{
//		//��ӡ�˵�
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//
//




#include<stdio.h>

int main()
{
  int i = 0;
  int count = 0;
  for(i = 1; i <= 100 ; i ++ )
{
  if(i % 9 == 9 )
  { 
  count++;
   }
}
if(i / 10 == 9)
{
  count++;
}

printf("\ncount\n",count);

return 0;
}