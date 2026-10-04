
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Messege)
{
    float Number = 0;
    do
    {
        cout << Messege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float CalculateReminder(float Cachpaid, float Totalbill)
{

    return Cachpaid - Totalbill;
    
}



int main()
{

    float Totalbill = ReadPositiveNumber("please enter total bill:");
    float Cachpaid = ReadPositiveNumber("please enter Cachpaid:");

    cout << endl << "Cachpaid= " << Cachpaid<<endl;

    cout << "Totalbill= " << Totalbill << endl;

    cout << endl << "************************\n";
    
    cout << endl << "Remiander= " << CalculateReminder(Cachpaid, Totalbill)<<endl;


    return 0;
}

