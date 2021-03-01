#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 算术操作符 + - * / %
// 1 除%操作符之外，其余操作符可以作用于整数和浮点数
// 2 对于 / 操作符如果两个操作符都为整数,则执行整数除法 而只有出现浮点数时才执行浮点数除法
// 3 %操作符的两个操作数必须为整数。返回的是整除之后的余数
//int main() {
//	double a = 5 % 2;
//	printf("A = %lf\n", a);
//	return 0;
//}

//  移位操作符 >> <<
//  1 移动二进制位
//  2 不要移动复数

// 交还 a,b变量且不通过临时变量
/*
int main() {
	int a = 3;
	int b = 5;
	// 加减法 -- 容易溢出
	a = a + b;
	b = a - b;
	a = a - b;
	// 异或方法 -- 执行效率不高且可读性差
	a = a ^ b;
	b = b ^ a;
	a = b ^ a;
 	//a = ;
	printf("a = %d,b = %d", a, b);
}
*/
// 计算数值二进制有多少个1
int main() {

	int count = 0;
	int num = -1;
	//scanf("%d", &num);

	while (num) {
		count++;
		num = num & (num - 1);
	}


	/*
	for (int i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	*/

	/*
	* 无法解决参数为负数的问题
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	*/
	printf("%d", count);
}