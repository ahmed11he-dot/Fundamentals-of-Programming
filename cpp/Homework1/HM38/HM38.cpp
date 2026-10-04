
#include <iostream>
using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Messege)
{
    int Number = 0;
    do 
    {
        cout << Messege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}
enPrimeOrNot CheckPrimeOrNot(int Number)
{
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0) 
        {
            return enPrimeOrNot::NotPrime;
        }
        
    }
    return enPrimeOrNot::Prime;

}
void PrintNumberType(int Number)
{
  
    if (CheckPrimeOrNot(Number) == enPrimeOrNot::Prime)
        cout << endl << "a number is prime.\n";
    else
        cout << endl << "a number is not prime.\n";
       
}

int main()
{
    

    PrintNumberType(ReadPositiveNumber("Please enter Positive Number:"));

    return 0;

}


