

#include <iostream>
using namespace std;
/*Loan Amount = قيمة القرض
    * Monthly Payment =القيمه المدفوعه كل شهر
    * Total Months= عدد الشهور المستغرقه لسداد القرض
    */
float ReadNumber(string Messege)
{
    float Number;
    do
    {
        cout << Messege << endl;

        cin >> Number;


    } while (Number <= 0);

    return Number;

}
float CalculateToTalMonths(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;

}

int main()
   {

    float LoanAmount = ReadNumber("Please enter loan amount:");
    float MonthlyPayment = ReadNumber("Please enter monthly payment:");
    cout << endl << "Loan amount = " << LoanAmount << endl;
    cout << "Monthly payment = " << MonthlyPayment << endl;
    cout << "--------------------\n";
    cout << "Total Months you need to settle the loan: " << CalculateToTalMonths(LoanAmount, MonthlyPayment) 
        << " Months" << endl;
    return 0;
 }


