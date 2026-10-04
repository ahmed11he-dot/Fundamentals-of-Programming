
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Messege)
{
    int Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;
        if (Number == 6232)
        {
            break;
        }
        system("color 4F");
        cout << "Wrong password\n";
       
    } while (Number != 6232);

    return Number;

}
int main()
{
    int PINCode = ReadPositiveNumber("please enter Atm PIN Code:");

    if (PINCode == 6232)
    {
        system("color 2F");
        cout << "Corrrect pasword\n";
    }
        
    
    return 0;
}

