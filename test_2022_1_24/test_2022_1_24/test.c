#define _CRT_SECURE_NO_WARNINGS 1

#include<limits.h>

int main()
{
    int* p = (int*)malloc(INT_MAX)��
    int i = 0;
    if(p == NULL)
    return 0;

    for(i = 0; i < 10; i++)
    {
        *(p + i)= i;//ֱ������д��malloc����̫�󣬿��ٲ�������p���ؿ�ָ�룬�������
    }
    return 0;
}


//2.�Զ�̬���ٿռ��Խ�����

int main()
{
    char* p = (char*)malloc(10 * sizeof(char));

    if(p == NULL)
    {
    printf("%s\n",strerror(errno));

    return 0;
}
//ʹ��
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        *(p + i) = 'a' + i;
    }
//�ͷ�
    free(p);//�����ͷ����Σ��������һ��freeû��p�óɿ�ָ���ǿ����ͷ����εģ����Ǿ�����Ҫ��ͬһ���ռ��ͷ�����
    p = NULL;

    return 0 ;
}


int main()
{
int* p = (int*)malloc(40);
//

}


void test()
{
    int* p = (int*)malloc(100);
    if(p = NULL)
    {
        return 0;
}
//ʹ��
//
//�����ͷţ��ͻ�����ڴ�й¶������
return 0;
}

int main()
{
    test();

    return 0;
}


//��������
struct S1
{
    int n;
    int arr[0];//��С��δָ����
};

struct S2
{
    int n;
    int arr[];//�������飬������һ��

};
int main()
{
    //printf("%d\n", sizeof(struct S1));
    struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 40);
    ps -> n = 100;

    int i = 0;
    for(i = 0; i < 10; i++)
    {
        ps -> arr[i] = i;
    }
    //����
   struct S2* ptr = realloc(ps, sizeof(struct S2) + 80);
    if(ptr == NULL)
    {
        return 0;
    }
    //�ͷ�
    ps = NULL;

    return 0;
}
