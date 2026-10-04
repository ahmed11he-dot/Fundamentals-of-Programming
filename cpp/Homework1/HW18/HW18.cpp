
#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
    float Radius;

    cout << "please enter Radius:\n";
    cin >> Radius;

    return Radius;
}

float Circle_Area(float Radius)
{
    const float pi = 3.14;
    float Area = pi * pow(Radius, 2);
        return Area;
}
void PrintCircle_Area(float Area)
{
    cout << "Circle Area=" << Area << endl;

}


int main()
{
   
     PrintCircle_Area(Circle_Area(ReadRadius()));

    return 0;
}


