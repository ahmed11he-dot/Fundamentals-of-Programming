
#include <iostream>
using namespace std;
int main()
{
    
      int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    int result = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;

   
    if (result  <= 9)
    {
        cout << "0" << result;
    }
    else
    {
        cout << result;
    }
   
    
}


