#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>

int main()
{




//ָ������ - ���ָ�������

void test(char* arr[4][5])
{}

void test(char* (*p)[5])
{}

int main()
{
	ָ������
	int* arr[5];
	char* arr2[6];
	char** arr3[4];//�����д�ŵĶ���ָ��
	
	����ָ�� - ָ�������ָ��
	int arr[10];
	int* p = arr;
	int (*p2)[10] = &arr;//ȡ����������ĵ�ַ����Ȼ������ĵ�ַ����Ӧ�÷ŵ�����ָ������У�int (*)[10] 
	p2����һ������ָ��

	char* arr[4][5];
	test(arr);

	return 0;
}


//����ָ��
//������ʵҲ���е�ַ�ģ�������������&�����������Ǻ����ĵ�ַ


int my_test(const char* s)
{
	printf("����ͨ������ָ�������ú���\n");
	return 0;
}

int main()
{
	int (*pf)(const char*) = my_test;
  int(*)(const char*)
	pf("hehe");
	return 0;
}

//����ָ�������-- ��ź���ָ������� - ָ������

//ָ����ָ�������ָ��

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*pa)(int, int) = Add;//����ָ��
	int (* pfA[4])(int, int);//����ָ�������
	int (* (*ppfA)[4])(int, int) = &pfA;//ppfA ��һ��ָ�룬��ָ��ָ����һ����ź���ָ�������

	return 0;
}


}