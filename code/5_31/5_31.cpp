#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	void setXY(int a, int b)
	{
		x = a;
		y = b;
	}

	void getXY()
	{
		cout << "�������Ϊ(" << x << "," << y << ")" << endl;
	}

	int getx()
	{
		return x;
	}

	int gety() 
	{
		return y;
	}

};

class Circle
{
private:
	Point center;
	int radius;

public:
	void setCenter(Point c)
	{
		center = c;
	}
	void setRadius(int r)
	{
		radius = r;
	}
	void isincenter(Circle& c, Point& p)
	{
		int distance = (p.getx() - center.getx()) * (p.getx() - center.getx()) + (p.gety() - center.gety()) * (p.gety() - center.gety());
	}
};













//
//class Cube
//{
//private:
//	//����
//	int a;
//	int b;
//	int h;
//public:
//	//��Ϊ
//	//��ȡ�����
//	void setSize()
//	{
//		cout << "�����볤����ĳ�";
//		cin >> a ;
//
//		cout << "�����볤����Ŀ�";
//		cin >> b;
//
//		cout << "�����볤����ĸ�";
//		cin >> h;
//	}
//
//	void getArea()
//	{
//		int area = 2 * (a * b + b * h + a * h);
//		cout << "����������Ϊ��" << area << endl;
//	}
//
//	void getVolume()
//	{
//		int volume = a * b * h;
//		cout << "����������Ϊ��" << volume << endl;
//	}
//	
//	int geta()
//	{
//		return a;
//	}
//
//	int getb()
//	{
//		return b;	
//	}
//
//	int geth()
//	{
//		return h;
//	}
//
//	void getVal()
//	{
//		cout<<"������ĳ�Ϊ��"<<a<<endl;
//		cout<<"������Ŀ�Ϊ��"<<b<<endl;
//		cout<<"������ĸ�Ϊ��"<<h<<endl;
//	}
//
//	bool issamebyclass(Cube &c)
//	{
//		if (a == c.geta() && b == c.getb() && h == c.geth())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//bool issame(Cube &c1, Cube &c2)
//{
//	if (c1.geta() == c2.geta() && c1.getb() == c2.getb() && c1.geth() == c2.geth())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	Cube C1;
//	Cube C2;
//
//	C1.setSize();
//	C2.setSize();
//
//	C1.getArea();
//	C1.getVolume();
//	C1.getVal();
//
//	C2.getArea();
//	C2.getVolume();
//	C2.getVal();
//
//	if (issame(C1, C2))
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻���" << endl;
//	}
//
//	if(C1.issamebyclass(C2))
//	cout<<"�������������"<<endl;
//	else
//	cout<<"���������岻���"<<endl;
//	
//	return 0;
//}