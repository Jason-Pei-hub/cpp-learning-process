#define _CRT_SECURE_NO_WARNINGS 1
#include "com.h"

int start()
{
	int flag = 0;
	cout << "**************************************************\n";
	cout << "*******************1.�����ϵ��*******************\n";
	cout << "*******************2.��ʾ��ϵ��*******************\n";
	cout << "*******************3.ɾ����ϵ��*******************\n";
	cout << "*******************4.������ϵ��*******************\n";
	cout << "*******************5.�޸���ϵ��*******************\n";
	cout << "*******************6.�����ϵ��*******************\n";
	cout << "*******************0.�˳�ͨѶ¼*******************\n";
	cout << "**************************************************\n";
	cout << "������������->";
	cin >> flag;
	return flag;
}

void add(book* abs)
{
	if (abs->size >= MAX)
	{
		cout << "ͨѶ¼�����޷����";
		return;
	}
	else
	{
		cout << "�����ϵ��" << endl;
		cout << "��������ϵ��������";
		cin >> abs->person[abs->size].name;
		cout << endl;
		cout << "�������Ա�" ;
		cin >> abs->person[abs->size].sex;
		cout << endl;
		cout << "���������䣺";
		cin >> abs->person[abs->size].age;
		cout << endl;
		cout << "������绰��";
		cin >> abs->person[abs->size].tele;
		cout << endl;
		cout << "�������ַ��";
		cin >> abs->person[abs->size].addr;
		cout << endl;
		abs->size++;
		cout << "��ӳɹ�������"<< endl;

	}

}

void show(book* abs)
{
	int i = 0;
	if (abs->size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (i = 0; i < abs->size; i++)
		{
			cout << "������" << abs->person[i].name << "\t";
			cout << "�Ա�" << abs->person[i].sex << "\t";
			cout << "���䣺" << abs->person[i].age << "\t";
			cout << "�绰��" << abs->person[i].tele << "\t";
			cout << "סַ��" << abs->person[i].addr << endl;
		}

		system("pause");
		system("cls");
	}
	
}