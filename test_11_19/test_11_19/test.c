#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


void reverse(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//strlen()�Ǽ����ַ������ȵĺ���
	while (left < right)
	{//���������ߵ�ֵ�����ڵݽ�
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "I am a student";//����һ���ַ���
	printf("����ǰ:%s\n", arr);
	reverse(arr);
	printf("�����:%s\n", arr);

	return 0;
}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a,b);

	printf("%d\n", c);

	return 0;
}
