#define _CRT_SECURE_NO_WARNINGS 1

//
//int Add(int x, int y)
//{
//	int z = 0;
//}
//
//int main()
//{
//	int a = 0;
//
//	return 0;
//}

//#include <stdio.h>

//int num = 10;
//
//int main()
//{
//    int num = 1;
//
//    printf("num = %d\n", num);//�ֲ�����
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//
//    printf("%d\n", strlen(arr));
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}



//
//#include <stdio.h>
//
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//
//    return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[];//err
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n] = {0};
//	return 0;
//}

//дһ�����������������Ľϴ�ֵ
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int max = 0;
//
//	//����
//	scanf("%d %d", &n1, &n2);
//
//	//��ϴ�ֵ
//	// //1
//	//if (n1 > n2)
//	//	max = n1;
//	//else
//	//	max = n2;
//	// 2
//	//max = (n1 > n2 ? n1 : n2);
//
//	//3
//	max = Max(n1, n2);
//	//��ӡ
//	printf("%d\n", max);
//
//	return 0;
//}


//void �������ʾ����Ҫ���������κ�ֵ
//void test()
//{
//	//a�����Ǿֲ�������
//	//ʹ��static���ξֲ�����
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//�����ʹ�����������ļ����ⲿ�ļ�����	ȫ�ֱ�������Ҫ����һ��
//extern��һ���ؼ��֣���ר�����������ⲿ���ŵ�

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



////�����ⲿ����
//extern  int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



//#define �����ʶ������

//#define M 100
//#define STR "hehe"
//
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//
//	return 0;
//}
//


//#define �����

//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = ADD(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//    //& ȡ��ַ������
//    //%p - ���Ե�ַ����ʽ��ӡ
//
//    int a = 10;//aҪ���ڴ��п��ٿռ��
//    printf("%p\n", &a);
//
//    int* p = &a;//p����ָ�����
//
//    *p = 20;//* --> �����ò�������
//
//    printf("%d\n", a);//20

    //char ch = 'w';
    //char * pc = &ch;

 /*   return 0;
}*/


//
//��ַ
//��ַ�Ƿ���ָ�������
//
//
//
//#include <stdio.h>

/*
int main()
{
    printf("     **\n");
    printf("     **\n");
    printf("************\n");
    printf("************\n");
    printf("    *  *\n");
    printf("    *  *\n");

    return 0;
}

*/
/*
int main()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");

    return 0;
}
*/








//
//#include <stdio.h>
//
//int main()
//{
//    //����
//    int n = 0;
//    scanf("%d", &n);
//
//    //�жϺʹ�ӡ
//    //   /  ����
//    //   % - ȡģ
//    //n%5 �������n����5 �������
//
//    if (n % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //����
//    scanf("%d %d", &a, &b);
//    if (a >= 0 && a < 10000 && b>0 && b < 10000)
//    {
//        int c = a / b;
//        int d = a % b;
//        //���㲢��ӡ
//        printf("%d %d\n", c, d);
//    }
//    return 0;
//}




//ȫ�ֱ���
//int g_val = 2021;

//���static����ȫ�ֱ����أ�

//static int g_val = 2021;

//����Add����

//static int Add(int x, int y)
//{
//    return x + y;
//}

//����Ҳ�Ǿ����ⲿ�������Ե�





//#include<stdio.h>
//int main()
//{
//    int x, y;
//    scanf("%d", &x);
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//    printf("%d\n", y);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int h = 0, min = 0, s = 0;
//    scanf("%d", &s);
//
//
//    h = (s / 3600);
//    min = (s % 3600) / 60;
//    s = (s % 3600) % 60;
//
//
//    printf("%d %d %d", h, min, s);
//    return 0;
//}


#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    float p = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    p = (a + b + c + d + e) / 5.0;
    printf("%.1f", p);
    return 0;
}