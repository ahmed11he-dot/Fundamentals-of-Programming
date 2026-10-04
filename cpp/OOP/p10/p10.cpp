#include<iostream>
#include"Courses.h"
using namespace std;
int main()
{
	Courses t1("Ahmed", 2025, 19, "Electrical Engineering", 2.8, 5);
	t1.Print();
	t1.set_age(20);
	t1.Print();
	/*
	t1.set_age(19);
	t1.set_name("Ahmed");
	t1.set_nationalid(152622);
	t1.Print();
	
	t1.set_major("Electrical Engineering");
	t1.set_Gpa(2.4);
	t1.printstu();
	t1.set_Numofcourses(5);
	t1.printnumoscourses();
	*/
	
}