
#include <iostream>
using namespace std;

enum enWeekDays { Saturday = 1, Sunday, Moday, Tueday, Wednesday, Thursday, Friday };
int ReadNumber(string Messege,int From,int To)
{
    int Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;


    } while (Number < From || Number > To);

    return Number;

}
enWeekDays ReadDay()
{
    
    return (enWeekDays)ReadNumber("Please enter Number of day between 1 to 7:",1 ,7);
}
string GetDay(enWeekDays WeekDays)
{

    switch (WeekDays) 
    {
    case enWeekDays::Saturday:
        return "Saturday";
    case enWeekDays::Sunday:
        return "Sunday";
      
    case enWeekDays::Moday:
        return "Moday";
      
    case enWeekDays::Tueday:
        return "Tueday";
        
    case enWeekDays::Wednesday:
        return "Wednesday";
        
    case enWeekDays::Thursday:
        return "Thursday";
        break;
    case enWeekDays::Friday:
        return "Friday";
       
    default:
        return "Wrong Day";
       
    }

}

int main()
{
    cout << "(1)Saturday\n";
    cout << "(2)Sunday\n";
    cout << "(3)Moday\n";
    cout << "(4)Tueday\n";
    cout << "(5)Wednesday\n";
    cout << "(6)Thursday\n";
    cout << "(7)Friday\n";
        
    cout << "Today is:" << GetDay(ReadDay()) << endl;
        

    return 0;
}

