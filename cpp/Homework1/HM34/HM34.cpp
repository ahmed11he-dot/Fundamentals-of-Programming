
#include <iostream>
using namespace std;

int EnterTotalSales()
{
    int TotalSales;

    cout << "please enter total sales:\n";
    cin >> TotalSales;

    return TotalSales;
}
float GetPercentage(int B)
{
    if (B >= 1000000)
        return .01;
    else if (B >= 500000)
        return .02;
    else if (B >= 100000)
        return .03;
    else if (B >= 50000)
        return .05;
    else
        return 0;
}
float CalculateCommection(int B)
{

    return GetPercentage(B) * B;

}


int main()
{
    int T = EnterTotalSales();
    cout << "percentage is " << GetPercentage(T)<<endl;
    cout << "Commection = " << CalculateCommection(T)<< endl;

    return 0;
}

