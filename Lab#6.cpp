//
//  Lab#6.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/30/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include <iostream>
#include "EaseOfAccesss.h"
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
using namespace std;


/*
 * Exercise 1
 *
 */
class Resource
{
private:
    int status;
    int writeTo;
public:
    Resource();
    Resource(int writeTo);
    int GetStatus();
    void SetStatus();
    int GetWriteTo();
    void SetWriteTo();
    void Outputf1(ostream &out_stream);
    void Outputf2(ostream &out_stream);
    friend bool Check_status(Resource &resl, Resource &res2);
};



// defining default constructor and non-default constructor
Resource::Resource()
{
    status = 0;
    writeTo = 0;
}

Resource::Resource(int i)
{
    writeTo = 1;
}

int main()
{
    cout << "Executing Exercise 1" << endl;
    ofstream out;
    out.open("//users//adish//Desktop//Output.txt", ios::app);
    Resource res1;
    Resource res2;
    
    cout << "The status for the private variable for status in the first resource object is currently: " << res1.GetStatus() << endl;
    cout << "The status for the private variable for status in the second resource object is currently: " << res1.GetStatus() << endl;
    cout << "Now we will set the new value of the two resource instances:" << endl;
    cout << "res1: ";
    res1.SetStatus();
    cout << "res2: ";
    res2.SetStatus();
    Check_status(res1, res2);
    res1.Outputf1(cout);
    res1.Outputf1(out);
    res2.Outputf2(cout);
    res2.Outputf2(out);
    out.close();
    return 0;
}


// defining other class functions as well as friend function
int Resource::GetStatus()
{
    return status;
}

int Resource::GetWriteTo()
{
    return writeTo;
}

void Resource::SetStatus() // set restrictions
{
    cout << " Set to 0 or 1" << endl;
    cin >> status;
}

void Resource::SetWriteTo() // set restrictions
{
    cout << "Set to 0 or 1" << endl;
    cin >> writeTo;
}

void Resource::Outputf1(ostream &out_stream)
{
    out_stream << "The current result of the first resource value  " << "status: " <<  status << endl;

}


void Resource::Outputf2(ostream &out_stream)
{
    out_stream << "The current result of the second resource values  " << "status: " <<  status << endl;
}


bool Check_status(Resource &res1, Resource &res2)
{
    if (res1.GetStatus() == 1 && res2.GetStatus() == 1) // comparing the status of the 'status' and writeTo private variables for similarities.
    {
        cout << " Resource Available" << endl;
        return true;
    }
    else
    {
        cout << " Resource Unavailable" << endl;
        return false;
    }
}