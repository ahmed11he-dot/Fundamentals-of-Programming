#pragma once
#include<iostream>
using namespace std;
class Home3
{
private:
    string address;
    int size;
public:
    void setaddress(string add);
   
    string getaddress();
    
    void setsize(int s);
   
    int getsize();
    void print();
};

