#include<iostream>
using namespace std;
#include "Complex.h"
complex::complex(double valueRE, double valueIM)
{
	re = valueRE;
	im = valueIM;
}
complex::complex()
{
	re = 0;
	im = 0;

}
double complex::GetRE()
{
	return re;
}
double complex::GetIM()
{
	return im;
}
void complex::Output()
{
	cout << "Re= " << re << endl << "Im= " << im << endl << endl;
}
complex complex::complexPLUS(complex a, complex b)
{
	double real = a.GetRE() + b.GetRE();
	double imag = a.GetIM() + b.GetIM();
	complex c(real, imag);
	return c;
}
complex complex::complexMINUS(complex a, complex b)
{
	double real = a.GetRE() - b.GetRE();
	double imag = a.GetIM() - b.GetIM();
	complex c(real, imag);
	return c;
}
complex complex::complexMULT(complex a, complex b)
{
	double real = a.GetRE() * b.GetRE() - a.GetIM() * b.GetIM();
	double imag = a.GetRE() * b.GetIM() + b.GetRE() * a.GetIM();
	complex c(real, imag);
	return c;
}
complex complex::complexDIV(complex a, complex b)
{
	double real = (a.GetRE() * b.GetRE() + a.GetIM() * b.GetIM()) / (pow(b.GetRE(), 2) + pow(b.GetIM(), 2));
	double imag = (b.GetRE() * a.GetIM() - a.GetRE() * b.GetIM()) / (pow(b.GetRE(), 2) + pow(b.GetIM(), 2));
	complex c(real, imag);
	return c;
}