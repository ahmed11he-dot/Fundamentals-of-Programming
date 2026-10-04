
#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= 'A' && x <= 'Z')
    {
        char c = static_cast<char>(x + 32);
        cout << c;
    }
    else if (x >= 'a' && x <= 'z')
    {
        char c = char(x - 32);
        cout << c;

    }

    return 0;
}
