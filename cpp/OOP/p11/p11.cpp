
#include <iostream>
#include<string>
using namespace std;
class company
{
private:
    int id;
    string track;
    int age;
    string adress;
public:
    
    company(int i, string tr, int a,string ad1):id(i),track(tr),age(a),adress(ad1)
    {
    }
    
    void setadress(string ad1)
    {
        adress = ad1;
    }
    void print()
    {
        cout << "ID:" << id << endl;
        cout << "Track:" << track << endl;
        cout << "Age:" << age << endl;
        cout << "Adress:" << adress << endl;
    }
};
class employee
{
private:
    string name;
    int salary;
    string adress;
public:
   
    employee(string na, int sa,string ad2) 
    {
        name = na;
        salary = sa;
        adress = ad2;
    }
  
    void setadress(string ad2)
    {
        adress = ad2;
    }
    void print()
    {
       
        cout << "Name:" << name << endl;
        cout << "Salary:" << salary << endl;
        cout << "Adress:" << adress << endl;
    }
};
class taskes :public employee, public company
{
private:
    int Howmanytaskes;
public:
    taskes() : company(0, "None", 0,"Unknown"), employee("Unknown", 0, "Unknown"), Howmanytaskes(0)
    {
    }
    taskes(int i, string tr, int a,string ad1, string na, int sa, string ad2, int Hmt) :company(i, tr, a,ad1), employee(na, sa,ad2)
    {
        Howmanytaskes = Hmt;
    }
    void print()
    {
        company::print();
        employee::print();
        cout << "The num of taskes per the day:" << Howmanytaskes;
    }
};
int main()
{
   
    taskes t2;
    t2.print();
      t2.company::setadress("skk");
      t2.print();
}
