#include <iostream>
#include<string>
using namespace std;
class person
{
private:
    string name;
    string gender;
    int age;
public:
    person(string n, string g, int a)
    {
        name = n;
        gender = g;
        age = a;
    }
    void setname(string n)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
    friend void print(person k);
    friend class Herewego;

};
class Herewego 
{
public:
    void print(person k)
    {
        cout << "Name:" << k.name << endl;
        cout << "Gender:" << k.gender << endl;
        cout << "Age:" << k.age << endl;
    }

};
int main()
{
    person m("Ahmed", "Male", 20);
   // print(m);
   // m.setname("Mohamed");
   // print(m);
    Herewego j;
    j.print(m);
}
