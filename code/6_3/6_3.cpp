#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person()
	{
		cout<<"���캯���ĵ���"<<endl;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
};

void test01()
{
	Person p1;
};

int main()
{
	//test01();
	Person p1;
	system("pause");
	return 0;
}