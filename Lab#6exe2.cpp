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
    friend Rational Add();
    friend Rational Substract();
    friend Rational Multiply();
    friend Rational Division();
    
};





int main()
{
    
}



// adds the fractions
Rational Add()
{
    
}


//substracts the fractions
Rational Substract()
{
    
}

// multiplies the fractions
Rational Multiply()
{
    
}



// divides the fraction
Rational Division()
{
    
}


