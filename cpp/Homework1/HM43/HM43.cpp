
#include <iostream>

using namespace std;
struct strSeToDay_Hou_Min_Sec
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadNumberOfSecond(string Messege)
{
    int Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;


    } while (Number <= 0);

    return Number;

}
strSeToDay_Hou_Min_Sec Convert(int TotalSecond)
{
    strSeToDay_Hou_Min_Sec wow;
    const int SecondsPerDays = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinutes = 60;
    int Remainder = 0;
    wow.NumberOfDays = (TotalSecond / SecondsPerDays);
    Remainder = (TotalSecond % SecondsPerDays);
    wow.NumberOfHours= (Remainder / SecondsPerHours);
    Remainder = (Remainder % SecondsPerHours);
    wow.NumberOfMinutes = (Remainder / SecondsPerMinutes);
    Remainder = (Remainder % SecondsPerMinutes);
    wow.NumberOfSeconds = Remainder;

    return wow;


}
void PrintD_H_M_S(strSeToDay_Hou_Min_Sec wow)
{
   
    cout <<endl<< "Days:" << "Hours:" << "Minutes:" << "Seconds"<<endl;
    cout << wow.NumberOfDays << ":" << wow.NumberOfHours << ":" << wow.NumberOfMinutes << ":" << wow.NumberOfSeconds<<endl;
    
    

}

int main()
{

    int TotalSecond = ReadNumberOfSecond("please enter Seconds :");
    PrintD_H_M_S(Convert(TotalSecond));
        
    return 0;
}

