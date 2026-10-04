
#include <iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    int num = int(x);
    if (x - num > 0)
    {
        cout << "float " << num << " " << x - num << endl;
    }
    else if ((x - num) == 0)
    {
        cout << "int " << x << endl;
    }

}

