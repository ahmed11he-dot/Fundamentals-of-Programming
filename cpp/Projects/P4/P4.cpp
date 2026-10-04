#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	
	string St1,St2,St3;
	int St4;


	cout << "Please enter string1:\n";
	getline(cin, St1);
	cout << "Please enter string2:"<<endl;
	cin >> St2;
	cout << "Please enter string3:"<<endl;
	cin >> St3;

	St4 = stoi(St2) * stoi(St3);

	cout << "*****************************\n";
	cout << "The length of String1 is " << St1.length() << endl;
	cout << "Characters of 0, 2, 4, 7 are: " << St1[0] << St1[2] << St1[4] << St1[7] << endl;
	cout << "Concatenating String2 and String3 =" << St2 + St3<<"\n";
	cout << St2<<"*"<<St3 << "=" << St4 << "\n";

	return 0;
}