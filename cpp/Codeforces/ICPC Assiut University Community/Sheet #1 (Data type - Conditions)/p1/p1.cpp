#include<iostream>
#include<cmath>
using namespace std;

int ReadPositiveNumber()
{
    int Number;
    do
    {

        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CalculateAPowB(int A, int B)
{
    return B * log(A);

}
int CalculateCPowD(int C, int D)
{
    return D * log(C);

}
void judge(int A, int B, int C, int D)
{
    if (CalculateAPowB(A, B) > CalculateCPowD(C, D))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}

int main()
{
    int A = ReadPositiveNumber();
    int B = ReadPositiveNumber();
    int C = ReadPositiveNumber();
    int D = ReadPositiveNumber();



    if (A <= pow(10, 7) && C <= pow(10, 7) && B <= pow(10, 12) && D <= pow(10, 12))
    {
        judge(A, B, C, D);
    }



    return 0;
}