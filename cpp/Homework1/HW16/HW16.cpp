
#include <iostream>
#include<cmath>
using namespace std;
/* d = الوتر
a=الطول
*/
void Read(float& a, float& d)
{
    cout << "Please enter a:\n";
    cin >> a;
    cout << "Please enter d:\n";
    cin >> d;
}


float CalculateRectangleArea(float a, float d)
{

    float Result = a * sqrt(pow(d, 2) - pow(a, 2));
    return Result;


}
void PrintRectangleArea(float Result)
{
    cout << "the result of Rectangle Area =" << Result << endl;

}



int main()
{
    /* d = الوتر
   a=الطول
   */
   
    float a, d;

    Read(a, d);
    PrintRectangleArea(CalculateRectangleArea(a, d));
       

    return 0;
}


