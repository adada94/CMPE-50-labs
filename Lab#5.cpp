//
//  Lab#5.cpp
//  C++_Central
//
//  Created by Adish Betawar on 3/9/15.
//  Copyright (c) 2015 Adish Betawar. All rights reserved.
//


#include "EaseOfAccesss.h"
#include <fstream>
/*
    Excercise 2
 */


class CounterType
{
public:
    CounterType(); // default constructor
    CounterType(int i);
    void increment(void);
    void decrement(void);
    int get_Counter();
    void set_Counter(int i);
    void FileWrite(ofstream &write, int value);
private:
    int counter;
};

CounterType::CounterType()
{
    counter = 0;
}

CounterType::CounterType(int i)
{
    counter = i;
}

void CounterType::increment(void)
{
    counter++;
}

void CounterType::decrement(void)
{
    counter--;
    if (counter < 0)
    {
        cout << "Value of counter cannot be -1";
        counter = 0;
    }
}

int CounterType::get_Counter()
{
    return counter;
}

void CounterType::set_Counter(int i)
{
    counter = i;
}





void CounterType::FileWrite(ofstream &write, int value)
{
    write << "\n" << "The value for counter is now printed to the file. \n The value for counter is: ---------------> " << value;
}

int main()
{
    CounterType main(1);
    ofstream out;
    int option;
    int 
    cout << "Enter non-default value for the constructor: ";
    cin >> value;
    cout << "\n";
    while(1)
    {
        cout << "Choose an option to perform: " << "\n\t1. Access counter" << "\n\t2. Increment Counter" << "\n\t3. Decrement Counter" << "\n\t4. Write to File" << "\n\t5. Exit Program";
        cin >> option;
        if ( option == 1)
        {
            cout << "Value of counter accessed";
            cout << "\nThe intial value for counter is: " << value << "\n\n";
            continue;
        }
        else if(option == 2)
        {
            printf("\nValue Incremented\n");
            main.increment();
            cout << "\n The value of counter is now: " << value << "\n\n";
            continue;
        }
        else if(option == 3)
        {
            printf("\nValue Decremented\n");
            main.decrement();
            cout << "\n The value of counter is now: " << value << "\n\n";
            continue;
        }
        else if(option == 4)
        {
            printf("\nValue writtent to counter.txt\n");
            out.open("//users//adish//desktop//counter.txt", ios::app);
            out << "File updated: \n";
            main.FileWrite(out, value);
            out.close();
            continue;
        }
        else if(option == 5)
        {
            break;
        }
    }
}
