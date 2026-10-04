
#include <iostream>
using namespace std;
int main()
{
    int totaldays;
    cin >> totaldays;
    int years = totaldays / 365;
    int Reminderdays = totaldays % 365;
    int month = Reminderdays / 30;
    int days = Reminderdays % 30;
    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;

}

