#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H
#pragma once

class IntComplex
{
	private:
		int real, imaginary;
	public:
		IntComplex();
		IntComplex(int r, int i);
		void operator + (IntComplex o);
		void operator - (IntComplex o);
		void operator * (IntComplex o);
		void operator / (IntComplex o);
		void display();
		
};

#endif
