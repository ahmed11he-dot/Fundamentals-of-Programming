
#include<iostream>
#include<string>

using namespace std;


enum enuGender { Male = 2, Female = 3 };
enum enuMarried { Wedded = 5, Single };
enum enuMyFavouriteColor { Green, Blue, Red, Black, gray };

struct stSocial_info
{
	string gmail;
	int phone;
	string name_on_social_media_pages;
};

struct Stadress
{
	string street;
	int number_of_street;
	stSocial_info social;
};

struct stinformation
{
	string Name;
	unsigned short int Age;
	string City;
	string Country;
	int MonthlySalary;
	Stadress adress;
	enuGender Sex;
	enuMarried Married;
	enuMyFavouriteColor Color;

};


int main()
{
	
	stinformation person1;
	cout << "please enter Name:\n";
	getline(cin, person1.Name);
	cout << "please enter Age :\n";
	cin >> person1.Age;
	cin.ignore();
	cout << "please enter City :\n";
	getline(cin, person1.City);
	cout << "please enter Country :\n";
	cin >> person1.Country;
	cout << "please enter MonthlySalary :\n";
	cin >> person1.MonthlySalary;
	cout << "please enter number of Street Adress:\n";
	cin >> person1.adress.number_of_street;
	cin.ignore();
	cout << "please enter Street Adress:\n";
	getline(cin, person1.adress.street);
	cout << "please enter Gmail:\n";
	getline(cin, person1.adress.social.gmail);
	cin.ignore();
	cout << "please enter name on social media pages:\n";
	getline(cin, person1.adress.social.name_on_social_media_pages);
	cout << "please enter phone:\n";
	cin >> person1.adress.social.phone;
	

	person1.Married = enuMarried::Single;
	
	person1.Sex = enuGender::Male;

	person1.Color = enuMyFavouriteColor::gray;


	cout << "********************************" << endl;
	cout << "Name:" << person1.Name << endl;
	cout << "Age:" << person1.Age << " years Old." << endl;
	cout << "City:" << person1.City << endl;
	cout << "Country:" << person1.Country << endl;
	cout << "Monthly Salary:" << person1.MonthlySalary << endl;
	cout << "Yearly Salary:" << person1.MonthlySalary*12  << endl;
	cout << "Gender:" << person1.Sex << endl;
	cout << "Married:" << person1.Married << endl;
	cout << "Adress:"<< person1.adress.number_of_street << person1.adress.street <<endl;
	cout << "Gmail:" << person1.adress.social.gmail << endl;
	cout << "Name on social media pages:" << person1.adress.social.name_on_social_media_pages << endl;
	cout << "phone:" << person1.adress.social.phone << endl;
	cout << "My Favourite Color:" << person1.Color << endl;
	cout << "**********************************\n";

	return 0;
}