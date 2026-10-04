
#include <iostream>
#include <cmath>
using namespace std;
// l=محيط الدائره

float Read()
{
    float l;

    cout << "please enter l:" << endl;
    cin >> l;

    return l;

}


float CalculateCircle_Area(float l)
{

    const float pi = 3.14;

   
    float Result = pow(l, 2) / (4 * pi);
    return  Result;
}

void PrintCircleArea(float Result)
{
    cout << "\nCircle Area=" << Result<<endl;

}


int main()
{
    
    PrintCircleArea(CalculateCircle_Area(Read()));
  
    return 0;
}


