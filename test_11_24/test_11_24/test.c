#define _CRT_SECURE_NO_WARNINGS 1

//const���α���
// const����ָ��


//const ����*�����
// const���ε�ָ��ָ������ݣ���ʾָ��ָ������ݲ���ͨ��ָ�����ı䣬����ָ����������ǿ��Խ��иı��
//
//const ����*���ұ�
//const���ε���ָ������ı���ָ����������ݲ��ܱ��޸ģ�����ָ��ָ��������ǿ���ͨ��ָ�����ı�ġ�
//

#include<stdio.h>
int main()
{
    const int n = 10;
    /*n = 20;*/
    int m = 100;
    int* const p = &n;
    //p = &m;
    *p = 20;


    printf("%d", n);
    return 0;

}