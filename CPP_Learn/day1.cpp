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
				cout << "ɾ����ϵ��" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cout << "������ϵ��" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 5:
				cout << "�޸���ϵ��" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;
			case 6:
				cout << "�����ϵ��" << endl;
				cout << endl;
				system("pause");
				system("cls");
				break;

		}
	}
	system("pause");

	return 0;
}