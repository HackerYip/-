#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int a = 10;
//    int* p = &a;
//    
//    int* p = NULL;
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//
//int count_number_of_1(unsigned int m)
//{
//	int c = 0;//�����Ӻ������أ����㲹����һ���ж��ٸ�1

//	while(m)//��һ�ַ���
//	{
//		if(m % 2 == 1)
//		{
//			c++;
//		}
//			m /= 2;
//	}
//		return c;
//}

//	int i = 0;//�ڶ��ַ���
//	for(i=0; i<32; i++)
//	{
//		if((m & 1) == 1)
//		{
//			c++;
//		}
//		m >= 1;
//		return c;
//	}
//}

// 
// 
// 
// 
// �����ַ���
// ���� m = 15
// m = m & (m - 1)
// 
// 001111 - m
// 001110 - m -1 
// ����������λ�������
//
// 001110 - m
// �ټ�һ
// 
// 001101 - m - 1
// �ٰ�λ��
// 001100 - m
// 
// ����m = m & (m - 1)������ʽ���m�Ķ��������������ұߵ�1ȥ��
// 
// ����ִ�ж��ٴ�������ʽ�����ж��ٸ�1
// 
// 
//  
//	
//
//	while (m)
//	{
//		m = m & (m - 1);
//		c++;//������
//	}
//		return c;
//}
//
//
//
//int main()
//{
//	int n = 15;//n�����ڴ�Ĳ����������1�ĸ���
//	int ret = count_number_of_1(n);
//	printf("%d", ret);
//
//	return 0;
//}


//int	count_diff_bit(int m, int n)//��һ�ַ�������ֱ�ӵ�
//{
//	int i = 0;
//	int c = 0;//������
//	for(i=0; i<32; i++)
//	{
//		if((m & 1) != (n & 1))//�����ǲ�ͬλ�ĸ���
//		{
//			c++;
//		}
//		m >>= 1;
//		n >>= 1; 
//	}
//		return c;
//}


//int	count_diff_bit(int m, int n)//��2�ַ����������ͬΪ0������Ϊ1
//{
//	int i = 0;
//	int c = 0;//������
//	int tmp = m ^ n;//����������Ķ��������ж��ٸ�1 ���������Ϊ����Ϊ1
//	
//	while(tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		c++;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int ret = count_diff_bit(m, n);
//	printf("%d", ret);
//	return 0;
//}



//void print(int m)
//{
//	//��ӡ����λ
//	int i = 0;
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	//
//	//
//	//
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


void Jud(int a)
{
    if(a & 1 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}


int main()
{
    int a = 0;
    while(~scanf("%d", &a))
    {
        Jud(a);
    }
    return 0;
}