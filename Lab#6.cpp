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
    int getStatus();
    void setStatus(int i);
    int getWriteTo();
    void setWriteTo(int i);
    void Output(ostream &out_stream);
    friend bool check_status(Resource &resl, Resource &res2);
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

int Resource::getStatus()
{
    return status;
}

int Resource::getWriteTo()
{
    return writeTo;
}

void Resource::setStatus(int i)
{
    status = i;
}

void Resource::setWriteTo(int i)
{
    writeTo = i;
}

void Output(ostream &out_stream)
{
    cout << "The current resulting status of the two variables are " << "status: " << status << "writeTO: "
}
