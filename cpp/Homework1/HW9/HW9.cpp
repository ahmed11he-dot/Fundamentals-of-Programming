
#include <iostream>
using namespace std;

void ReadNumbers(int Arr[3])
{

    cout << "please enter num1:\n";
    cin >> Arr[0];
    cout << "please enter num2:\n";
    cin >> Arr[1];
    cout << "please enter num3:\n";
    cin >> Arr[2];

}
int SumNumbers(int Arr[3])
{
    return Arr[0] + Arr[1] + Arr[2];

}
void PrintSum(int total)
{
    cout << "Sum of Numbers =" << total;

}

int main()
{
    int Arr[3];
    ReadNumbers(Arr);
    PrintSum(SumNumbers(Arr));

    return 0;

}

/////////////////// Another Soluation 1//////////////////////////

/*
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{

    cout << "please enter num1:\n";
    cin >> Num1;
    cout << "please enter num2:\n";
    cin >> Num2;
    cout << "please enter num3:\n";
    cin >> Num3;

}
int SumNumbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;

}
void PrintSum(int Num1, int Num2, int Num3)
{
    cout << "Sum of Numbers =" << SumNumbers(Num1, Num2, Num3);

}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintSum(Num1, Num2, Num3);

    return 0;

}
*/

/////////////////// Another Soluation 2//////////////////////////
/*
#include <iostream>
using namespace std;

struct strNumbers
{
    int Num1, Num2, Num3;
    
};

strNumbers ReadNumb()
{
    strNumbers Info;
    cout << "please enter num1:\n";
    cin >> Info.Num1;
    cout << "please enter num2:\n";
    cin >> Info.Num2;
    cout << "please enter num3:\n";
    cin >> Info.Num3;
    return Info;
}

int SumofNumbers(strNumbers Info)
{

    int total= Info.Num1 + Info.Num2 + Info.Num3;
    return total;
}

void print(int total)
{
    cout << "Sum of Numbers=" <<  total;

}



int main()
{
   
    print(SumofNumbers(ReadNumb()));

    return 0;
}

*/