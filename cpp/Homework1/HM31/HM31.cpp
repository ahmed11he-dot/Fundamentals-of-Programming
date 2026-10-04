
#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber()
{
    float Number;

    cout << "please enter a Number:\n";
    cin >> Number;

    return Number;
}

float ClculatePowerOf2(float Number)
{
    float a;
    a = Number * Number;
    return a;
}
float ClculatePowerOf3(float Number)
{
    float b;
    b = Number * Number * Number;
    return b;
}
float ClculatePowerOf4(float Number)
{
    float c;
    c = Number * Number * Number * Number;
    return c;
}


void PrintPowersOfNum(float Number)
{
  
    cout << "Number^2=" << ClculatePowerOf2(Number) << endl;
    cout << "Number^3=" << ClculatePowerOf3(Number) << "\n";
    cout << "Number^4=" << ClculatePowerOf4(Number) << endl;
}

int main()
{

    PrintPowersOfNum(ReadNumber());

    return 0;
}


///////////////////////////////// another solution ///////////

/*
float ReadNumber()
{
    float Number;

    cout << "please enter a Number:\n";
    cin >> Number;

    return Number;
}

void PrintPowersOfNum(float Number)
{
    float a,b,c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;

    cout << "Number^2=" << a<<endl;
    cout << "Number^3=" << b<<endl;
    cout << "Number^4=" << c<<endl;
}
int main()
{
    PrintPowersOfNum(ReadNumber());
    
    return 0;
}


*/