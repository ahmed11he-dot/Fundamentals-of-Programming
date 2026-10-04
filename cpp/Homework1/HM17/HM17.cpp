
#include <iostream>
using namespace std;

void Read(float& Hieght, float& Base)
{
    cout << "please enter Base:\n";
    cin >> Base;
    cout << "please enter Hieght:\n";
    cin >> Hieght;
}

float CalculateTrianglaArea(float Hieght, float Base)
{

    float Area = (.5) * (Hieght * Base);

    return Area;
}
void PrintTrianglaArea(float Area)
{
    cout << "the triangle Area=" << Area << endl;

}

int main()
{
    float Hieght, Base;
    
    Read(Hieght, Base);
    PrintTrianglaArea(CalculateTrianglaArea(Hieght, Base));

    return 0;
}


