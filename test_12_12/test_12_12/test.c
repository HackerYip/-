#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int c = a ^ b;
    //c�ж��ٸ�1��˵��a��b�м������ֲ�ͬ
    int count = 0;
    while (c) {
        count++;
        c = c & (c - 1);
    }

    printf("%d\n", count);
    return 0;
}