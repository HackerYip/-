#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = a > b? a : b;
//    while(1)
//    {
//        if((max % a ==0) && (max % b == 0))
//        { 
//            break;
//        }
//        max++;//��һ�¼����Գ�
//    }
//    printf("%d\n", max);
//
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while((i * a) % b != 0)//ֱ�ӵ�whileѭ������������0������ѭ��������
//    {
//        i++;
//    }
//        printf("%d\n", i*a);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* left, char* right)
{
    assert(left && right);
    while(left < right)
    {
        char tmp = *left;
        
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }   
}



int main()
{
    char arr[100] = {0};
    int len = strlen(arr);
//����
    gets(arr);

//1.����ÿһ������
    char* start = arr;
    char* end = start;

    while(*end != '\0')
    {
        while(*end != '\0' && *end != ' ')
        {
            end++;
        }
        reverse(start, end - 1);// end����֮ǰ��
            if(*end == '\0')//��ʱ����β��������������
            { 
                start = end;        
            }
            else
            {
                start = end + 1;//��end�����ո�ָ����һ������ 
                end = start;
            }
        }

//2.���������ַ���
    reverse(arr, arr+len-1);

//���
    printf("%s\n", arr);

    return 0;
}