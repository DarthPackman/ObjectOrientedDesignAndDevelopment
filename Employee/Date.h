// Fig. 9.1: Date.h
// Date class definition.
// Member functions are defined in Date.cpp
#include <iostream>
// prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H

// Date class definition
class Date
{
    //Declare the public functions
public:
    Date(); //Default Constructor
    Date(int, int, int); //Parameter Constructor
    void setDate(int, int, int); //Set the Date
    void print() const; //Print the Date
    ~Date(); //Destructor

    //Declare the private variables
private:
    int month; // 1 - 12
    int day; // 1 - 31 (depending on month)
    int year; // any year
};
#endif