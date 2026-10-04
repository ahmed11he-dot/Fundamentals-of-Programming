
#include <iostream>
using namespace std;
int main()
{
    
    long long a, b, c,d;
  
   
    cin >> a >> b >> c  >> d;
    bool r = (
        (a + b - c) == d ||
        (a - b + c) == d ||
        (a + b * c) == d ||
        (a * b + c) == d ||
        (a - b * c) == d ||
        (a * b - c) == d ) ;
        
    if (r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}


