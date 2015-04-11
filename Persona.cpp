//
//  Persona.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/30/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include "Persona.h"
#include "EaseOfAccesss.h"

// makes space in the conole window
void MakeSpace(int space)
{
    for (int i = 0; i < space; i++)
    {
        cout << "\n";
    }
}

// prints a line with your favorite character
void printLine(int times, char symbol)
{
    for (int i = 0; i < times; i++)
    {
        cout << symbol;
        if (i == times)
        {
            cout << symbol << endl;
        }
    }
    cout << "\n";
}

// swap function using a temp variable
void Swapv1(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
}

// swap function without using a temp variable
void Swapv2(int& a, int& b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
