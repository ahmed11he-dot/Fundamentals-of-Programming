#pragma once
#include<string>
using namespace std;
class Car
{
private:
	int model;
	string type;
	string color;
	static int count;

public:
	
	void setmodel(int m);
	int getmodel();
	void settype(string t);
	string gettype();
	void setcolor(string c);
	string getcolor();
	 int getcount();
	

	Car(int m,string t,string c);
	Car();
	~Car();
};

