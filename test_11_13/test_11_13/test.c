#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
        int a = 8;
        int b = 6;
        printf("����ǰ: a=%d, b=%d\n", a, b);
        a = a ^ b;
        b = a ^ b;//a ^ b^b
        a = a ^ b;//a ^ b ^ a

        printf("������: a=%d, b=%d\n", a, b);
    return 0;
}