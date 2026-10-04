
#include <iostream>
#include <cmath>
using namespace std;

/*المطلوب حساب مساحه دايره تقع داخل مثلث متسلوي الساقين
     b القاعده رمزها
     a ضلعين المثلث رمزهم
  */

void Read(float& a, float& b)
{
    cout << "please enter a:\n";
    cin >> a;

    cout << "please enter b:" << endl;
    cin >> b;

}

float CalculateCircleArea(float a, float b)
{
    const float Pi = 3.14;

       float Area= Pi* (pow(b, 2) / 4)* ((2 * a - b) / (2 * a + b));
       return Area;
}
void PrintCircleArea(float Area)
{
    cout << "Circle Area=" << Area<<endl;
}

int main()
{ 
    float a, b;
    
    Read(a, b);
    PrintCircleArea(CalculateCircleArea(a, b));
   
    return 0;
}


