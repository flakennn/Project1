#include"Complex.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	complex a(1, 5);
	complex b(7, 4);
	complex c;
	c = a.complexPLUS(a, b);
	c.Output();
	c = a.complexMINUS(a, b);
	c.Output();
	c = a.complexMULT(a, b);
	c.Output();
	c = a.complexDIV(a, b);
	c.Output();



	return 0;
}
