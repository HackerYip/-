#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//int a = 10;
////%p - ��ӡ�ĸ�ʽ����ӡ
//
////printf("%p\n",&a);
//p = &a;//p��������ŵ�ַ�ģ��������ǰ�p��Ϊָ�����
//int *p = &a;//
//
//return 0;
//} 



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//& - ȡ��ַ������
//* - �����ò�����/��ӷ��ʲ�����

//int main()
//{
//	int a = 10;
//	//%p - ��ӡ�ĸ�ʽ����ӡ
//	//printf("%p\n",  &a);
//
//	int * p = &a;//p��������ŵ�ַ�ģ��������ǰ�p��Ϊָ�����
//	*p = 20;//*�Ľ����ò�������*p����˼����ͨ��p�е�ֵ���ҵ�p��ָ��Ķ���Ҳ����˵*p����a
//
//	//printf("%d\n", a);
//	printf("%d\n", sizeof(p));
//
//	/*printf("%p\n", p);
//	printf("%p\n", &a);*/
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(long*));//
//	printf("%d\n", sizeof(float*));//
//	printf("%d\n", sizeof(double*));//
//
//	return 0;
//}
//


//�ṹ�����͵Ķ���
//struct Stu
//{
//	//�ṹ��ĳ�Ա
//	char name[20];
//	int age;
//	char sex[10];
//};
//#include <string.h>
//
//int main()
//{
//	//�����ṹ����������ҳ�ʼ��
//	struct Stu zhangsan = {"����", 30, "��"};
//	struct Stu lisi = {"����", 24, "����"};
//
//	//->���������
//	struct Stu * pl = &lisi;
//	printf("%s %d %s\n", (*pl).name, (*pl).age, (*pl).sex);
//	printf("%s %d %s\n", pl->name, pl->age, pl->sex);
//
//	//��ӡ�ṹ�������
//	//printf("%s %d %s\n", zhangsan.name, zhangsan.age, zhangsan.sex);
//	//printf("%s %d %s\n", lisi.name, lisi.age, lisi.sex);
//
//	return 0;
//}

//.
//�ṹ���Ա���ʵĲ�����
//�ṹ�����.�ṹ���Ա
//
//-> 
//�ṹ���Ա���ʵĲ�����
//�ṹ��ָ��->�ṹ���Ա
//

//
//int main()
//{
//	;//�����
//
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//
//	//1
//	//if (age >= 18 && age < 40)
//	//{
//	//	printf("1���Ǻ�\n");
//	//}
//	////2 - �߼����ǲ�����Ҫ���
//	//if (18 <= age < 40)
//	//{
//	//	printf("2: ����\n");
//	//}
//
//	//if (age < 18)
//	//	printf("����\n");
//	//else if (age < 40)
//	//	printf("����\n");
//	//else if (age < 60)
//	//	printf("׳��\n");
//	//else if (age < 90)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//
//
//
//	//if (age < 18)
//	//	printf("����\n");
//	//else if (age >= 18 && age < 40)
//	//	printf("����\n");
//	//else if (age >= 40 && age < 60)
//	//	printf("׳��\n");
//	//else if (age >= 60 && age < 90)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//
//	//if (age >= 18)
//	//	printf("����\n");
//	//else
//	//	printf("δ����\n");
//
//	/*if (age >= 18)
//		printf("����\n");*/
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//	else
//	//		printf("haha\n");
//
//	//��������C/C++��̡�
//	return 0;
//}

//else�Ǻ����������if����ƥ���

//
//int  main()
//{
//	int a = 10;
//
//	if (5 == a)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//if (a % 2 == 1)
//	/*if (a % 2 != 0)
//	{
//		printf("����\n");
//	}*/
//
//	return 0;
//}
//


//int main()
//{
//	int i = 1;
//	//while (i <= 100)
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//
//	//while (i <= 100)
//	//{
//	//	if(i%2 == 1)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//9
//	int n = 1;
//	switch (day)
//	{	
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������������1~7������\n");
//		break;
//	}
//	//if (1 == day)
//	//	printf("����1\n");
//	//else if(2 == day)
//	//	printf("����2\n");
//	//....
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//


//#include <stdio.h>
//int main() {
//    int i, sum = 0;
//    i = 1;  //����
//    while (i <= 100 /*����*/) {
//        sum += i;
//        i++;  //����
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//
//
//    int i = 100;
//
//    while (i <= 200)
//
//    {
//
//        if (i % 1 == i && i % i == 1)
//
//        {
//
//            printf("%d\n", i);
//
//        }
//
//        i++;
//
//    }
//
//    return 0;
//
//
//
//}


//
//int main()
//{
//int a = 0;
//scanf("%d", &a);
//
//switch(a)
//{
//case 1:
//
//printf("%d\n",a);
//case 2:
//
//return 0;
//}

