
#include <iostream>
using namespace std;
class car
{
private:
    int model;
    string color;
    string type;
    string price;
public:
    void getmodel(int m)
    {
        model = m;
    }
    void getcolor(string c)
    {
        color = c;

    }
    void gettype(string t)
    {
        type = t;

    }
    void getprice(string p)
    {
        price = p;

    }
    int setmodel()
    {
        return model;

    }
    string setcolor()
    {
        return color;

    }
    string settype()
    {
        return type;

    }

    string setprice()
    {
        return price;
    }

    void print()
    {
        cout << "Model:" << setmodel() << "\n"
            << "Color:" << setcolor() << "\n"
            << "Type:" << settype() << "\n"
            << "Price:" << price << "\n";
    }
};
int main()
{
    
    car z;
    z.getmodel(2020);
    z.getcolor("White");
    z.gettype("BMW");
     z.getprice("2.5M");
     z.print();
    
    return 0;
}
