
#include <iostream>
using namespace std;
unsigned addWithoutCarry(unsigned A, unsigned B)
{
    return (A ^ B);
}
int main()
{
    unsigned A, B;
    if (cin >> A >> B)
    {
        cout << addWithoutCarry(A, B);
   }
}


