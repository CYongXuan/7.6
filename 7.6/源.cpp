#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d",c);
//	return 0;
//}


//int main()
//{
//	int a ,b;
//	
//	scanf("%d %d", &a, &b);
//	printf("%d", a+b);
//	return 0;
//}

//int main()
//{
//	int k, n = 0;
//	scanf("%d\n", &k);
//	for(double Sn=0,)
//	return 0;
//}

//int main()
//{
//	int num1 ,num2 ;
//	
//	scanf("%d\n", &num1, &num2);
//	if (num1 > num2)
//
//		printf("%d\n", num1);
//
//	else
//
//		printf("%d\n", num2);
//
//	return 0;
//}

//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//
//}
//
//int main()
//{
//	int num1 ;
//	int num2 ;
//	int c = 0;
//	scanf("%d", &num1);
//	scanf("%d", &num2);
//	c = Max(num1, num2);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//sizeof�ǲ��������Ǻ������Բ��üӣ���
//	//printf("%d\n", sizeof int);//�����
//	printf("%d\n", sizeof arr);//���������С
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//0000000000000000000000000000000
//	//1111111111111111111111111111111
//	//Դ�� ���� ����
//  //ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//  //�����һ���ǲ���
//  //Դ��ȡ�����Ƿ���
//	//�������ڴ��д洢���Ƕ����ƵĲ���
//  //-2
//  //10000000000000000000000000000000000000010 - -2Դ��
//  //11111111111111111111111111111111111111101 - -2����
//  //11111111111111111111111111111111111111110 - -2����
//	int b = ~a;// ~ -- ��������λȡ��
//	
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������Դ��
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++���ȸ�ֵ��++
//	//int c = ++a;//ǰ��++����++�ٸ�ֵ
//	//int d = a--;
//	int d = --a;
//	//printf("a=%d b=%d c=%d\n", a, b,c);
//	printf("a=%d d=%d\n", a,d);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//ǿ������ת�� ��3.14ת������
//
//	return 0;
//}

//int main()
//{
//	// �� ��0
//	// �� 0
//	// && - �߼���
//	// || - �߼���
//	int a = 0,b=5;
//	int c = a && b;//��ҪΪ��������1 �������0
//	int d = a || b;//������һ��Ϊ�����1 �������0
//	printf("c=%d d=%d\n", c,d);
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//��Ŀ������ ����if else
//
//	return 0;
//}

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�ֲ����� �Զ�����
//	
//	return 0;
//}

//�ؼ���
//int main()
//{
//	//register int a = 10;//register �����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int
//	unsigned int num = 1;//unsigned �޷��ŵ�
//	//struct - �ṹ��ؼ���
//	//union - ������ؼ���
//	return 0;
//}

//int main()
//{
//	//int float;//err ���ܶ���Ϊ�ؼ�����
//	//typedef - ���Ͷ��� - �����ض���(����ȡ����)
//	unsigned int num = 20;
//	typedef unsigned int u_int;
//	u_int num2 = 10;
//	return 0;
//}

//void test()//void - �޷���ֵ�ĺ���
//{
//	static int a = 1;//static��a��ɾ�̬�ֲ����� 
//	//static ���ξֲ�����
//	// �ֲ������������ڱ䳤
//	a++;
//	printf("a=%d\n", a);// 2 3 4 5 6
//
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//static����ȫ�ֱ���
//�ı���ȫ�ֱ����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//static ���κ���
//�ı���ȫ�ֺ����������� - �þ�̬��ȫ�ֺ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//�ı��˺�������������
//��ͨ�ĺ������ⲿ�������ԣ���static���α���ڲ���������
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//define �����ʶ������
#define MAX 100
//define ���Զ����-������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��ķ�ʽ
//#define MAX(X,Y) (X>Y?X:Y)//X�Ƿ����Y �Ǿͷ���X �񷵻�Y
//
//int main()
//{
//	//int a = MAX;
//	int a = 10, b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a > b ? a : b);
//	printf("max%d\n", max);
//
//	return 0;
//}



//ָ��
//32λ 32����ַ��/������
//����͸���
// 1     0

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - �����ò�����  *p=a
//	//��һ�ֱ���������1��ŵ�ַ�� - ָ�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char*pc = &ch;// ��32λϵͳ��ַ��Ҫ32bite=4���ֽ�
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));//4���ֽ�
//  return 0;
//}