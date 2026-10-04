
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;
    cin >> x >> op >> y;
    switch (op)
    {
    case '>':
        if (x > y)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
        break;
    case '<':
        if (x < y)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
        break;
    case '=':
        if (x == y)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
        break;
    }

}
