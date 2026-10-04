
#include <iostream>
using namespace std;

void Read(int& A, int& B, int& C)
{
    cout << "please enter the first Num:\n";
    cin >> A;
    cout << "please enter the Second Num:\n";
    cin >> B;
    cout << "please enter the Third Num:\n";
    cin >> C;

}
int MaxOf3Numbers(int A, int B, int C)
{
    if (A > B)
        if (A > C)
            return A;
        else
            return C;
    else
        if (B > C)
            return B;
        else
            return C;

}
void Print(int Result)
{
    cout << "The Maxmium of 3 Numbers is " << Result;
}
int main()
{
    int A, B, C;
    Read(A, B, C);
    Print(MaxOf3Numbers(A, B, C));
    
    return 0;
}
