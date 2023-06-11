#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H
#include "IntComplex.h"
#pragma once

class FloatComplex : protected IntComplex 
{
	private:
		float real, imaginary;
	public:
		FloatComplex();
		FloatComplex(float r, float i);
		void operator + (FloatComplex o);
		void operator - (FloatComplex o);
		void operator * (FloatComplex o);
		void operator / (FloatComplex o);
		void display();
};

#endif
