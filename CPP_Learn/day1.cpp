#define _CRT_SECURE_NO_WARNINGS 1
#include "com.h"



int main() 
{
	book abs;
	abs.size = 0;
	int n;
	while (n = start())
	{
		switch (n)
		{
			case 1:
				add(&abs);
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 2 :
				show(&abs);
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout << "删除联系人" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cout << "查找联系人" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 5:
				cout << "修改联系人" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 6:
				cout << "清除联系人" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;

		}
	}
	system("pause");

	return 0;
}