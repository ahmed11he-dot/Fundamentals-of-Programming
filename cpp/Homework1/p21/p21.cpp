#include <iostream>
using namespace std;


int main()
{
    int Arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int find = 20;
    for (int i = 0; i <= 10; i++)
    {
        cout << "in atteration " << i + 1 << endl;
        if (find == Arr[i])
        {
            cout << "the position " << find << " is " << i<<endl;
            break;
        }


    }


    return 0;
}

