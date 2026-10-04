#pragma once
#include "Person.h"
#include<iostream>
#include<string>
using namespace std;
class Student:public Person
{
private:
	string major;
	float GPA;
public:

	Student(string n, int nid, int a, string ma, float Gp) : Person(n,nid,a)
	{
		major = ma;
	     GPA = Gp;
	}
	void set_major(string ma)
	{
		major = ma;
	}
	string get_major()
	{
		return major;
	}
	void set_Gpa(int G)
	{
		GPA = G;
	}
	float get_Gpa()
	{
		return GPA;
	}
	void Print()
	{
		Person::Print();
		cout << "major:" << major << endl;
		cout << "Gpa:" << GPA << endl;

	}
};

