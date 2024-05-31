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
		cout << "点的坐标为(" << x << "," << y << ")" << endl;
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
//	//属性
//	int a;
//	int b;
//	int h;
//public:
//	//行为
//	//获取长宽高
//	void setSize()
//	{
//		cout << "请输入长方体的长";
//		cin >> a ;
//
//		cout << "请输入长方体的宽";
//		cin >> b;
//
//		cout << "请输入长方体的高";
//		cin >> h;
//	}
//
//	void getArea()
//	{
//		int area = 2 * (a * b + b * h + a * h);
//		cout << "长方体的面积为：" << area << endl;
//	}
//
//	void getVolume()
//	{
//		int volume = a * b * h;
//		cout << "长方体的体积为：" << volume << endl;
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
//		cout<<"长方体的长为："<<a<<endl;
//		cout<<"长方体的宽为："<<b<<endl;
//		cout<<"长方体的高为："<<h<<endl;
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
//		cout << "两个长方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个长方体不相等" << endl;
//	}
//
//	if(C1.issamebyclass(C2))
//	cout<<"两个长方体相等"<<endl;
//	else
//	cout<<"两个长方体不相等"<<endl;
//	
//	return 0;
//}