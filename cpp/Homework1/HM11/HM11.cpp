
#include <iostream>
using namespace std;

enum enCheck{Pass,Fail};

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

enCheck CheckResult(float Average)
{
    
    if (Average >= 50)
    {
        return enCheck::Pass;
        
    }
    else
    {
        return enCheck::Fail;
       
    }

}


void PrintResult(float Average)
{
    cout << "Your Average is :" << Average <<endl;
    if (CheckResult(Average) == enCheck::Pass)
        cout << "You Are Pass\n";
    else 
        cout << "You Are Fail\n";

}



int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}


    

    


 
