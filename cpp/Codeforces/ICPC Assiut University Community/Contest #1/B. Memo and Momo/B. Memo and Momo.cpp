
#include <iostream>
using namespace std;
void enterData(long long& num1, long long& num2, long long& divisor)
{
    cin >> num1 >> num2 >> divisor;

}
void PrintTheCondition(long long num1, long long num2, long long divisor)
{

    bool isNum1Divisable = (num1 % divisor == 0);
    bool isNum2Divisable = (num2 % divisor == 0);
    if (isNum1Divisable && isNum2Divisable)
    {
        cout << "Both";
    }
    else if (isNum1Divisable)
    {
        cout << "Memo";
    }
    else if (isNum2Divisable)
    {
        cout << "Momo";
    }
    else
    {
        cout << "No One";
    }
}

int main()
{
    long long num1, num2, divisor;
     enterData(num1, num2, divisor);
     PrintTheCondition(num1, num2, divisor);
     

}


