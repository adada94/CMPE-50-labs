//
//  Lab#7.cpp
//  C++_Central
//
//  Created by Adish Betawar on 4/6/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <stdio.h>
#include "Persona.h"
#include "Helper.h"



typedef char* Char_ptr;

// function declarations
void PrintSeatingArrangement(Char_ptr *seats, int rowSize, int numberOfSeatsPerRow);

int main()
{
    cout << "Excercise 1\n";
    cout << "Welcome to BlueWing Airways" << endl;
    MakeSpace(2);
    
    ifstream input;
    input.open("//users//adish//desktop//input.txt");
    //
    int rowSize;
    cout << "How many rows are in the plane?\n"; // defining number of rows
    input >> rowSize;
    const int seatsInEachRow = 4;
    cout << "There are " << rowSize << " rows and " << seatsInEachRow << " seats in each row on this flight\n";
    //
    
    // getting input for number of seats in an airplane using dynamic array
    Char_ptr *seats = new Char_ptr[rowSize]; // dynamcally allocating memory for rows
    //
    // allocating memory for each row
    for (int i = 0; i < rowSize; i++)
    {
        seats[i] = new char[seatsInEachRow]; // number of seats for each row
    }
    //
    cout << "Today's seating arrangement" << endl;
    printLine(25, '-');
    //
    // filling up the initial seating arrangemnts
    for (int i = 0; i < rowSize; i++) // rows seating
    {
        for (int j = 0; j < 4; j++) // columns seating
        {
            seats[i][j] = 65 + j; // converting the ASCII character to get characters 'A' 'B'.... etc.
        }
    }
    PrintSeatingArrangement(seats, rowSize, seatsInEachRow);
    // begin asking for seat numbers and assign them accordingly
    

    int option;
    cout << "\n\nWould you like to enter the information from the keyboard or from another file?\n";
    cout << "\t\t\t1. keyboard \t\t\t2. file\n";
    cin >> option;
    int seats_Available;
    if (option == 1) // option for getting user from keyboard
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
//    else if (option == 2) // file IO. getting input from file
//    {
//        chdir("//users//adish//desktop"); // we change the default directory to the desktop
//        string filename;
//        cout << "What is name of the file that contains the seating arrangement?" << endl;
//        cin >> filename;
//        input.open(filename);
//        if (input.fail())
//        {
//            cout << "File does not exist";
//        }
//        input.close();
//    }
    for (int i = 0; i < rowSize; i++)
    {
        delete seats[i]; // deleting memory for each row
    }

    delete[] seats; // deleting pointers to all rows

}




void PrintSeatingArrangement(Char_ptr *seats, int rowSize, int numberOfSeatsPerRow)
{
    for (int i = 0; i < rowSize; i++) // rows seating
    {
        for (int j = 0; j < numberOfSeatsPerRow; j++) // columns seating
        {
            cout << seats[i][j] << " "; // outputting the seats in this order
        }
        cout << "\n";
    }
}