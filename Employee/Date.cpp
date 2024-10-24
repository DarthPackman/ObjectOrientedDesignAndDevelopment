#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

//Create a Defualt Date Constructor
Date::Date()
    : month(0), day(0), year(0)
{
    cout << "This is the default constructor of Date!!\n";
}

//Create a Paramater Date Constructor
Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
    cout << "This is the parameter constructor of Date!!\n";
}

//Create a Destructor for Date
Date::~Date()
{
    cout << "One object of Date has been deconstructed !!\n";
}

//Set the Date
void Date::setDate(int m, int d, int y)
{
    // validate month, day and year
    if ( ( m >= 1 && m <= 12 ) && ( d >= 1 && d <= 31 ) &&
       ( y >= 1900 && y <= 2100 ) )
    {
       month = m;
       day = d;
       year = y;
    }
    else
       cout <<  "month, day and/or year was out of range\n" ;
}

//Print the Date in the format MM/DD/YYYY
void Date::print() const
{
    cout << setfill( '0' ) << setw( 2 ) << month << "/"
       << setw( 2 ) << day << "/" << setw( 4 ) << year << endl;
}