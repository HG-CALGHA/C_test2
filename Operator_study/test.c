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
/*
// 计算数值二进制有多少个1
int main() {

	int count = 0;
	int num = -1;
	//scanf("%d", &num);

	while (num) {
		count++;
		num = num & (num - 1);
	}


	
	for (int i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	

	
	 无法解决参数为负数的问题
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	
	printf("%d", count);
}
*/
// & * << >> ~
/*
int main() {
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n",a);
	a = a & (~(1 << 2));
	printf("%d\n", a);
	//
		a    = 00000000000000000000000000001011
		1    = 00000000000000000000000000000001
		1<<2 = 00000000000000000000000000000100
		a | 1<<2 = 00000000000000000000000000001111
		~(1<<2)  = 11111111111111111111111111111011
		a & ~(1<<2) = 00000000000000000000000000001011
		& 同为1则为1，不同则为0
		* 同为0则为0，不同则为1
		<< 左移动
		>> 右移动
		~按位取反
	//
}  
*/

// 关于sizeof的使用
/*
int main() {
	short x = 0;
	int a = 10;

	printf("%d\n",sizeof(x = a + 1));// sizeof中的赋值操作无效，sizeof查看的是X（也就是short）的大小

	printf("%d\n", x);

}
关于sizeof与数组的使用
void test1(int arr[]) {
	// arr 接收时是以指针形式接收所以sizeof计算的是指针大小,指针大小默认为4或8
	printf("%d\n", sizeof(arr));//4
}

void test2(char ch[]) {

	printf("%d\n", sizeof(ch));//4
}

int main() {
	int arr[10] = { 0 };
	char ch[10] = { 0 };

	printf("%d\n", sizeof(arr)); // 40
	printf("%d\n", sizeof(ch)); //10
	test1(arr);
	test2(ch);
}
*/

// ++ -- 的前后置问题
/*
int main() {
	int a = 10;
	printf("%d",a++); // 先用后加
	printf("%d", ++a);// 先加后用
}
*/

// &&与||
/*
int mains() {

	int a = 3;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
}
int main() {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	// 当&&其中一个判断出现了false或0,则直接返回false,跳过后面的条件判断
	// 当||其中一个判断出现了true或非0，则直接返回true,跳过后面的条件判断
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1 2 3 4
	printf(" i = %d\n", i);

}

*/

// 条件操作符 exp1 ？ exp2 ：exp3
/*
int main() {

	int a = 5;
	int b = 0;
	// b = a > 3 ? 3 : -3;等同于ifelse
	if (a > 5)
		b = 3;
	else
		b = -3;

	b = a > 3 ? 3 : -3;
}
*/

// 逗号表达式
/*
int main() {
	int a = 10;
	int b = 5;
	int c = 0;
	// 方式一
	c = (c ++, c=c + b, c=c + a);
	printf("%d", c);
	// 方式二
	if (a = b + 1, c = a / 2, b > 0)
		return 0;
	// 方式三
	while (a = get_val(), coun_val(a), a > 0) {};
}

*/

// 下标引用操作符[] 操作数：数组名+索引值
/*

int main() {
	int a[10] = { 0 };
	a[4] = 10;
}
*/

//结构体成员及访问结构体成员变量
/*
struct Stu {
	// 成员变量
	char name[20];
	int age;
	char id[20];
};


int main() {
	// 初始化学生对象 类似于Java的初始化对象
	struct Stu s1 = { "张三",20,"201812548" };
	struct Stu* p = &s1;

	printf("%s\n", s1.name);
	printf("%s\n", (*p).name);
	printf("%s\n", p->name);
}

*/
// 隐式类型提升
/*
	整型提升 高位 补充符号位 即八位比特位的第一位
	*/

