#pragma once
#include <istream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>

using namespace std;

#define MAX 1000



struct man
{
	string name;
	string sex;
	int age;
	string tele;
	string addr;
};

struct book
{
	man person[MAX];
	int size;
};


int start();
void add(book* abs);
void show(book* abs);
