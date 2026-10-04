
#include <iostream>
using namespace std;

void Read(int& Num, int& Power)
{
    cout << "please enter a number:\n";
    cin >> Num;
    cout << "please enter a power:\n";
    cin >> Power;

}
int NumOfPower(int Num, int Power)
{
    if (Power == 0)
    {
        return 1;
    }
    
    
        int i = 0;
        int powerr=1;
        while (i < Power)
        {

            powerr *= Num;
            i++;
            
        }
        return powerr;
        
    

}
void PrintPower(int Num, int Power)
{

    cout << "Number of Powers:" << NumOfPower(Num, Power);
}



int main()
{
    int Num, Power;
    Read(Num, Power);
    PrintPower(Num, Power);
    
    return 0;
}
