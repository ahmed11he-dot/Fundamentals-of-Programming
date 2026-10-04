
#include <iostream>
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "please enter Mark:1\n";
    cin >> Mark1;
    cout << "please enter Mark:2\n";
    cin >> Mark2;
    cout << "please enter Mark:3" << endl;
    cin >> Mark3;

}

int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    
    return SumOfMarks(Mark1, Mark2, Mark3) / 3.0;
}

void PrintAverage(float Result)
{
    cout << "the Average of Marks is:" << Result;
}


int main()
{
    int Mark1, Mark2, Mark3;
   
    ReadMarks(Mark1, Mark2, Mark3);
    PrintAverage(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}
