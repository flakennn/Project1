#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
class complex
{
private:
	double re;
	double im;
public:
	complex(double valueRE, double valueIM);
	complex();
	double GetRE();
	double GetIM();
	void Output();
	complex complexPLUS(complex a, complex b);
	complex complexMINUS(complex a, complex b);
	complex complexMULT(complex a, complex b);
	complex complexDIV(complex a, complex b);
};

#endif