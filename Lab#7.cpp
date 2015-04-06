//
//  Lab#7.cpp
//  C++_Central
//
//  Created by Adish Betawar on 4/6/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <stdio.h>
#include "EaseOfAccesss.h"
#include "Persona.h"
int main()
{
    ifstream input;
    input.open("//users//adish//desktop//input.txt");
    // defining dynamic array
    int rowSize;
//    char *colA;
//    char *colB;
//    char *colC;
//    char *colD;


//    cout << "How many passengers are in a row on this airline?" << endl;
    input >> rowSize;

    // getting input for number of seats in an airplane
    char **seats;

    seats = new char*[rowSize];
    
//    colA = new char[rowSize];
//    colB = new char[rowSize];
//    colC = new char[rowSize];
//    colD = new char[rowSize];

    // acquiring info from file to put into array for seats
    for (int i = 0; i < rowSize; i++)
    {
        seats[i] = new char[4];
    }
    input.close();
    

    //outputting the seating arrangement
    for (int i = 0; i < rowSize; i++) // rows seating
    {
        for (int j = 0; j < rowSize; j++) // columns seating
        {
            seats[i][j] = 65 + j; // converting the ASCII character to get characters 'A' 'B'.... etc.
            cout << seats[i][j] << " "; // outputting the seats in this order

        }
        cout << "\n";
    }
    
}




