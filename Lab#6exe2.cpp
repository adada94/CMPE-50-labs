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





// defining default constructor

// other functions
int gcd(int n1, int n2); // find greatest common denominator


int main()
{
    Rational rash;
    rash.Input(cin);
}



// member function definitions
void Rational::Input(istream& in)
{
    cout << "Enter number for numerator" << endl;
    in >> numerator;
    cout << "\nEnter number for denominator. Note that the denominator can never be 0" << endl;
    while (1)
    {
        in >> denominator;
        // fraction denominator can never be 0
        if (denominator == 0)
        {
            cout << "Denominator cannot be 0.\n\tTry Again" << endl;
            continue;
        }
        else
        {
            break;
        }
    }
    cout << "Numerator: " << numerator << "\nDenominator: " << denominator;
}

// friend function definitions


// adds the fractions
Rational Add(Rational& rash1, Rational& rash2)
{
    Rational result;
    
    return result;
}


//substracts the fractions
Rational Substract(Rational& rash1, Rational& rash2)
{
    Rational result;
    
    return result;
}

// multiplies the fractions
Rational Multiply(Rational& rash1, Rational& rash2)
{
    Rational result;
    
    return result;
}



// divides the fraction
Rational Division(Rational& rash1, Rational& rash2)
{
    Rational result;
    
    return result;
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

