#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ

//�����������һ��0~32767֮�������
//������
//��Ҳ�С�ˣ����Ի���ߣ���С��
//��Ҳ´��ˣ����Ի���ߣ��´���
//��Ҳ¶��ˣ����Ի���ߣ���ϲ�㣬�¶���

//C���������ɵ�������ķ�ʽ��rand����
//0~RAND_MAX 0x7fff
//0~32767
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void menu()
{
	printf("***************************\n");
	printf("*****    1. play     ******\n");
	printf("*****    0. exit     ******\n");
	printf("***************************\n");
}


void game()
{
	int guess = 0;
	//��������Ϸ�Ĺ���
	//���������
	int r = rand();
	//������
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ��-�����������������

	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}
