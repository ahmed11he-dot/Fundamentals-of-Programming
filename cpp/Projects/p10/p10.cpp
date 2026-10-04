
#include <iostream>
using namespace std;

int x = 2000;
void Number()
{
	int x = 200;

	cout << " the local variable value1 : " << x<<endl;

}
int main() 
{
	int x = 4000;
	Number();
	cout << " the local variable value2 : " << x<<endl;
	cout << " the Global variable value : " << ::x+300<<endl;

	return 0;

}
