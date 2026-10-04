
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Messege)
{
    float Number = 0;
    do
    {
        cout << Messege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}



float Calculate(float TotalBill)
{

    float Totalbill = TotalBill * 1.1 * 1.16;
   
  return Totalbill;
}


int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill:");
    cout << "Total Bill= " << TotalBill << endl;

    cout << "Total Bill After Service Fee and Sales Tax= " << Calculate(TotalBill)<<endl;

    
    return 0;
}

