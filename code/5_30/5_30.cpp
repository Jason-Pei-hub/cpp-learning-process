#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Cube
{
public:

};











////��Ա��������Ϊ˽��
////�����Լ����ƶ�д��Ȩ��
////����д���Լ�����ݵ���Ч��
//
////����
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
//	string m_name;//�ɶ���д
//
//	string m_age = "18";//ֻ��
//
//	string m_idol;//ֻд
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("����");
//	cout << p1.getName() << endl;
//}
//
//



////struct��class������
////struct��class��������Ҫ����Ĭ�ϵķ���Ȩ�޲�ͬ
////structĬ�ϵķ���Ȩ����public��classĬ�ϵķ���Ȩ����private
//class C1
//{
//	int m_A;//Ĭ��Ȩ��˽��
//};
//
//struct C2
//{
//	int m_B;//Ĭ��Ȩ�޹���
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










////���ַ���Ȩ��
////����Ȩ�� public�� ��Ա�����ڿ��Է��ʣ�����Ҳ���Է���
////����Ȩ�� protected��   ��Ա�����ں������п��Է��ʣ����ⲻ�ܷ���
////˽��Ȩ�� private��  ��Ա�����ڿ��Է��ʣ����ⲻ�ܷ��ʣ�����Ҳ�����Է���
//class Person
//{
//public:
//	//����Ȩ��
//	string name;
//
//protected:
//	//����Ȩ��
//	string car;
//
//private:
//	//˽��Ȩ��
//	string passward;
//
//public:
//	void func()
//	{
//		name = "����";
//		car = "����";
//		passward = "123456";
//	}
//};
//
//int main()
//{
//	Person p1;
//	Person p1;
//
//	p1.name = "����";
//	//p1.car = "����";//����Ȩ�����ݣ�������ʲ���
//	//p1.passward = "123456";//˽��Ȩ�����ݣ�������ʲ���
//	p1.func();
//	return 0;
//}


//const double PI = 3.14159265358979323846;
////��Ͷ���
////��װ���̳С���̬
//
//class Student
//{
//public:
//	string name;
//	string id;
//
//	void Info()
//	{
//		cout << "������ѧ������:";
//		cin >> name;
//		cout << "������ѧ��ѧ��:";
//		cin >> id;
//	}
//	void show()
//	{
//		cout<<"ѧ��������"<<name<<endl;
//		cout << "ѧ��ѧ�ţ�" << id << endl;
//	}
//};
//
//
//




//
//
////���һ��Բ�࣬��Բ���ܳ�
////Բ���ܳ���ʽ��2*PI*r
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	//�뾶
//	int m_r;
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2*PI*m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��ԭ�ഴ�����
//	Circle c1;
//	//��Բ������и�ֵ����
//	c1.m_r = 10;
//
//	cout<<"Բ���ܳ�Ϊ��"<<c1.calculateZC()<<endl;
//
//	Student s1;
//	s1.Info();
//	s1.show();
//
//	return 0;
//}