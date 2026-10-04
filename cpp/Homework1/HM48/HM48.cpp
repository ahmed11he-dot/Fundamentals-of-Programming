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
float CalculateToTalMonths(float LoanAmount, float TotalMonths)
{
    return LoanAmount / TotalMonths;

}

int main()
{
   
    float LoanAmount = ReadNumber("Please enter loan amount:");
    float TotalMonths = ReadNumber("Please enter total month:");
    cout << endl << "Loan amount = " << LoanAmount << endl;
    cout << "Total month = " << TotalMonths << endl;
    cout << "--------------------\n";
    cout << "Monthly Payment you need to settle the loan: " << CalculateToTalMonths(LoanAmount, TotalMonths)
        << " Egyptian Pound" << endl;
       
   

    return 0;
}



