
#include <iostream>

#include "OperatingOverloading.h"
#include"Distance.h"
#include"mult.h"
using namespace std;
/*
class counter
{
private:
    int count;
public:
    counter() :count(0)
    {
    }
    counter(int c) :count(c)
    {
    }
    int getcount()
    {
        return count;
    }
    counter operator++()
    {
        ++count;
        return counter(count);
    }
    counter operator++(int)
    {
        count++;
        return counter(count);
    }
    counter operator--()
    {
        --count;
        return counter(count);
    }
    counter operator--(int)
    {
        count--;
        return counter(count);
    }
};
*/
int main()
{
    /*
    counter g1(3);
    counter g2(7);
    counter g3 = --g2;
    counter g4 = ++g1;
    cout << g3.getcount() << endl;
    cout << g4.getcount()<<endl;
    counter g5 = g2++;
    cout << g5.getcount();
    
    */
   /*
    OperatingOverloading f1(4);
    OperatingOverloading f4(9);
    OperatingOverloading f3=++f4;
    OperatingOverloading f2=f1--;
    cout << f3.getcount() << endl;
    cout << f2.getcount() << endl;

   */
    {

        Distance d1(2, 3);
        Distance d2(6, 1);

        Distance d3 = d1 + d2;
        d3.Print();
        Distance d4 = d1 - d2;
        d4.Print();
    }
    mult s(3, 1);
    mult d(2, 8);
    mult A = s * d;
    A.print();
}
