#pragma once
#include "Student.h"
#include<iostream>
using namespace std;
class Courses :public Student
{
private:
	int Numberofcourses;
public:
	Courses(string n, int nid, int a, string ma, float Gp,int Noc):Student(n,nid,a,ma,Gp)
	{
		Numberofcourses =Noc;
	}
	void set_Numofcourses(int n)
	{
		Numberofcourses = n;
	}
	int get_Num()
	{
		
		return Numberofcourses;
	}
	void Print()
	{
		Student::Print();
		cout << "Number of courses:" << Numberofcourses << endl;
	 }

};

