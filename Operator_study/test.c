#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ���������� + - * / %
// 1 ��%������֮�⣬������������������������͸�����
// 2 ���� / ���������������������Ϊ����,��ִ���������� ��ֻ�г��ָ�����ʱ��ִ�и���������
// 3 %����������������������Ϊ���������ص�������֮�������
//int main() {
//	double a = 5 % 2;
//	printf("A = %lf\n", a);
//	return 0;
//}

//  ��λ������ >> <<
//  1 �ƶ�������λ
//  2 ��Ҫ�ƶ�����

// ���� a,b�����Ҳ�ͨ����ʱ����
/*
int main() {
	int a = 3;
	int b = 5;
	// �Ӽ��� -- �������
	a = a + b;
	b = a - b;
	a = a - b;
	// ��򷽷� -- ִ��Ч�ʲ����ҿɶ��Բ�
	a = a ^ b;
	b = b ^ a;
	a = b ^ a;
 	//a = ;
	printf("a = %d,b = %d", a, b);
}
*/
/*
// ������ֵ�������ж��ٸ�1
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
	

	
	 �޷��������Ϊ����������
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
		& ͬΪ1��Ϊ1����ͬ��Ϊ0
		* ͬΪ0��Ϊ0����ͬ��Ϊ1
		<< ���ƶ�
		>> ���ƶ�
		~��λȡ��
	//
}  
*/

// ����sizeof��ʹ��
/*
int main() {
	short x = 0;
	int a = 10;

	printf("%d\n",sizeof(x = a + 1));// sizeof�еĸ�ֵ������Ч��sizeof�鿴����X��Ҳ����short���Ĵ�С

	printf("%d\n", x);

}
����sizeof�������ʹ��
void test1(int arr[]) {
	// arr ����ʱ����ָ����ʽ��������sizeof�������ָ���С,ָ���СĬ��Ϊ4��8
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

// ++ -- ��ǰ��������
/*
int main() {
	int a = 10;
	printf("%d",a++); // ���ú��
	printf("%d", ++a);// �ȼӺ���
}
*/

// &&��||
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
	// ��&&����һ���жϳ�����false��0,��ֱ�ӷ���false,��������������ж�
	// ��||����һ���жϳ�����true���0����ֱ�ӷ���true,��������������ж�
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1 2 3 4
	printf(" i = %d\n", i);

}

*/

// ���������� exp1 �� exp2 ��exp3
/*
int main() {

	int a = 5;
	int b = 0;
	// b = a > 3 ? 3 : -3;��ͬ��ifelse
	if (a > 5)
		b = 3;
	else
		b = -3;

	b = a > 3 ? 3 : -3;
}
*/

// ���ű��ʽ
/*
int main() {
	int a = 10;
	int b = 5;
	int c = 0;
	// ��ʽһ
	c = (c ++, c=c + b, c=c + a);
	printf("%d", c);
	// ��ʽ��
	if (a = b + 1, c = a / 2, b > 0)
		return 0;
	// ��ʽ��
	while (a = get_val(), coun_val(a), a > 0) {};
}

*/

// �±����ò�����[] ��������������+����ֵ
/*

int main() {
	int a[10] = { 0 };
	a[4] = 10;
}
*/

//�ṹ���Ա�����ʽṹ���Ա����
/*
struct Stu {
	// ��Ա����
	char name[20];
	int age;
	char id[20];
};


int main() {
	// ��ʼ��ѧ������ ������Java�ĳ�ʼ������
	struct Stu s1 = { "����",20,"201812548" };
	struct Stu* p = &s1;

	printf("%s\n", s1.name);
	printf("%s\n", (*p).name);
	printf("%s\n", p->name);
}

*/
// ��ʽ��������
/*
	�������� ��λ �������λ ����λ����λ�ĵ�һλ
	*/

