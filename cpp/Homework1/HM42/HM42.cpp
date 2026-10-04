

#include <iostream>
using namespace std;

struct stTotalSecond
{
    int Numberofdays, Numberofhours, Numberofminutes, Numberofseconds;

};
int ReadNumber(string Messege)
{
    int Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;


    } while (Number <= 0);

    return Number;

}


stTotalSecond ReadSe_Mi_Ho_Da()
{
    stTotalSecond info;
    
    info.Numberofdays= ReadNumber("Enter number of days");
    info.Numberofhours = ReadNumber("Enter number of hours");
    info.Numberofminutes = ReadNumber("Enter number of minutes");
    info.Numberofseconds = ReadNumber("Enter number of seconds");
    

    return info;
}


long double Total_second(stTotalSecond info)
{
    long double TotalSecond = 0;
    TotalSecond = info.Numberofdays * 24 * 60 * 60;
    TotalSecond += info.Numberofhours * 60 * 60;
    TotalSecond += info.Numberofminutes * 60;
    TotalSecond += info.Numberofseconds;

    return TotalSecond;
}


int main()
{
   
   
      cout << "Total seconds = " << Total_second(ReadSe_Mi_Ho_Da()) << " seconds" << endl;


    return 0;
}






