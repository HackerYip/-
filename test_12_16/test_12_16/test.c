#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////ð������
////�������ڵ�Ԫ�ؽ��бȽϣ�����п��ܵĻ���Ҫ����
//
//
////void bubble_sort(int arr[], int sz)
////void bubble_sort(int* arr, int sz)
//void bubble_sort(int* arr, int sz)
//{            //4         /   4
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		//һ��ð������ȽϵĶ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	/*int arr[2][3][4];*/
//	//���鴫��
//	int arr[10] = { 3,1,5,2,4,9,0,7,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//���һ��������arr����������� - ð��������㷨
//	bubble_sort(arr, sz);//ʵ�������鴫�Σ����ݵĲ����������飬����ȥ��������Ԫ�صĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
// 
//#include<stdio.h>
//
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//
//    for(i = 0; i < 10; i++)
//    {
//        for(j = 0; j <= i; j++)
//        {
//            if (j == 0)//��ά����ĵ�һ��
//                arr[i][j] = 1;
//
//            if (i == j)//��ά����ĶԽ���
//                arr[i][j] = 1;
//
//            if (i >= 2 && j >= 1)//����
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//
//                    printf(" %d", arr[i][j]);
//        }
//                printf("\n");
//    }
//  return 0;
//}

//#include<stdio.h>
//
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////void Init(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		arr[i] = 0;
////	}
////}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr, sz);*/
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//#include<stdio.h>
//
//void swap(int *arr1, int *arr2[], int leng)
//
//{
//
//    int i = 0;
//
//    for (i = 0; i < leng; i++)
//
//    {
//
//        int t = arr1[i];
//
//        arr1[i] = arr2[i];
//
//        arr2[i] = t;
//
//    }
//
//}



//int main()
//
//{
//
//    int i = 0;
//
//    int arr1[5] = { 1,2,3,4,5 };
//
//    int arr2[5] = { 5,4,3,2,1 };
//
//    swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));
//
//    for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//
//    {
//
//        printf("%d ", arr1[i]);
//
//    }
//
//    printf("\n");
//
//    for (i = 0; i < sizeof(arr2) / sizeof(arr1[0]); i++)
//
//    {
//
//        printf("%d ", arr2[i]);
//
//    }
//
//    return 0;
//
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    while(n)
//    {
//        printf("%d", n % 10);
//        n /= 10;
//    }
//  return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    scanf("%d %d %d", &a, &b, &c);//����
//    //����
//    //���ֵ����a�У���Сֵ����c��
//
//    //��a��b�еĽϴ�ֵ����a��
//    if(a < b)//���ڵĻ��Ͳ��ö�������ͬ��
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//
//    if(a < c)//��a��c�Ľϴ�ֵ����a��
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//
//    if(b < c)//��b��c�Ľϴ�ֵ����b��
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//
//    printf("%d %d %d\n", a, b, c);//���
//  return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//
//    for(i = 1; i <= 100; i++)
//    {
//        //ÿһ�ν������ж����£��ж�iʱ��Ϊ3�ı���
//        if(i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//  return 0;
//}

#include<stdio.h>

int main()
{
    int i = 0;

    for (i = 3; i <= 100; i += 3)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
