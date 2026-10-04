#include<iostream>
using namespace std;

int main()
{
	float x, y;
	cin >> x >> y;
	if ((x > 0 && x < 1000) && (y > 0 && y < 1000))
	{
		cout << "Q1";
	}
	else if ((x < 0 && x > -1000) && (y > 0 && y < 1000))
	{
		cout << "Q2";
	}
	else if ((x < 0 && x > -1000) && (y < 0 && y > -1000))
	{
		cout << "Q3";
	}
	else if ((x > 0 && x < 1000) && (y < 0 && y > -1000))
	{
		cout << "Q4";
	}
	if ((x > 0 && x < 1000) && (y == 0))
	{
		cout << "Eixo X";
	}
	else if ((x < 0 && x > -1000) && (y == 0))
	{
		cout << "Eixo X";
	}
	if ((x == 0) && (y > 0 && y < 1000))
	{
		cout << "Eixo Y";
	}
	else if ((x == 0) && (y < 0 && y > -1000))
	{
		cout << "Eixo Y";
	}
	else if(x == 0.0 && y == 0.0)
	{
		cout << "Origem";
	}

}