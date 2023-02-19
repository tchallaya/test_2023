#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//作用域和生命周期
//局部变量的作用域：就是局部变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2023;
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("2:%d\n", g_val);
//	}
//	return 0;
//}

//生命周期
//变量的生命周期：指变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部到出局部范围，28-31
//全局变量的生命周期：程序的开始到结束

//int main()
//{
//	{
//		int a = 10;
//		printf("a = $d", a);
//	}
//	return 0;
//}

//常量

//#define MAX 10000
//int main() 
//{
//	////1 字面常量：
//	//3.14;
//	//666;
//	//"a";
//	//"afdfadfdas";
//
//	////2 const 修饰的常变量：
//	//const int a = 2;//a就是常变量 - 具有常属性
//	//printf("a = %d", a);
//
//	////3 #define 定义的标识符常量
//	//int n = MAX;
//	//printf("%d", n);
//
//	return 0;
//}

//4 枚举常量
//可以一一列举的常量

//性别
//enum Sex {
//	MALE,//男
//	FEMALE,//女
//	SECRET //保密
//};
//
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", s);
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

