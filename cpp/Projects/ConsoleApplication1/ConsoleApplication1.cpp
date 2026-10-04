#include<iostream>
using namespace std;

struct strAhmed 
{
	string FristName;
	string LastName;
	int Age;
	string Country;

};
void Readinfo(strAhmed& ff)
{
	cout << "please enter FristName\n";
	cin >> ff.FristName;
	cout << "please enter LastName\n";
	cin >> ff.LastName;
	cout << "please enter Age\n";
	cin >> ff.Age;
	cout << "please enter Country\n";
	cin >> ff.Country;
	cout << "***********************" << endl;
}
void Printinfo(strAhmed ff)
{
	cout << "***********************"<<endl;
	cout <<"Your First Name is: " << ff.FristName<< endl;
	cout << "Your Last Name is: " << ff.LastName<< endl;
	cout << "Your Age is: " << ff.Age<< endl;
	cout << "Your Country is: " << ff.Country<< endl;
	cout << "***********************" << endl;
}

void FinalReed(strAhmed Arr[50],int& PersonsNum)
{
	cout << "please enter persons Num:" << endl;
	cin >> PersonsNum;
	for (int i = 0; i <= PersonsNum - 1; i++)
	{
		cout << "persons " << i + 1 << " info" << endl;
		 Readinfo(Arr [i]);
	}
}

void Finalprint(strAhmed Arr[50], int PersonsNum)
{
	for (int i = 0; i <= PersonsNum - 1; i++)
	{
		cout << "persons " << i + 1 << " info" << endl;
		Printinfo(Arr[i]);
	}
}




int main()
{
	strAhmed Arr[50];
	int PersonsNum=1;
	FinalReed(Arr, PersonsNum);
	Finalprint(Arr, PersonsNum);
	return 0;
}