#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	//���û����﷨
	//�������� & ������ = ������;

	int a = 10;
	//�������ñ���b��ָ��a
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
//	//int &c; //�������ñ����ʼ��
//	int& c = a; //һ����ʼ���󣬾Ͳ����Ը���
//	c = b; //���Ǹ�ֵ���������Ǹ�������
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
//	//�ڶ���������������
//	//new���ص���ָ������ݵ�ָ��
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
//	//�����������ɳ���Ա�����ͷ�
//	//������ͷŶ��������ݣ�����ʹ��delete�ͷ�ָ��ָ����ڴ�
//	delete p;
//	//cout << *p << endl;�Ƿ��������ڴ��Ѿ����ͷ�
//}
//
//void test02()
//{
//	//����10�����ͱ��������飬�洢�ڶ���
//	int* p = new int[10]; //����10��int�ͱ������ڴ�
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i; //��ʼ������Ԫ��
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p[i] << endl; //�������Ԫ��
//	}
//	//�ͷŶ������ڴ�
//	//�ͷ�����ռ�ʱ��Ҫ����������
//	delete[] p;
//}
//int main()
//{
//	test02();
//	return 0;
//}