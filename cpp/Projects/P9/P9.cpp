
#include <iostream>
using namespace std;

void ReadGrade(float Grade[3])
{
    cout << "Please Enter Grade1? \n";
    cin >> Grade[0];
    cout << "Please Enter Grade2? \n";
    cin >> Grade[1];
    cout << "Please Enter Grade3? \n";
    cin >> Grade[2];
    cout << "**************************" << endl;

}
float CalculateAverageGrade(float Grade[3])
{

    return (Grade[0] + Grade[1] + Grade[2]) / 3;

}


int main()
{
  
    float Grade[3];

    ReadGrade(Grade);
    cout << "The Average of Grade is:" << CalculateAverageGrade(Grade) << endl;

    return 0;
}


