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
#include <unistd.h>
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
    friend Rational Divide(Rational& rash1, Rational& rash2);
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

// this function will factor out the common numbers present in the fraction and will return the simplest form of the rational number
void reduce(int &numerator,int &denominator); // acquired from outside source

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
        MakeSpace(3);
        cout << "select option: \n" << "1. Add\t\t 2. Substract\t\t 3. Multiply\t\t 4. Divide\t\t 5. End Program" << endl;
        cin >> option;
        if (option == 1)
        {
            rash1.Output(cout); cout << " + "; rash2.Output(cout);
            Add(rash1, rash2);
            continue;
        }
        if (option == 2)
        {
            rash1.Output(cout); cout << " - "; rash2.Output(cout);
            Substract(rash1, rash2);
            continue;
        }
        if (option == 3)
        {
            rash1.Output(cout); cout << " * "; rash2.Output(cout);
            Multiply(rash1, rash2);
            continue;
        }
        if (option == 4)
        {
            rash1.Output(cout); cout << " / "; rash2.Output(cout);
            Divide(rash1, rash2);
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
    cout << "Enter number for numerator:" << endl;
    in >> numerator;
    cout << "Enter number for denominator:" << endl;
    while (1)
    {
        in >> denominator;
        // fraction denominator can never be 0
        if (denominator == 0)
        {
            cout << "Denominator cannot be 0: \tTry Again" << endl;
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
    out << numerator << "/" << denominator;
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
    Rational sum(combinedNum1 + combinedNum2, rash1.denominator * rash2.denominator);
    sum.Output(cout);
    return sum;
}


// substracts the fractions
Rational Substract(Rational& rash1, Rational& rash2)
{
    int combinedNum1 = rash1.numerator * rash2.denominator;
    int combinedNum2 = rash2.numerator * rash1.denominator;
    Rational difference(combinedNum1 - combinedNum2, rash1.denominator * rash2.denominator);
    difference.Output(cout);
    return difference;
}

// multiplies the fractions
Rational Multiply(Rational& rash1, Rational& rash2)
{
    Rational product(rash1.numerator * rash2.numerator, rash1.denominator * rash2.denominator);
        product.Output(cout);
    return product;
}



// divides the fractions
Rational Divide(Rational& rash1, Rational& rash2)
{
    /* thought process for fraction division
     (a * d) '/' (b * c)
    
    1/3 / 2/3
     *     =    1/3 * 3/2
     *     =    1/2
                    RUDIMENTARY PROCEDURE
     */
    Rational quotient(rash1.numerator * rash2.denominator, rash1.denominator * rash2.denominator);
        quotient.Output(cout);
    return quotient;
    
}

// other function definitions
int gcd(int n1, int n2) // greatest common denominator
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

// this function will factor out the common numbers present in the fraction and will return the simplest form of the rational number
void reduce(int &numerator,int &denominator) // acquired from outside source
{
    int rdc = 0;
    if(denominator>numerator)
        rdc = gcd(denominator,numerator);
    else if(denominator<numerator)
        rdc = gcd(numerator,denominator);
    else
        rdc = gcd(numerator, denominator);
    numerator /= rdc;
    denominator /= rdc;
    cout<<"\nAfter operating the rational numbers are: "<< numerator << "/" << denominator <<endl;
}