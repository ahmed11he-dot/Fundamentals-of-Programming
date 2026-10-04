#include<iostream>
#include "Person.h"
using namespace std;
Person::Person():name("un known"), nationalid(0), age(0)
{
}
Person::Person(string n, int nid, int a)
{
	 name=n;
	  nationalid=nid;
	 age=a;
}
void Person::set_name(string n)
{
	 name=n;
}
string Person::get_name()
{
	return name;
}
void Person::set_nationalid(int nid)
{
	nationalid=nid;
}
int Person::get_nationalid()
{
	return nationalid;
}
void Person::set_age(int a)
{
	 age=a;
}
int Person::get_age()
{
	return age;
}
void Person::Print()
{
	cout << "name:" << name<<endl;
	cout << "ID:" << nationalid << endl;
	cout << "age:" << age << endl;
}

