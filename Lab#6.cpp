//
//  Lab#6.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/30/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//

#include "EaseOfAccesss.h"
class Resource
{
private:
    int status;
    int writeTo;
public:
    Resource();
    Resource(int writeTo);
    int GetStatus();
    void SetStatus(int i);
    int GetWriteTo();
    void SetWriteTo(int i);
    void Output(ostream &out_stream);
    friend bool Check_status(Resource &resl, Resource &res2);
};



// defining default constructor
Resource::Resource()
{
    status = 0;
    writeTo = 0;
}

int main()
{
    Resource resource1;
    Resource resource2;
    return 0;
}


// defining other class functions

Resource::Resource(int i)
{
    writeTo = 1;
}

int Resource::GetStatus()
{
    return status;
}

int Resource::GetWriteTo()
{
    return writeTo;
}

void Resource::SetStatus(int i)
{
    status = i;
}

void Resource::SetWriteTo(int i)
{
    writeTo = i;
}

void Resource::Output(ostream &out_stream)
{
    cout << "The current resulting status of the two variables are " << "status: " <<  status << "writeTO: " << writeTo;
}

bool Resource::Check_status(Resource &resl, Resource &res2)
{
    
}