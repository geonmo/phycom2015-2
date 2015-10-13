#include"EField.h"
#include<iostream>

int main()
{
	EField ef(1000);
	ef.addPointCharge(5,5,-1.0);
	ef.printPointCharges();
	ef.printEField();



	return 0;
}

