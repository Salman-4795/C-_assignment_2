#include <iostream>
#include <iomanip>
#include "IntComplex.h"
using namespace std;

IntComplex::IntComplex()
{
	real = 0;
	imaginary = 0;
}

IntComplex::IntComplex(int r, int i)
{
	real = r;
	imaginary = i;
}

void IntComplex:: operator + (IntComplex o)
{
	IntComplex temp;
	temp.real = real + o.real;
	temp.imaginary = imaginary + o.imaginary;
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void IntComplex:: operator - (IntComplex o)
{
	IntComplex temp;
	temp.real = real - o.real;
	temp.imaginary = imaginary - o.imaginary;
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void IntComplex:: operator * (IntComplex o)
{
	IntComplex temp;
	temp.real = real * o.real - imaginary * o.imaginary;
	temp.imaginary = real * o.imaginary + imaginary * o.real;
	cout<<temp.real<<" + "<<temp.imaginary<<"i"<<endl;
}

void IntComplex:: operator / (IntComplex o)
{
	IntComplex temp;
	temp.real = (real * o.real + imaginary * o.imaginary) / (o.real * o.real + o.imaginary * o.imaginary);
	temp.imaginary = (imaginary * o.real - real * o.imaginary) / (o.real * o.real + o.imaginary * o.imaginary);
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void IntComplex :: display()
{
	cout<<real<<" + "<<imaginary<<"i"<<endl;
}
