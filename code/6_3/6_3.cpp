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
	//��ͨ���캯��
	Person()
	{
		cout<<"���캯���ĵ���"<<endl;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}
};

void test01()
{
	//���ŷ�
	//Person p1;
	//Person p2(10);//�вι��캯���ĵ���
	//Person p3(p2);

	//cout << "P2������Ϊ��"<< p2.age << endl;
	//cout << "P3������Ϊ��"<< p3.age << endl;

	//ע������
	// ����Ĭ�Ϲ��캯��ʱ����Ҫ�����ţ��������ÿ������캯��
	// ����������Ϊ�Ǻ���������
	
	//��ʾ��
	/*Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);*/

	//Person(10);//�������� ��ǰ�н���ʱ�Զ�������������	
	
	//��Ҫ���ÿ���������ʼ���������󣬷������ÿ������캯��

	//��ʽת����
	Person p1 = 10; //��ʽת��ΪPerson(10)
	Person p2 = p1; //���ÿ������캯��
};

int main()
{
	test01();

	system("pause");
	return 0;
}