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
    void Output(ostream &out_stream);
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
    ofstream out;
    out.open("//users//adish//Desktop//Output.txt");
    Resource res1;
    Resource res2;
    cout << "The status for the private variable for resource is status is: " << res1.GetStatus() << endl;
    cout << "Now we will set the new value of resource";
    Check_status(res1, res2);
    res1.Output(cout);
    res1.Output(out);
    res2.Output(cout);
    res2.Output(out);
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

void Resource::Output(ostream &out_stream)
{
    cout << "The current resulting status of the two variables are " << "status: " <<  status << "writeTO: " << writeTo << endl;
}

bool Check_status(Resource &res1, Resource &res2)
{
    if (res1.GetStatus() == 1 && res2.GetStatus() == 1) // comparing the status of the 'status' and writeTo private variables for similarities.
    {
        cout << "Resource available" << endl;
        return true;
    }
    else
    {
        cout << "Resource unavailable" << endl;
        return false;
    }
}