#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Cube
{
public:

};











////成员属性设置为私有
////可以自己控制读写的权限
////对于写可以检测数据的有效性
//
////人类
//class Person
//{
//public:
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	string getName()
//	{
//		return m_name;
//	}
//
//	string getAge()
//	{
//		return m_age;
//	}
//
//
//
//private:
//	string m_name;//可读可写
//
//	string m_age = "18";//只读
//
//	string m_idol;//只写
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("张三");
//	cout << p1.getName() << endl;
//}
//
//



////struct和class的区别
////struct和class的区别主要在于默认的访问权限不同
////struct默认的访问权限是public，class默认的访问权限是private
//class C1
//{
//	int m_A;//默认权限私有
//};
//
//struct C2
//{
//	int m_B;//默认权限公共
//};
//
//int main()
//{
//	C1 c1;
//	C2 c2;
//
//	c1.m_A = 10;
//	c2.m_B = 20;
//
//}










////三种访问权限
////公共权限 public： 成员在类内可以访问，类外也可以访问
////保护权限 protected：   成员在类内和子类中可以访问，类外不能访问
////私有权限 private：  成员在类内可以访问，类外不能访问，子类也不可以访问
//class Person
//{
//public:
//	//公共权限
//	string name;
//
//protected:
//	//保护权限
//	string car;
//
//private:
//	//私有权限
//	string passward;
//
//public:
//	void func()
//	{
//		name = "张三";
//		car = "宝马";
//		passward = "123456";
//	}
//};
//
//int main()
//{
//	Person p1;
//	Person p1;
//
//	p1.name = "张三";
//	//p1.car = "宝马";//保护权限内容，类外访问不到
//	//p1.passward = "123456";//私有权限内容，类外访问不到
//	p1.func();
//	return 0;
//}


//const double PI = 3.14159265358979323846;
////类和对象
////封装、继承、多态
//
//class Student
//{
//public:
//	string name;
//	string id;
//
//	void Info()
//	{
//		cout << "请输入学生姓名:";
//		cin >> name;
//		cout << "请输入学生学号:";
//		cin >> id;
//	}
//	void show()
//	{
//		cout<<"学生姓名："<<name<<endl;
//		cout << "学生学号：" << id << endl;
//	}
//};
//
//
//




//
//
////设计一个圆类，求圆的周长
////圆的周长公式：2*PI*r
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	//半径
//	int m_r;
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2*PI*m_r;
//	}
//};
//
//int main()
//{
//	//通过原类创造对象
//	Circle c1;
//	//给圆对象进行赋值操作
//	c1.m_r = 10;
//
//	cout<<"圆的周长为："<<c1.calculateZC()<<endl;
//
//	Student s1;
//	s1.Info();
//	s1.show();
//
//	return 0;
//}