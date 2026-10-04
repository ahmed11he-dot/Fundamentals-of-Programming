
#include <iostream>
using namespace std;
class myinformation
{
private:
	int Age;
	float height;
	float weight;
	string gender;
	string major;
	string marriage;

public:
	void setage(int A)
	{
		Age = A;
	}
	void setheight(float h)
	{
		height = h;

	}
	void setweight(float w)
	{
		weight = w;

	}
	void setgender(string g)
	{
		gender = g;

	}
	void setmajor(string maj)
	{
		major = maj;

	}
	void setmarriage(string m)
	{
		marriage = m;

	}
	int getage()
	{
		return Age;
	}
	float getheight()
	{
		return height;
	}
	float getweight()
	{
		return weight;
}
	string getgender()
	{
		return gender;
	}
	string getmajor()
	{
		return major;
	}
	string getmarriage()
	{
		return marriage;
	}
	void print()
	{
		cout << "Age:" << getage()<<endl;
		cout << "height:" << getheight()<<endl;
		cout << "weight:" << getweight()<<endl;
		cout << "gender:" << getgender()<<endl;
		cout << "major:" << getmajor() << endl;
		cout << "marriage:" << getmarriage() << endl;
	}
};


int main()
{
	myinformation info;
	info.setage(19);
	info.setheight(1.70);
	info.setweight(70);
	info.setgender("male");
	info.setmajor("Electrical engineering");
	info.setmarriage("single");
	info.print();
}

