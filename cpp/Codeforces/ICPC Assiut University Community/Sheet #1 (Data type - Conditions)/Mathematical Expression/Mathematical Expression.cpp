#include <iostream>
using namespace std;
int getcorrectanswer(int num1, int num2, char op)
{
    switch (op)
    {case '+':
       return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    default:
        return 0;
    }
}

void checkresult(int correctAnswer,int userResult)
{
    if (correctAnswer == userResult)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << correctAnswer << endl;
    }
}
int main()
{
    int firstnum = 0, secondnum = 0, userResult = 0;
    char operation = ' ', equalsign = ' ';

    cin >> firstnum >> operation>> secondnum >> equalsign >> userResult;

    int CorrectAnswer = getcorrectanswer(firstnum, secondnum,operation);
    
    checkresult(CorrectAnswer, userResult);

}

