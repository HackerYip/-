#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void left_move(char* str, int k)
//{
//        int i = 0;
//        for(i = 0; i < k; i++)
//        { 
//            char tmp = *str;
//            int len = strlen(str);
//            int j = 0;
//
//            for(j = 0; j < len - 1; j++)
//            {
//
//                *(str + j) = *(str + j + 1);
//            }
//                *(str + len - 1) = tmp;
//        }
//}


//�����ַ���
void reverse(char* str, int k)
{
    while(left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}


void left_move(char* str, int k)
{
int len = strlen(str);
k %= len;
reverse(str, str+k-1)//ǰ
reverse(str+k, str+len-1);//��
reverse(str, str+len-1);//����

}


int main()
{
    char arr[] = "abcdef";
//1.
//abcdef
//cdefab
//defabc
//
//2.
//abcdef
//bafedc
//cdefab
    int k = 0;
    scanf("%d", &k);
    left_move(arr, k);
    printf("%s\n", arr);
    return 0;
}



//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
//
//���Ͼ���
//
//
//1 2 3
//4 5 6
//7 8 9
//
//
//1 2 3
//2 3 4
//3 4 5

int main()
{
int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int x = 0;//���Ͻǵ���
int   y  = 2;//���Ͻǵ���
int k = 0;
scanf("%d", &k);
if(arr[x][y] < k)
{
x++;
}
else if(arr[x][y] > k bgt   )
{
y--;
}
else
{
    printf("�ҵ��ˣ��±���: x = %d y = %d\n", x, y);
    break;
}
}



int is_left_move(char*arr1, char* arr2)
{
    int len = 0;
    int i = 0;
    for(i = 0; i < len; i++)
    {
        left_move(arr1, 1);
        if (strcmp(arr1, arr2) == 0)
    return 1;
    }
    return 0;
}



int main()
{
cahr arr1[] = "AABCD";
char arr2[] = "BCDAA";
int ret = is_left_move(arr1, arr2);//�ж�arr2�ǲ���arr1��ת�õ���
printf("%d\n", ret);
return 0;


}