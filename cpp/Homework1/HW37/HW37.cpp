
#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;

}
int PrintSum()
{
    int Sum = 0, Number = 0, Counter = 1;
    

    do
    {
        Number = ReadNumber("Please enter Number" + to_string(Counter));
        if (Number == -99)
        {
            break;

        }
        Sum += Number;
        Counter++;

    } while (Number != -99);
   
    return Sum;
            
}

int main()
{
   
    cout << endl << "Sum= " << PrintSum();


    return 0;
}