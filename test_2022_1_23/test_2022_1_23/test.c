#define _CRT_SECURE_NO_WARNINGS 1

enum Day
{
//ö�ٵĿ���ȡֵ
Mon,
Tues,
Wed,
Thur,
Fri,
Sta,
Sun
};

typedef enum Sex 
{
    MALE=4,
    FEMALE,
    SECRET
}Sex;


int main()
{
enum Day d = Sun;
enum Sex s = SECRET;
Sex s2 = MALE;
printf("%d\n", sizeof(s2));

//printf("%d\n", MALE);
//printf("%d\n", FEMALE);
//printf("%d\n", SECRET);

}


union Un
{
    char c;
    int i;
};

int main()
{
    union Un u;
    printf("%d\n", sizeof(u));
    printf("%p\n", &u);
    printf("%p\n", &(u.c));
    printf("%p\n", &(u.i));

    return 0;
}

//check_sys()
//{
//    int a = 1;
//    return(*(char*)&a);
//}


int check_sys()
{
    union Un
    {
        char c;
        int i;
    }u;

    u.i = 1;
    return u.c;
}


int main()
{
    int ret = check_sys();
    if(1 == ret)
        printf("С��\n");
    else
        printf("���\n");

    //�������1����ʾС��
    //�������0����ʾ���

    return 0;
}

#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
//����10�����͵Ŀռ�
//int arr[10];
    int* p = (int*)malloc(40);

    if(NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    //ʹ��
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }

    for(i = 0 ; i < 10; i++)
    {
        printf("%d ", p[i]);
    }

    //�ͷ�
    free(p);//���ͷź�p����Ұָ����
    p = NULL;//�ص㣬�ÿ�ָ�룬�䰲ȫ�ˣ������ַ�Ҳ��ػ�������ϵͳ���Ǹ��ռ�

    return 0;
}

int main()
{
    //����10�����͵Ŀռ�
    //int arr[10];
    int* p = (int*)calloc(10, sizeof(int));

    if (NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    //ʹ��
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    //��Ҫ����
    int *ptr = (int*)realloc(p, 80);
    if (NULL != ptr)
    {
     p = ptr;
    }
    //����ʹ����


    //�ͷ�
    free(p);//���ͷź�p����Ұָ����
    p = NULL;//�ص㣬�ÿ�ָ�룬�䰲ȫ�ˣ������ַ�Ҳ��ػ�������ϵͳ���Ǹ��ռ�

    return 0;
}