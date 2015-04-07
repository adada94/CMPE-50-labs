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
#include "Helper.h"
int main()
{
    ifstream input;
    input.open("//users//adish//desktop//input.txt");
    // defining dynamic array
    int rowSize;


//    cout << "How many passengers are in a row on this airline?" << endl;
    input >> rowSize;

    // getting input for number of seats in an airplane
    char **seats;

    seats = new char*[rowSize];
    
    // acquiring info from file to put into array for seats
    for (int i = 0; i < rowSize; i++)
    {
        seats[i] = new char[4];
    }
    input.close();
    

    //outputting the seating arrangement
    for (int i = 0; i < rowSize; i++) // rows seating
    {
        for (int j = 0; j < 4; j++) // columns seating
        {
            seats[i][j] = 65 + j; // converting the ASCII character to get characters 'A' 'B'.... etc.
            cout << seats[i][j] << " "; // outputting the seats in this order

        }
        cout << "\n";
    }
    
    // begin asking for seat numbers and assign them accordingly
    

    int option;
    cout << "\n\nWould you like to enter the information from the keyboard or from another file?\n";
    cout << "\t\t\t1. keyboard \t\t\t2. file\n";
    cin >> option;
    int seats_Available;
    if (option == 1) // keyboard
    {
        int row = 0;
        char column = 'A';
        cout << "You have chosen to provide info with keyboard" << endl;
        cout << "What row number would you like on this airline?\n Choose between 1 <--> 7" << endl;
        cout << "Seats available: " << seats_Available << endl;
        cin >> row;
        if (row > 7)
        {
            cout << "This row does not exist";
        }
        cout << "What row number would you like on this airline?\n Choose between A <--> D" << endl;
        cin >> column;
        if (column != 'A')
        {
            cout << "This column does not exist" << endl;
        }
        
    }
    else if (option == 2) // file IO
    {
        chdir("//users//adish//desktop");
        string filename;
        cout << "What is name of the file that contains the seating arrangement?" << endl;
        cin >> filename;
        input.open(filename);
        if (input.fail())
        {
            cout << "File does not exist";
        }
        input.close();
    }

}