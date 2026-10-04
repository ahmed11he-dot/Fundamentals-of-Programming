#include <iostream>
using namespace std;

enum enMonths { January = 1, Fabruary, March, April, May, June, Julay,August,September,October,November,December };
int ReadNumber(string Messege, int From, int To)
{
    int Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;


    } while (Number < From || Number > To);

    return Number;

}
enMonths ReadDay()
{

    return (enMonths)ReadNumber("Please enter Number of month between 1 to 12:", 1, 12);
}
string GetDay(enMonths MonthName)
{

    switch (MonthName)
    {
    case enMonths::January:
        return "January";
    case enMonths::Fabruary:
        return "Fabruary";
    case enMonths::March:
        return "March";
    case enMonths::April:
        return "April";
    case enMonths::May:
        return "May";
    case enMonths::June:
        return "June";
    case enMonths::Julay:
        return "Julay";
    case enMonths::August:
        return "August";
    case enMonths::September:
        return "September";
    case enMonths::October:
        return "October";
    case enMonths::November:
        return "November";
    case enMonths::December:
        return "December";
    default:
        return "Invalid month.";

    }

}
void Print()
{
    cout << "(1)January\n";
    cout << "(2)Fabruary\n";
    cout << "(3)March\n";
    cout << "(4)April\n";
    cout << "(5)May\n";
    cout << "(6)June\n";
    cout << "(7)Julay\n";
    cout << "(8)August\n";
    cout << "(9)September\n";
    cout << "(10)October\n";
    cout << "(11)November\n";
    cout << "(12)December\n";


}

int main()
{
   
    Print();
    cout << "Month is:" << GetDay(ReadDay()) << endl;


    return 0;
}

