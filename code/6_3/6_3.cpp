#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
public:
	//普通构造函数
	Person()
	{
		cout<<"构造函数的调用"<<endl;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}
};

void test01()
{
	//括号法
	//Person p1;
	//Person p2(10);//有参构造函数的调用
	//Person p3(p2);

	//cout << "P2的年龄为："<< p2.age << endl;
	//cout << "P3的年龄为："<< p3.age << endl;

	//注意事项
	// 调用默认构造函数时，不要加括号，否则会调用拷贝构造函数
	// 编译器会认为是函数的声明
	
	//显示法
	/*Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);*/

	//Person(10);//匿名对象 当前行结束时自动调用析构函数	
	
	//不要利用拷贝函数初始化匿名对象，否则会调用拷贝构造函数

	//隐式转换法
	Person p1 = 10; //隐式转换为Person(10)
	Person p2 = p1; //调用拷贝构造函数
};

int main()
{
	test01();

	system("pause");
	return 0;
}