
#include <iostream>
using namespace std;
void Read(int& Num1, int& Num2)
{
    cout << "please enter number1:\n";
    cin >> Num1;
    cout << "please enter number2:\n";
    cin >> Num2;
    
}

void Swapping(int& Num1 , int& Num2 )
{
    
int temp = Num1;
    Num1 = Num2;
    Num2 = temp;
   
}
void Print(int Num1, int Num2)
{
    cout << "Num1,Num2 :" << Num1 << "," << Num2 << endl;

}


int main()
{
    int Num1, Num2;
    Read(Num1, Num2);
    Print(Num1, Num2);
    Swapping(Num1, Num2);
    Print(Num1, Num2);
    return 0;
}

