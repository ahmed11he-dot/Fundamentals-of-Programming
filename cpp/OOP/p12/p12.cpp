#pragma once
#include"Rectangle.h"
#include"circle.h"
int main()
{
	Rectangle R(2.3, 4, "Red");
	circle c(4.1, "Black");
	shape* sh;
	sh = &R;
	sh->Area();
	sh->Draw();
	sh = &c;
	sh->Area();
}

