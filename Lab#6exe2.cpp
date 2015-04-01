//
//  Lab#6exe2.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/30/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h> // for changing the directory of files
#include "Persona.h"
using namespace std;

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
    Rational(int num, int den);
    
    // member functions]
    void Input(istream& in);
    void Output(ostream& out);
    // friend functions
    friend Rational Add(Rational &rash1, Rational& rash2);
    friend Rational Substract(Rational& rash1, Rational& rash2);
    friend Rational Multiply(Rational& rash1, Rational& rash2);
    friend Rational Division(Rational& rash1, Rational& rash2);
    friend bool Equal(Rational& ras1, Rational& ras2);
    friend bool Less_than(Rational& ras1, Rational& ras2);
};





// defining default constructor
Rational::Rational(int num, int den)
{
    numerator = 0;
    denominator = 1;
}


// other functions
int gcd(int n1, int n2); // find greatest common denominator


int main()
{
    cout << "Excercise 2\n\n";
    Rational rash1(0,1);
    Rational rash2(0,1);
    rash1.Input(cin);
    rash1.Output(cout);
    rash2.Input(cin);
    rash2.Output(cout);
    int option;
    while(1)
    {
        cout << "select option: \n" << "1. Add\t\t 2. Substract\t\t 3. Multiply\t\t 4. Divide\t\t 5. End Program" << endl;
        cin >> option;
        if (option == 1)
        {
            Add(rash1, rash2);
            continue;
        }
        if (option == 2)
        {
            Substract(rash1, rash2);
            continue;
        }
        if (option == 3)
        {
            Multiply(rash1, rash2);
            continue;
        }
        if(option == 5)
        {
            break;
        }
    }
    
    return 1;
}



// member function definitions
void Rational::Input(istream& in)
{
    cout << "Enter number for numerator" << endl;
    in >> numerator;
    cout << "Enter number for denominator. Note that the denominator can never be 0" << endl;
    while (1)
    {
        in >> denominator;
        // fraction denominator can never be 0
        if (denominator == 0)
        {
            cout << "Denominator cannot be 0\n\tTry Again" << endl;
            continue;
        }
        else
        {
            break;
        }
    }
//    cout << "Numerator: " << numerator << "\nDenominator: " << denominator << endl;
}
void Rational::Output(ostream& out)
{
    out << numerator << "/" << denominator << endl;
}




bool Equal(Rational& ras1, Rational& ras2)
{
    int ratio;
    ratio = ras1.denominator / ras2.denominator;
    Rational temp(ras2.numerator * ratio,ras2.denominator * ratio);
    if ((ras1.denominator == temp.denominator) && (ras1.numerator == temp.numerator))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


// friend function definitions

// adds the fractions
Rational Add(Rational& rash1, Rational& rash2)
{
    int combinedNum1 = rash1.numerator * rash2.denominator;
    int combinedNum2 = rash2.numerator * rash1.denominator;
    Rational temp(combinedNum1 + combinedNum2, rash1.denominator * rash2.denominator);
    cout << &temp;
    return temp;
}


// substracts the fractions
Rational Substract(Rational& rash1, Rational& rash2)
{
    int combinedNum1 = rash1.numerator * rash2.denominator;
    int combinedNum2 = rash2.numerator * rash1.denominator;
    Rational temp(combinedNum1 - combinedNum2, rash1.denominator * rash2.denominator);
    cout << &temp;
    return temp;
}

// multiplies the fractions
Rational Multiply(Rational& rash1, Rational& rash2)
{
    Rational result(rash1.numerator * rash2.numerator, rash1.denominator * rash2.denominator);
    cout << &result;
    return result;
}



// divides the fraction
Rational Division(Rational& rash1, Rational& rash2)
{
    // (a * d) '/' (b * c)
    Rational result(rash1.numerator * rash2.denominator,1);
    cout << &result;
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

