
#include<iostream>
#include<string>

using namespace std;

enum Gender  { Male=2,Female=3 };
enum Married { Wedded=5, Single };
enum MyFavouriteColor { Green, Blue, Red, Black, gray };

int main()
{
	Gender Sex;
	Married Husband;
	MyFavouriteColor Color;
	string Name, City, Country;
	int Age, MonthlySalary;

	cout << "please enter Name:\n";
	getline(cin,Name);
	cout << "please enter Age :\n";
	cin >> Age;
	cin.ignore();
	cout << "please enter City :\n";
	getline(cin,City);
	cout << "please enter Contry :\n";
	cin >>Country;
	cout << "please enter MonthlySalary :\n";
	cin >>MonthlySalary;
	
	Sex = Gender::Male;
	Husband = Married::Single;
	Color = MyFavouriteColor::Black;
	
	cout << "********************************" << endl;
	cout << "Name:" <<Name << endl;
	cout << "Age:" <<Age << " years Old." << endl;
	cout << "City:" <<City << endl;
	cout << "Country:" <<Country << endl;
	cout << "Monthly Salary:" << MonthlySalary << " EGP" << endl;
	cout << "Yearly Salary:" <<MonthlySalary * 12 << " EGP" << endl;
	cout << "Gender:" << Sex << endl;
	cout << "Married:" << Husband << endl;
	cout << "My Favourite Color:" <<Color<< endl;
	cout << "********************************" << endl;

	return 0;
}