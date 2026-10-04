#include <iostream>
#include "Home3.h"
using namespace std;
/*
class let
{
private:
    int b1,b2,b3,b4,b5,b6,b7;
    
public:

    let(int aa1, int aa2, int aa3, int aa4, int aa5, int aa6, int aa7)
     {
        b1 = aa1;
       b2= aa2 ;
       b3= aa3 ;
       b4= aa4 ;
       b5= aa5 ;
       b6= aa6 ;
       b7= aa7 ;  
     }

    let(const let& c)
    {
        b1 = c.b1;
        b2 = c.b2;
        b3 = c.b3;
        b4 = c.b4;
        b5 = c.b5;
        b6 = c.b6;
        b7 = c.b7;
    }


    void print()
    {
        cout << b1 << " " << b2 << " " << b3 << " " << b4 << " " << b5 << " " <<
            b6 << " " << b7 << endl;;
        
    }

};

int main()
{
    let g(1, 2, 3, 4, 5, 6, 7);
    let h(g);
    g.print();
    h.print();
    return 0;
}
*/

/*class Home
{
private :
    string address;
    int size;
public :
    void setaddress(string add)
    {
        address = add;
    }
    string getaddress()
    {
        return address;

    }
    void setsize(int s)
    {
        size = s;
    }
    int getsize()
    {
        return size;

    }
    void print()
    {
        cout << "your adress is:" << getaddress() << endl;
        cout << "your size house:" << getsize() << endl;
        
    }
     
};
int main()
{
    Home c1,c2;
    c1.setaddress("12 Cairo street");
    c1.setsize(13242);
    c1.print();
    c2.setaddress("14 Cairo street");
    c2.setsize(42);
    c2.print();
}
*/

int main()
{
    Home3 As1,As2;
    
    As1.setaddress("12 Cairo street");
    As1.setsize(13242);
    As1.print();
    As2.setaddress("14 Cairo street");
    As2.setsize(42);
    As2.print();

}