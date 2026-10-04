
#include <iostream>
using namespace std;
void Read(float& length, float& width)
{
    cout << "please enter a length:" << endl;
    cin >> length;

    cout << "please enter a width:\n ";
    cin >> width;

}

float Area(float length,float width)
{

   return length * width;

}

void PrintArea(float Result)
{
    cout << "the Rectengale Area =" << Result<<endl;
}

int main()
{
   
    float length,width;

    Read(length, width);
    PrintArea(Area(length, width));

   
    return 0;
}

