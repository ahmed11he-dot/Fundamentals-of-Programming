
#include <iostream>
using namespace std;

void PrintAllLetters()
{

    int i = 65;
    while (i <= 90)
    {
        char l = char(i);
       cout<< l<<endl;
        i++;
    }
   

}
void Print()
{
   cout << "print all letters from A to Z\n";
   PrintAllLetters();
}

int main()
{
     Print();
    return 0;
}

