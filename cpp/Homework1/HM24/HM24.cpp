
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
void PrintREsult(int Age)
{
    if (ValidateNumberINrange(Age, 18, 45))
        cout << Age << " Valid Age";
    else
        cout << Age << " InValid Age";
}
int main()
{
    
    PrintREsult(ReadAge());

    return 0;
}

