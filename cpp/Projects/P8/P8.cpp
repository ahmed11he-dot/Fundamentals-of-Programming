
#include <iostream>
using namespace std;

 struct strinfo
 {
     string FirstName;
     string LastName;
     int Age;
     int Phone;
 };

 void Readinfo(strinfo& info)
 {
     cout << "please enter first name:\n";
     cin >> info.FirstName;
     cout << "please enter last name:\n";
     cin >> info.LastName;
     cout << "please enter Age:\n";
     cin >> info.Age;
     cout << "please enter phone:\n";
     cin >> info.Phone;
 }
 void Printinfo(strinfo info)
 {
     cout << "*************************"<<endl;
     cout << "First Name:" << info.FirstName<<endl;
     cout << "Last Name:" << info.LastName<<endl;
     cout << "Age:" << info.Age<<endl;
     cout << "Phone:" << info.Phone<<endl;
     cout << "*************************" << endl;
 }
 void ReadPersonsinfo(strinfo Persons[100], int& PersonsNum)
 {
     cout << "How many persons you want to enter ?\n";
     cin >> PersonsNum;

     for (int i = 0; i<= PersonsNum -1; i++)
     {
        
         cout << "please enter number " << i+1 << " info" << endl;
         Readinfo(Persons[i]);
     }

 }
 void PrintPersonsinfo(strinfo Persons[100], int PersonsNum)
 {
     for (int i = 0; i <= PersonsNum - 1; i++)
     {
         Printinfo(Persons[i]);
     }

 }

 int main()
 {
     strinfo Persons[100];
     int PersonsNum = 1;
     ReadPersonsinfo(Persons, PersonsNum);
     PrintPersonsinfo(Persons, PersonsNum);
     return 0;
 }




    

