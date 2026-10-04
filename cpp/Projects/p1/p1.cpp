
#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
    string Name;
    int Age;
    string City;
    string Country;
    int Monthly_Salary;
    char Gender;
    bool Married;

};
void ReadInfo(strInfo &Info)
{
    cout << "please enter Name:\n";
    cin.ignore(1, '\n');
    getline(cin,Info.Name);
    cout << "please enter Age:\n";
    cin >> Info.Age;
    cout << "please enter City:\n";
    cin >> Info.City;
    cout << "please enter Country:\n";
    cin >> Info.Country;
    cout << "please enter Monthly Salary:\n";
    cin >> Info.Monthly_Salary;
    cout << "please enter Gender:\n";
    cin >> Info.Gender;
    cout << "please enter Married:\n";
    cin >> Info.Married;

}
void PrintInfo(strInfo Info)
{
    cout << "*************************"<<endl;
    cout << "Name:" << Info.Name<<endl;
    cout << "Age:" << Info.Age<<endl;
    cout << "City:" << Info.City<<endl;
    cout << "Country:" << Info.Country<<endl;
    cout << "Monthly Salary:" << Info.Monthly_Salary<<endl;
    cout << "yearly Salary:" << Info.Monthly_Salary*12 << endl;
    cout << "Gender:" << Info.Gender<<endl;
    cout << "Married:" << Info.Married<<endl;
    cout << "*************************" << endl;

}

int main()
{
    strInfo person1;
    ReadInfo(person1);
    PrintInfo(person1);

    return 0;
}

