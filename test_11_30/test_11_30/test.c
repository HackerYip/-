#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������
//��Ŀ���ݣ�
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ�������һ��
//����Ϊ4�����ɷ��Ĺ��ʣ�
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������


int main()
{
    int killer = 0;
    for(killer = 'a'; killer <= 'd'; killer++)
    {
        //1����0                  1����0               1����0             1����0
        if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
        {
            printf("%c\n", killer);
        }
    }
    return 0;
}