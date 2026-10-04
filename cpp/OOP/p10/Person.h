#pragma once
#include<string>
using namespace std;
class Person
{
private:
	string name;
	int nationalid;
	int age;
public:
	Person();
	Person(string n, int nid, int a);
	void set_name(string n);
	string get_name();
	void set_nationalid(int nid);
	int get_nationalid();
	void set_age(int a);
	int get_age();
	void Print();
	
};

