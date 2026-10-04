#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            Even ++;

        }
        else 
        {
            Odd ++;
        }
         if (x > 0)
        {
            Positive ++;
        }
        else if (x < 0)
        {
            Negative ++;
        }
    }

    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;
}
