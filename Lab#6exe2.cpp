//
//  Lab#6exe2.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/30/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include "EaseOfAccesss.h"
#include <fstream>
/*
 * Exercise 2
 *
 */

// class used for rational numbers
class Rational
{

private:

    int numerator;
    int denominator;

public:
    
    // default constructor
    Rational();
    
    // accessors
    int getNumerator();
    int getDenominator();
    
    // mutators
    void setNumerator();
    void setDenominator();

    // member functions]
    void Input(istream& in);
    void Output(ostream& out);
    // friend functions
    friend Rational Add(Rational &rash1, Rational& rash2);
    friend Rational Substract(Rational& rash1, Rational& rash2);
    friend Rational Multiply(Rational& rash1, Rational& rash2);
    friend Rational Division(Rational& rash1, Rational& rash2);
    friend bool equal(Rational& ras1, Rational& ras2);
    friend bool less_than(Rational& ras1, Rational& ras2);
};


// other functions
int gcd(int n1, int n2);


// insert main function

// adds the fractions
Rational Add(Rational& rash1, Rational& rash2)
{
    
}


//substracts the fractions
Rational Substract(Rational& rash1, Rational& rash2)
{
    
}

// multiplies the fractions
Rational Multiply(Rational& rash1, Rational& rash2)
{
    
}



// divides the fraction
Rational Division(Rational& rash1, Rational& rash2)
{
    
}

// other function definitions

int gcd(int n1, int n2)
{
    int temp;
    while (n2 != 0)
    {
        cout << "n2 = " << n2 << endl;
        temp = n1;
        n1 = n2;
        n2 = temp % n2;
    }
    return n1;
}
