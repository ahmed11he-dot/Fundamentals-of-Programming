
#include <iostream>
using namespace std;

enum encolor { Red = 1, Blue, Black, Green };
void ReadColor()
{
    cout << "************************\n";
    cout << "please chose a number your color\n";
    cout << "Red=1\n";
    cout << "Blue=2\n";
    cout << "Black=3\n";
    cout << "Green=4\n";
    cout << "************************\n";
    cout << "your choice ?\n";
}
encolor Colorr()
{
    int b;
    encolor color;
    cin >> b;
    return (encolor)b;
}

void GetColor(encolor color)
{
    switch (color)
    {

    case encolor::Green:

        system("color 2F");
        break;
    case encolor::Red:

        system("color 4F");
        break;
    case encolor::Blue:

        system("color 1F");
        break;
    case encolor::Black:

        system("color 0F");
        break;

    default:
         system("color 8F");
    }
}

int main()
{
    ReadColor();

    GetColor(Colorr());
   


    return 0;
}

