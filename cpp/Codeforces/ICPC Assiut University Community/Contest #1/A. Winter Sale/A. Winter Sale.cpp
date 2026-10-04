#include <iostream>
using namespace std;
void Enter(float& AmountOfDiscount, float& PriceAfterDiscount)
{
    cin >> AmountOfDiscount >> PriceAfterDiscount;
}
float CalculatePriceBeforeDiscount(float AmountOfDiscount,float PriceAfterDiscount)
{
    
       float PriceBeforeDiscount = (PriceAfterDiscount / (1 - (AmountOfDiscount / 100)));
        return PriceBeforeDiscount;
}
int main()
{
    float AmountOfDiscount, PriceAfterDiscount, PriceBeforeDiscount;
   
    
         Enter(AmountOfDiscount, PriceAfterDiscount);
         cout<<CalculatePriceBeforeDiscount(AmountOfDiscount, PriceAfterDiscount);
         
}


