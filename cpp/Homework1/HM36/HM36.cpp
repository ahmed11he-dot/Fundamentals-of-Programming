
#include <iostream>
using namespace std;

enum enOperationType { Add = '+',Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;

}
enOperationType ReadOptype()
{
    char Op;

    cout << "Please enter Operation Type(+,-,/,*)\n";
    cin >> Op;

    return (enOperationType)Op;

}

float Calculate(float Number1 ,float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
            return Number1 + Number2;
    case enOperationType::Subtract:
                return Number1 - Number2;
    case enOperationType::Multiply:
                    return Number1 * Number2;
    case enOperationType::Divide:
                        return Number1 / Number2;
    default:
        Number1 + Number2;

    }

}


int main()
{
    float Number1 = ReadNumber("Please enter Number1:");
    float Number2 = ReadNumber("Please enter Number2:");

    enOperationType OpType = ReadOptype();

    cout << endl << "Result= " << Calculate(Number1, Number2, OpType)<<endl;

    return 0;
}
    



