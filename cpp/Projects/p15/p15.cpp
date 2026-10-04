
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int c = 1; c <= i; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}

