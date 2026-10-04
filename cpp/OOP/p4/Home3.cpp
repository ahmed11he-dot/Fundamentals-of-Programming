
#include "Home3.h"
    void Home3 :: setaddress(string add)
    {
        address = add;
    }
    string  Home3:: getaddress()
    {
        return address;

    }
    void Home3::setsize(int s)
    {
        size = s;
    }
    int Home3:: getsize()
    {
        return size;

    }
    void Home3::print()
    {
        cout << "your adress is:" << getaddress() << endl;
        cout << "your size house:" << getsize() << endl;

    }

