
#include <iostream>
using namespace std;
void rwsd(int* x, int* y)
{
	cout << *x << " " << *y;
	//return *x;
}

int main()
{
	int x = 5, y = 3;

	rwsd(&x, &y);

	/*
	
	int y;
	y= 18;

	int* ptr;
	ptr = &y;

	cout << *ptr<<endl;
	cout << ptr<<endl;
	*ptr += 20;
	
	cout << *ptr;

	
	*/
	
	//int arr[7] = { 10,22,42,63,1,88,95};
	//cout << arr+2;
	//cout << *(arr+5);
	//cout<<*(arr+1);
	/*for (rsize_t i = 0; i < 7; i++)
	{
     
		cout<< *(arr+i) <<endl;


	}
	*/
	//int* ptr = &arr[0];
	//int* ptr = arr;
	/*
	for (rsize_t i = 0; i < 7; i++)
	{

		cout << *ptr << endl;
		ptr++;

	}
	*/
	





	return 0;
}

