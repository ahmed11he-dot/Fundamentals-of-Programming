
#include <iostream>
#include <cmath>
using namespace std;

//المطلوب حساب مساحة دايره تقع داخل مثلث مختلف الاضلاع

void Read(float& A, float& B, float& C)
{
    cout << "please enter A:\n";
    cin >> A;

    cout << "please enter B:\n";
    cin >> B;

    cout << "please enter C:" << endl;
    cin >> C;
}


 float  CircleArea(float A, float B, float C)
{
    const float pi = 3.14;
    float D = ((A + B + C) / 2);

    
    float Arae = pi * pow((A * B * C) / (4 * sqrt(D * (D - A) * (D - B) * (D - C))), 2);
    return Arae;
}
void Print(float Arae)
{
    cout << "Circle Area=" << Arae<<endl;

}



int main()
{
    float A, B, C;

    Read(A, B, C);
    
    Print(CircleArea(A, B, C));
    
  
    return 0;
}
