//
//  Helper.cpp
//  C++_Central
//
//  Created by Adish Betawar on 4/6/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include "Helper.h"
void makeMenu()
{
    ifstream input;
    int option;
    cout << "\n\nWould you like to enter the information from the keyboard or from another file?\n";
    cout << "\t\t\t1. keyboard \t\t\t2. file";
    cin >> option;
    
    if (option == 1)
    {
        cout << "You have chosen to provide info with keyboard";
    }
    else if (option == 2)
    {
        chdir("//users//adish//desktop");
        string filename;
        cout << "You have chosen to provide info with a file. What is name of the file that contains the seating arrangement?" << endl;
        cin >> filename;
        input.open(filename);
        if (input.fail())
        {
            cout << "File does not exist";
        }
        input.close();
    }
}