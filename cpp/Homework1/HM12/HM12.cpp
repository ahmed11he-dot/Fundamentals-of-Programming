
#include <iostream>
using namespace std;

void ReadNumbers(int Arr[2])
{
    cout << "Please enter Num1:\n";
    cin >> Arr[0];
    cout << "Please enter Num2:\n";
    cin >> Arr[1];
    while (Arr[0] == Arr[1])
    {
        cout << "please enter different Numbers\n ";
        cout << "Please enter Num1 again:\n";
        cin >> Arr[0];
        cout << "Please enter Num2 again:\n";
        cin >> Arr[1];
    }
    
}
int Check(int Arr[2])
{
    if (Arr[0] > Arr[1])
    
        return Arr[0];
    
    else 
        return Arr[1];
    
}
void Print(int Result)
{
    cout << "The Maxmium number is "<< Result<<endl;
    
}

int main()
{
    int Arr[2];
    ReadNumbers(Arr);
    Print(Check(Arr));

    return 0;
}


