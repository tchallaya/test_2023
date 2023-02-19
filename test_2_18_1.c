#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数据类型

//int main()
//{
//	////%d - 打印一个整数
//	//printf("%d", 100);
//	
//	//sizeof - 关键字 - 操作符 - 计算类型或变量所占的空间大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long ));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//变量

//int main() 
// {
//	//创建一个变量
//	//类型 变量的名字 = 0；
//	int age = 21;
//	double weight = 60.3;
//	
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}

//全局变量 - {}外定义的变量
//int a = 100;
//
//int main() {
//	//局部变量 - {}内定义的变量
//	//当局部变量和全局变量名字冲突时，局部优先（不建议写代码时全局变量和局部变量名写成一样）
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//求两个整数的和
//scnaf - 输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//}