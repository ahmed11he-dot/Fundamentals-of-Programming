#pragma once
#include<iostream>
using namespace std;
class mult
{
private:
	int num1;
	int num2;
public :
	mult():num1(0),num2(0)
	{
	}
	mult(int x,int y) :num1(x), num2(y)
	{
	}
	mult operator *(mult  d)
	{
		int res1 = num1 *d.num1;
		int res2 = num2 * d.num2;
		return mult(res1,res2);
	}
	void print()
	{
		cout << "Result 1=" << num1<<endl;
		cout << "Result 2=" << num2;

	}




};

