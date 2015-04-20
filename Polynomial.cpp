/*
 * Polynomial.cpp
 *
 *  Created on: Oct 24, 2013
 *      Author: cltarng
 */


#include <iostream>
#include <cmath>
#include "polynomial.h"
using namespace std;


Polynomial::Polynomial()
{
	degree = 10;
	coeff = new double[degree+1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = 0;
	}
}

Polynomial::Polynomial(int degr)
{
	degree = degr;
	coeff = new double[degree+1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = 0;
	}
}

Polynomial::Polynomial(const Polynomial &poly)
{
	degree = poly.get_degree();
	coeff = new double[degree+1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = poly.get_coeff(i);
	}
}

Polynomial::Polynomial(double cf[], int deg)
{
	degree = deg;
	coeff = new double[degree+1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = cf[i];
	}
}

Polynomial::~Polynomial()
{
	delete [] coeff;
}

int Polynomial::get_degree() const
{
	return degree;
}

double Polynomial::get_coeff(int deg) const
{
	if (degree < deg)
	{
		return 0;
		// The input degree is larger than the polynomial degree
	}
	return coeff[deg];
}

void Polynomial::set_coeff(int degr, double val)
{
	if (degree < degr)
	{
		cout << "Degree exceeded." << endl;
		return;
	}
	coeff[degr] = val;
}

// Evaluate the polynomial
double Polynomial::evaluate(double val)
{
	double result = 0;
	for (int i = 0; i <= degree; i++)
	{
		result = result + coeff[i] * pow(val, i);
	}
	return result;
}

// Assignment operator
void Polynomial::operator =(const Polynomial &poly)
{
	if (this == &poly)
	{
		// Copy to itself. Nothing to be done.
		return;
	}
	degree = poly.get_degree();
	delete [] coeff;
	coeff = new double[degree+1];

	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = poly.get_coeff(i);
	}
	return;
}

// Overloaded operator +
Polynomial operator+(const Polynomial &pola, const Polynomial &polb)
{
	int degA = pola.get_degree();
	int degB = polb.get_degree();

	int max_degr;

	if (degA > degB)
	{
		max_degr = degA;
	} else
	{
		max_degr = degB;
	}

	Polynomial result(max_degr);

	int i;
	for (i = 0; i <= degA && i <= degB; i++)
	{
		double nc = pola.get_coeff(i) + polb.get_coeff(i);
		result.set_coeff(i, nc);
	}

	// Finish the rest of the coefficients
	for (; i <= max_degr; i++)
	{
		if (degA != max_degr)
		{
			result.set_coeff(i, polb.get_coeff(i));
		} else
		{
			result.set_coeff(i, pola.get_coeff(i));
		}
	}
	return result;
}

// Overloaded << operator
ostream& operator << (ostream& ost, const Polynomial &pol)
{
	int degr = pol.get_degree();

	for (int i = degr; 0 <= i; i--)
	{
		cout << pol.get_coeff(i) << "*x^" << i << " ";
		if (i > 0)
		{
			cout << "+ ";
		}
	}
	cout << endl;
	return ost;
}

