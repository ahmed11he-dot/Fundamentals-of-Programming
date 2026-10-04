
#include <iostream>
using namespace std;
int main()
{
    float Mark1;
    float Mark2; 
    float Mark3;
    
    cout << "please enter Mark:1\n";
    cin >> Mark1;
    cout << "please enter Mark:2\n";
    cin >>Mark2;
    cout<< "please enter Mark:3"<<endl;
    cin >> Mark3;

    cout << "the Average of entered Mark=" << (Mark1 + Mark2 + Mark3) / 3 <<endl;

    return 0;
}
