#define _CRT_SECURE_NO_WARNINGS 1
#include "com.h"

int start()
{
	int flag = 0;
	cout << "**************************************************\n";
	cout << "*******************1.添加联系人*******************\n";
	cout << "*******************2.显示联系人*******************\n";
	cout << "*******************3.删除联系人*******************\n";
	cout << "*******************4.查找联系人*******************\n";
	cout << "*******************5.修改联系人*******************\n";
	cout << "*******************6.清空联系人*******************\n";
	cout << "*******************0.退出通讯录*******************\n";
	cout << "**************************************************\n";
	cout << "请输入操作编号->";
	cin >> flag;
	return flag;
}

void add(book* abs)
{
	if (abs->size >= MAX)
	{
		cout << "通讯录已满无法添加";
		return;
	}
	else
	{
		cout << "添加联系人" << endl;
		cout << "请输入联系人姓名：";
		cin >> abs->person[abs->size].name;
		cout << endl;
		cout << "请输入性别：" ;
		cin >> abs->person[abs->size].sex;
		cout << endl;
		cout << "请输入年龄：";
		cin >> abs->person[abs->size].age;
		cout << endl;
		cout << "请输入电话：";
		cin >> abs->person[abs->size].tele;
		cout << endl;
		cout << "请输入地址：";
		cin >> abs->person[abs->size].addr;
		cout << endl;
		abs->size++;
		cout << "添加成功！！！"<< endl;

	}

}

void show(book* abs)
{
	int i = 0;
	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (i = 0; i < abs->size; i++)
		{
			cout << "姓名：" << abs->person[i].name << "\t";
			cout << "性别：" << abs->person[i].sex << "\t";
			cout << "年龄：" << abs->person[i].age << "\t";
			cout << "电话：" << abs->person[i].tele << "\t";
			cout << "住址：" << abs->person[i].addr << endl;
		}

		system("pause");
		system("cls");
	}
	
}