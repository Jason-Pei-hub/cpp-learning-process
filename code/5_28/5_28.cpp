#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	//引用基本语法
	//数据类型 & 变量名 = 变量名;

	int a = 10;
	//创建引用变量b并指向a
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}

//int main() {
//
//	int a = 10;
//	int b = 20;
//	//int &c; //错误，引用必须初始化
//	int& c = a; //一旦初始化后，就不可以更改
//	c = b; //这是赋值操作，不是更改引用
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//int* func()
//{
//	//在堆区创建整型数据
//	//new返回的是指向该数据的指针
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据由程序员管理释放
//	//如果想释放堆区的数据，可以使用delete释放指针指向的内存
//	delete p;
//	//cout << *p << endl;非法操作，内存已经被释放
//}
//
//void test02()
//{
//	//创建10个整型变量的数组，存储在堆区
//	int* p = new int[10]; //分配10个int型变量的内存
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i; //初始化数组元素
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p[i] << endl; //输出数组元素
//	}
//	//释放堆区的内存
//	//释放数组空间时需要加上中括号
//	delete[] p;
//}
//int main()
//{
//	test02();
//	return 0;
//}