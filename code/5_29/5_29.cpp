#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//����������Ҫ��������ͬһ����������
void func()
{
	cout << "func �ĵ��ã�" << endl;
}
void func(int a)
{
	cout << "func (int a) �ĵ��ã�" << endl;
}
void func(double a)
{
	cout << "func (double a)�ĵ��ã�" << endl;
}
void func(int a, double b)
{
	cout << "func (int a ,double b) �ĵ��ã�" << endl;
}
void func(double a, int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}

//��������ֵ��������Ϊ������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}


int main() {

	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");

	return 0;
}

//�ں��������ͺ���ʵ����ֻ����һ�������壬�����ж�������壬����ᱨ��
//int func(int a = 0, int b = 0, int c = 0);
//
//int func(int a, int b, int c)
//{
//	return a + b + c;
// }
//
//int main()
//{
//	int a = 10;
//	int b = 20;	
//	cout << "a + b + c = " << func(a, b) << endl;
//	return 0;
//}

////���������ã�ת��Ϊ int* const ref = &a;
//void func(int& ref) {
//	ref = 100; // ref�����ã�ת��Ϊ*ref = 100
//}
//int main() {
//	int a = 10;
//
//	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
//	int& ref = a;
//	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;
//
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//
//	func(a);
//	return 0;
//}






////���ؾֲ���������
//int& test01() {
//	int a = 10; //�ֲ�����
//	return a;
//}
//
////���ؾ�̬��������
//int& test02() {
//	static int a = 20;
//	return a;
//}
//
//int main() {
//
//	//���ܷ��ؾֲ�����������
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	//�����������ֵ����ô���뷵������
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;
//
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	system("pause");
//
//	return 0;
//}














//
////1. ֵ����
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2. ��ַ����
//void mySwap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3. ���ô���
//void mySwap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	mySwap01(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap02(&a, &b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap03(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	system("pause");
//
//	return 0;
//}