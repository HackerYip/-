#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//char a[1000];
//int i;
//for(i = 0; i < 1000; i++)
//    {
//    a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//
//return 0;
//

#include<float.h>

int main()
{
    int n = 9;
    float* pFloat = (float*)&n;
    printf("n��ֵΪ��%d\n", n);
    printf("*pFloat��ֵΪ��%f\n", *pFloat);//S M E
    *pFloat = 9.0;
    printf("num��ֵΪ��%d\n", n);
    printf("*pFloat��ֵΪ��%f\n", *pFloat);//S M E
    return 0;
}