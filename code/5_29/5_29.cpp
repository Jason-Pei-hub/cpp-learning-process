#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//函数重载需要函数都在同一个作用域下
void func()
{
	cout << "func 的调用！" << endl;
}
void func(int a)
{
	cout << "func (int a) 的调用！" << endl;
}
void func(double a)
{
	cout << "func (double a)的调用！" << endl;
}
void func(int a, double b)
{
	cout << "func (int a ,double b) 的调用！" << endl;
}
void func(double a, int b)
{
	cout << "func (double a ,int b)的调用！" << endl;
}

//函数返回值不可以作为函数重载条件
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
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

//在函数声明和函数实现中只能有一个函数体，不能有多个函数体，否则会报错
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

////发现是引用，转换为 int* const ref = &a;
//void func(int& ref) {
//	ref = 100; // ref是引用，转换为*ref = 100
//}
//int main() {
//	int a = 10;
//
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref = a;
//	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
//
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//
//	func(a);
//	return 0;
//}






////返回局部变量引用
//int& test01() {
//	int a = 10; //局部变量
//	return a;
//}
//
////返回静态变量引用
//int& test02() {
//	static int a = 20;
//	return a;
//}
//
//int main() {
//
//	//不能返回局部变量的引用
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	//如果函数做左值，那么必须返回引用
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
////1. 值传递
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2. 地址传递
//void mySwap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3. 引用传递
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