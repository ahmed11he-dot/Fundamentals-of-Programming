
#include <iostream>
using namespace std;
class Triangle
{
private:
    int Hieght, Base,id;
    char name[15];

    public:
      

        Triangle(int H, int B)
        {
           
            Hieght = H;
            Base = B;
           
        }
   
       /*
       
       Triangle(const char n[], int i)
        {
            cout << "********** \n";
            strcpy_s(name, n);
            id = i;
        }
       
       */ 
        int set()
        {
            return .5 * Hieght * Base;
       }
        void print()
        {
           
            cout << "Hieght:" << Hieght<<"\n";
            cout << "Base:" << Base<<endl;
            cout << "Area:" << set()<<endl;
        }

};

int main()
{
    Triangle ob1(8,9),ob2(4,2);
    ob1.print();
  //  ob2.print();
    return 0;
}

