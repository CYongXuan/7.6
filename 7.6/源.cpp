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
//	printf("%d\n", sizeof a);//sizeof是操作符不是函数所以不用加（）
//	//printf("%d\n", sizeof int);//错误的
//	printf("%d\n", sizeof arr);//计算数组大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//0000000000000000000000000000000
//	//1111111111111111111111111111111
//	//源码 反码 补码
//  //只要是整数，内存中存储的都是二进制的补码
//  //反码加一就是补码
//  //源码取反就是反码
//	//负数在内存中存储的是二进制的补码
//  //-2
//  //10000000000000000000000000000000000000010 - -2源码
//  //11111111111111111111111111111111111111101 - -2反码
//  //11111111111111111111111111111111111111110 - -2补码
//	int b = ~a;// ~ -- 按二进制位取反
//	
//	printf("%d\n", b);//使用的，打印的是这个数的源码
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先赋值再++
//	//int c = ++a;//前置++，先++再赋值
//	//int d = a--;
//	int d = --a;
//	//printf("a=%d b=%d c=%d\n", a, b,c);
//	printf("a=%d d=%d\n", a,d);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//强制类型转换 把3.14转换整型
//
//	return 0;
//}

//int main()
//{
//	// 真 非0
//	// 假 0
//	// && - 逻辑与
//	// || - 逻辑或
//	int a = 0,b=5;
//	int c = a && b;//都要为真才能输出1 否则输出0
//	int d = a || b;//其中有一个为真输出1 否则输出0
//	printf("c=%d d=%d\n", c,d);
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//三目操作符 等于if else
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
//	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//局部变量 自动变量
//	
//	return 0;
//}

//关键字
//int main()
//{
//	//register int a = 10;//register 建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int
//	unsigned int num = 1;//unsigned 无符号的
//	//struct - 结构体关键字
//	//union - 联合体关键字
//	return 0;
//}

//int main()
//{
//	//int float;//err 不能定义为关键字名
//	//typedef - 类型定义 - 类型重定义(重新取名字)
//	unsigned int num = 20;
//	typedef unsigned int u_int;
//	u_int num2 = 10;
//	return 0;
//}

//void test()//void - 无返回值的函数
//{
//	static int a = 1;//static让a变成静态局部变量 
//	//static 修饰局部变量
//	// 局部变量生命周期变长
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


//static修饰全局变量
//改变了全局变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//static 修饰函数
//改变了全局函数的作用域 - 让静态的全局函数只能在自己所在的源文件内部使用
//改变了函数的链接属性
//普通的函数有外部链接属性，被static修饰变成内部链接属性
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//define 定义标识符常量
#define MAX 100
//define 可以定义宏-带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的方式
//#define MAX(X,Y) (X>Y?X:Y)//X是否大于Y 是就返回X 否返回Y
//
//int main()
//{
//	//int a = MAX;
//	int a = 10, b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a > b ? a : b);
//	printf("max%d\n", max);
//
//	return 0;
//}



//指针
//32位 32根地址线/数据线
//正电和负电
// 1     0

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//有一种变量是用来存放地址的 - 指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - 解引用操作符  *p=a
//	//有一种变量是用来1存放地址的 - 指针变量
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char*pc = &ch;// 在32位系统地址需要32bite=4个字节
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));//4个字节
//  return 0;
//}