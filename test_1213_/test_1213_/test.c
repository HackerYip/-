#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ð������
//�������ڵ�Ԫ�ؽ��бȽϣ�����п��ܵĻ���Ҫ����


//void bubble_sort(int arr[], int sz)
//void bubble_sort(int* arr, int sz)
void bubble_sort(int* arr, int sz)
{            //4         /   4
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		//һ��ð������ȽϵĶ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	/*int arr[2][3][4];*/
	//���鴫��
	int arr[10] = { 3,1,5,2,4,9,0,7,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//���һ��������arr����������� - ð��������㷨
	bubble_sort(arr, sz);//ʵ�������鴫�Σ����ݵĲ����������飬����ȥ��������Ԫ�صĵ�ַ

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
