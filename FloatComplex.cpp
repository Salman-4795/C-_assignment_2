#include <iostream>
#include <iomanip>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;

FloatComplex::FloatComplex()
{
	real = 0;
	imaginary = 0;
}

FloatComplex::FloatComplex(float r, float i)
{
	real = r;
	imaginary = i;
}

void FloatComplex:: operator + (FloatComplex o)
{
	FloatComplex temp;
	temp.real = real + o.real;
	temp.imaginary = imaginary + o.imaginary;
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void FloatComplex:: operator - (FloatComplex o)
{
	FloatComplex temp;
	temp.real = real - o.real;
	temp.imaginary = imaginary - o.imaginary;
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void FloatComplex:: operator * (FloatComplex o)
{
	FloatComplex temp;
	temp.real = real * o.real - imaginary * o.imaginary;
	temp.imaginary = real * o.imaginary + imaginary * o.real;
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void FloatComplex:: operator / (FloatComplex o)
{
	FloatComplex temp;
	temp.real = (real * o.real + imaginary * o.imaginary) / (o.real * o.real + o.imaginary * o.imaginary);
	temp.imaginary = (imaginary * o.real - real * o.imaginary) / (o.real * o.real + o.imaginary * o.imaginary);
	cout << temp.real << " + " << temp.imaginary << "i" << endl;
}

void FloatComplex :: display()
{
	cout<<real<<" + "<<imaginary<<"i"<<endl;
}
