
#include <iostream>
using namespace std;
void Read(int Arr[5])
{
    
    cout << "please enter pennies:\n";
    cin >> Arr[0];
    cout << "please enter Nickels:" << endl;
    cin >> Arr[1];
    cout << "please enter  Dimes:\n";
    cin >> Arr[2];
    cout << "please enter Quarters:" << endl;
    cin >> Arr[3];
    cout << "please enter  Dollars:\n";
    cin >> Arr[4];

}
int CalculateTotalPennies(int Arr[5])
{
 return Arr[0] + Arr[1] * 5 + Arr[2] * 10 + Arr[3] * 25 + Arr[4] * 100;

}
void Print(int Arr[5])
{
    cout << "Total Pennies=" << CalculateTotalPennies(Arr) << endl;
    cout << "Total Dollars=" << (float)CalculateTotalPennies(Arr) / 100 << endl;

}
int main()
{
    int Arr[5];
    Read(Arr);
    Print(Arr);

    return 0;
}

