
#include <iostream>
using namespace std;
float ReadNumberOfHours(string Messege)
{
    float NumberOfHours;
    do 
    {
        cout << Messege << endl;

        cin >> NumberOfHours;


    } while (NumberOfHours <= 0);

    return NumberOfHours;

}

float HoursToWeeks(float Number)
{
    return (Number) / (7 * 24);

}
float HoursToDays(float Number)
{
    return Number / 24;

}

int main()
{
    float NumberOfHours = ReadNumberOfHours("Please enter number of hours:");
    float NumberOfWeeks = HoursToWeeks(NumberOfHours);
    float NumberOfDays= HoursToDays(NumberOfHours);

    cout << "Total hours= " << NumberOfHours << endl;
    cout << "Total Days= " << NumberOfDays << endl;
    cout << "Total Weeks= " << NumberOfWeeks << endl;

    return 0;
}