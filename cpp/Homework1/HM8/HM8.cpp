
#include <iostream>
using namespace std;

enum enCase{Pass=1,Fail};

int Read()
{
    int Mark;
    cout << "please enter your mark:\n";
    cin >> Mark;
    return Mark;
}

enCase PassOrFail(int Mark)
{
    if (Mark >= 50)
        return enCase::Pass;
    else
        return enCase::Fail;

}

void PrintPassOrFail(int Mark)
{
    if (PassOrFail(Mark) == enCase::Pass)
        cout << "you are pass\n";
    else 
        cout << "you are fail\n";

}

int main()
{
    PrintPassOrFail(Read());
    return 0;
}

























