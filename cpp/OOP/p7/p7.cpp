#include <iostream>
#include "Car.h"
#include"Rectangle.h"
#include"Calculate.h"

int main()
{
	/*
	Car A1(2006, "BMW", "gray");
	cout << A1.gettype()<<endl;
	Car A2(A1);
	cout << A2.getmodel() << endl;
	Car A3;
	
	cout << A3.gettype()<<endl;
	
	Rectangle B1(3.4, 6);
	cout << B1.getlength()<<"\n";
	B1.setlength(2);
	B1.setwedth(5);
	Rectangle B2 = B1;
	 B2.print();
	 Calculate C1;
	 cout<<C1.add(2.3, 4.5);
	
	Rectangle ob1(2.3,4);
	Rectangle ob2(2.5, 5);

	Rectangle r3 = ob1.addrec(ob2);
	r3.print();
	*/
	
	Car d1,d2,d3;
	cout << "counter reshed:" << d1.getcount()<<endl;
	
	cout << "counter reshed:" << d2.getcount() << endl;
	
	cout << "counter reshed:" << d3.getcount() << endl;
	cout << Calculate::add(3, 2, 1)<<"\n";
	cout << Calculate::subtract(3,4) << "\n";
	cout << Calculate::multiply(3,4) << "\n";

}


