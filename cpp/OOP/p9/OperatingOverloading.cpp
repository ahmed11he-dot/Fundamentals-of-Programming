#include "OperatingOverloading.h"
#include<iostream>
using namespace std;

OperatingOverloading::OperatingOverloading() :count(0)
{
}
OperatingOverloading::OperatingOverloading(int c) :count(c)
{
}
int OperatingOverloading:: getcount()
{
    return count;
} 
 OperatingOverloading OperatingOverloading:: operator++()
{
    ++count;
    return OperatingOverloading(count);
}
 OperatingOverloading OperatingOverloading:: operator++(int)
{
     OperatingOverloading temp = *this;
    count++;
    return temp;
}
 OperatingOverloading OperatingOverloading:: operator--()
{
    --count;
    return OperatingOverloading(count);
}
 OperatingOverloading OperatingOverloading:: operator--(int)
{
     OperatingOverloading temp = *this;
    count--;
    return temp;
}