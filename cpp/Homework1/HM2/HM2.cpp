
#include <iostream>
using namespace std;

struct strInfor
{
	string FirstName;
	string LastName;

};

strInfor ReadInfo()
{
	strInfor Info;
	cout << "Please enter a first name\n";
	cin >> Info.FirstName;
	cout << "Please enter a last name\n";
	cin >> Info.LastName;
	return Info;
}

string FullName(strInfor Info , bool Reversed)
{
	string full;
	if (Reversed)
		return Info.LastName +" "+ Info.FirstName;
	else
		return Info.FirstName +" "+ Info.LastName;
	return full;
}

void PrintFullName(string full)
{
	cout << "your full Name is " << full;
}

int main()
{
	PrintFullName(FullName(ReadInfo(),false));
	return 0;
}

























































