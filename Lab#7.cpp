//
//  Lab#7.cpp
//  C++_Central
//
//  Created by Adish Betawar on 4/6/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <stdio.h>
#include "EaseOfAccesss.h"

int main()
{
    // defining dynamic array
    int rowSize;
//    char *colA;
//    char *colB;
//    char *colC;
//    char *colD;

    
    // getting input for number of seats in an airplane
    char **seats;
    
    cout << "How many passengers are in a row on this airline?" << endl;
    cin >> rowSize;
    seats = new char*[rowSize];
    
//    colA = new char[rowSize];
//    colB = new char[rowSize];
//    colC = new char[rowSize];
//    colD = new char[rowSize];

    for (int i = 0; i < rowSize; i++)
    {
        seats = new char*[4];
    }
    
    
}