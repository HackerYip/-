#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main ()
//{
//int input = 0;
//printf("�������\n");
//printf("��Ҫ�ú�ѧϰ��?(1/0):");
////����
//scanf("%d", &input);
//
////�ж�
//if(input == 1)
//{
//printf("��offer\n");
//}
//else
//{
//printf("������\n");
//}
//return 0;
//
//}


//int main()
//{
//int a = 0;
//a = 20//һ���Ⱥ��Ǹ�ֵ
//if(a == 20);//�����Ⱥ����ж� 
//    printf("");
//
//    return 0;
//
//}


//int main()
//{
//int line  = 0
//    printf("�������\n");
//
//while(line<20000)
//{
//    printf("�ô���\n");
//    line = line + 1;
//}
//if(line >= 20000)
//    printf("��offer\n");
//else
//    printf("��򻹲���\n");
//
//    return 0;
//}



//��������
//int Add(int x ,int y)//ʵ��Add����Ҫ����
//{
//int z = x + y;
//return z ;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//int sum =0;
//    scanf("%d %d", &num1 , &num2);
////sum = num1 + num2;//���
////ʵ�ֺ��������
//sum = Add(num1,num2);
//printf("sum=%d\n",sum);//��ӡ 
//    return 0;
//
//}

//����
//int main()
//{
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //arr����10��Ԫ�ص���������
////0~9
//int i = 0 ;//ʹ��i�����±�
//while(i<9)
//{
//printf("%d\n",arr[i])
//i = i + 1;
//}
////���ַ� - �ַ�����
////char ch[5] = {'a','b','c','d','e'};
//// char [6] = "hello";
////int arr[10] = {0}; 
//    printf("");
//
//    return 0;
//
//}


//int main()
//{
////int n = 7/2;
//    //printf("%d\n",n0);
//double ret = 7.0 / 2;
//printf(" % d\n",n);


//% - //ȡģ(��)
//int n = 7 % 2;//7/2 ��3����1
//printf("%d\n",n);
//    return 0;
//
//}

//
//int main()
//{
//int n =0;
//scanf("%d\n", &n);
//if (n % 2 == 1)
//printf("����\n");
//else
//printf("ż��\n");
//% - ȡģ������ֻ������������
//
//return 0;
//}


// int main()
//{
// int a = 3;
//int b = a << 1 ;
//
//    printf("%d\n",b);
//
//    return 0;
//
//}

//{
//int a = 3;
//int b = 5;
//int c = a & b;//��λ�룬��Ӧ�Ķ�����λ��0����Ϊ0��ȫ1��Ϊ1
//int c a | b;//��λ�򣬶�Ӧ�Ķ�����λ��1����Ϊ1��ȫ0��Ϊ0
//int c = a ^ b;//��λ�����ͬΪ0������Ϊ1
//  printf(" % d",c)
//return 0 ;
//}


//C������0��ʾ�٣���0��ʾ��

//int a = 10;
//
////printf("%d\n",!a);
//
//int a = 10;
//int b = -a;
//printf("%d\n",b);
//
////��������ǲ�����
////Ӣ�����ݷ���Ľ����һ��
////sizeof������Ǳ���������������������ռ���ڴ�Ĵ�С����λ���ֽ�
//
////printf("%d\n",sizeof(a));//4
//
////~ - ��λȡ��(2����λ)
//
//
//return 0 ;


//int main()
//{
//int a = 10;
//int b = ++a;//ǰ��++����++����ʹ��
//int b = a++;//����++
//printf("a=%d b=%d\n",a ,b),//11 11
//int b = a--;//��ʹ�ú�--
////9 10
//return 0;
//
//}
//{
//    int a = 3;
//int b = 5;
////if((a == 3 ) && (b == 3))
////{
////printf("hehe\n");
////}
//
//if ((a == 3) || (b == 3))
//{
//printf("hehe\n");
//}
//return 0 ;
//}



//����������
//exp1 ? exp2 : exp3
//��if���
//int a = 0;
//int b = 0 ;
//int max = 0;
////����
//scanf("%d %d", &a, &b);//
//
////�Ƚ�
////if (a > b)
////max = a;
////else
////max = b; 
////��Ŀ������
//max =(a > b? a : b );


//int a = 3;
//int b = 5;
//int c = 10;
////���ű��ʽ������������μ���
//// �������ű��ʽ�Ľ�������һ�����ʽ�Ľ��
//
//
//int d = ( a + 2, b = a - 3, c = b + 4);
////b = 0  c = 4
//
//printf("%d\n",d);
//return 0 ;

//
//typedef unsigned int u_int;
//
//int main()
//{
////unsigned int - �޷�������
//
//unsigned int num = 100;
//u_int num2 = 100;
//    printf("")
//        return 0;
//
//}


//
//int main()
//{
// //�˴�a�ǼĴ�������
////register�ǽ������ã������������a��������Ĵ�����û�о��������ã����������Լ����ж�����
//register int a = 10 ;
////�Ĵ��������ǲ���ȡ��ַ��
//   
//        return 0;
//
//}


//
//int main()
//{
//int a = 0;
//int b = 0;
//int max  =0;
//scanf("%d %d", &a, &b);
//if ( a > b )
//{ 
//max = a;
//}
//else
//{
// max = b;
//}
//printf("%d\n",max);
//
//return 0;
//
//
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//    int a = 0;
//
//    int b = 0;
//
//
//
//    scanf("%d %d", &a, &b);
//
//
//
//    int n = a % b;//��
//
//    int g = a / b;//��
//
//    printf("%d %d", g, n);
//
//    return 0;
//
//}



#include <stdio.h>
int main() {
    int a = 40, b, c = 212;
    b = (-8 + 22) * a - 10 + c / 2;
    printf("%d", b);
    return 0;

}
