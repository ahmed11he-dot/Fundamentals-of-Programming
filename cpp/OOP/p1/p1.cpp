
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Ahmed
{
private:
	char name[20];
	int age;
	string major;
	char type[10];


public:
	void setname(const char n[] )
	{
		strcpy_s(name, n);

	}
	void setage(int ag)
	{
		age = ag;

	}
	void setmajor(string maj)
	{
		major = maj;

	}
	void settype(const char typ[])
	{
		strcpy_s(type, typ);
		
	}
	char* getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}

	string getmajor()
	{

		return major;
	}
	char* gettype()
	{
		return type;
	}
	void print()
	{
		cout << "Name: " << getname() << endl;
		cout << "Age:" << getage() << endl;
		cout << "Major:" << getmajor() << endl;
		cout << "Type:" << gettype() << endl;
	}
};



int main()
{
	Ahmed info;
	info.setname("Ahmed");
	info.setage(19);
	info.setmajor("Electeical engineering");
	info.settype("male");
	//cout<<info.getage();
	info.print();
    return 0;
}


