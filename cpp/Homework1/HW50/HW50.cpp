
#include <iostream>
using namespace std;

string enterPIN()
{
    string PINCode;
    cout << "please enter Atm PIN Code:\n";
    cin >> PINCode;

    return PINCode;

}

bool check()
{
    string PinCode;
    int Counter = 3;
           do 
           {
            Counter--;
            PinCode = enterPIN();
            if (PinCode == "1234")
            {
                return 1;
            }
            
                system("color 4F");
                cout << "Wrong Code,you have " << Counter << " more tries" << endl;

           } while (Counter >= 1 && PinCode != "1234");

           return 0;
}

int main()
{
    if (check())
    {
        system("color 2F");
        cout << "your balance is " << 7500 << " EP" << endl;
    }
    else
    {
        cout << "Your card blocked, call the bank for help. ";

    }
     
    return 0;
}

