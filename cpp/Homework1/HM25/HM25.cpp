
#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "please enter Age between 18 and 45:\n";
    cin >> Age;

    return Age;
}

bool ValidateNumberINrange(int Number, int from, int to)
{

    return  ((Number >= from) && (Number <= to));

}


int  ReadUntilAgeBetween(int from, int to)
{
    int Age = 0;
    do
    {
        Age = ReadAge();
       
    } while (!ValidateNumberINrange(Age,from ,to));

    return Age;
}

void PrintResult(int Age)
{
    cout << "your Age is:" << Age << endl;
}

int main()
{

    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}


