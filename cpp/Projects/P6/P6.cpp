
#include <iostream>
using namespace std;
enum encountries{Egypt,Gordan,SouthAfrican,America,Iraq,Other};
int main()
{
    
    cout << "please enter your number country\n";
    cout << "Egypt=0\n";
    cout << "Gordan=1\n";
    cout << "SouthAfrican=2\n";
    cout << "America=3\n";
    cout << "Iraq=4\n";
    cout << "Other=5\n";
    
    int A;
    encountries country;
    cin >> A;
    country = (encountries)A;
    switch(country)
    {

    case encountries::America:
    
        cout << "Your country is America";
        break;
    case encountries::Egypt:
    
        cout << "Your country is Egypt";
        break;
    case encountries::SouthAfrican:
    
        cout << "Your country is SouthAfrican";
        break;
    case encountries::Iraq:
    
        cout << "Your country is Iraq";
        break;
   
    default:
        cout << "Your country is Other";
   
    }

    return 0;
}

