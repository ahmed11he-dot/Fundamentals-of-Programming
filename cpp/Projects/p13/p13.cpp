
#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 10; i >= 1; i--)
    {
        for (int h = 1; h <= i; h++)
        {
            cout << "*";

        }
        cout<<endl;
    }

    return 0;
}