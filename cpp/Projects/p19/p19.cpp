
#include <iostream>

using namespace std;
int scale(int from, int to)
{
    int Num;
    cout << "please enter a Num between " << from << " and " << to<<endl;
    cin >> Num;
    while (Num<from || Num >to)
    {
        cout << "please enter a Num between " << from << " and " << to<<endl;
        cin >> Num;

    }

    return Num;
}

int main()

{
    cout << "your number is: " << scale(19, 50)<<endl;
}

