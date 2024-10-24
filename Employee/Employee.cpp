#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;
// constructor uses member initializer list to pass initializer
// values to constructors of member objects
Employee::Employee( const string &first, const string &last,
   const Date &hireDate, const Date &birthDate )
   : firstName( first ), // initialize firstName
     lastName( last ), // initialize lastName
    hireDate ( hireDate ), // initialize inTime
    birthDate( birthDate ) // initialize outTime
{
   // output Employee object to show when constructor is called
   cout << "Employee object constructor: "
      << firstName << ' ' << lastName << endl;
} // end Employee constructor

// print Employee object
void Employee::print() const
{
   cout << lastName << ", " << firstName << endl << "  Was hired on: ";
   hireDate.print();
   cout << "  Was born on: ";
   birthDate.print();
   cout << endl;
}

// output Employee object to show when its destructor is called
Employee::~Employee()
{
   cout << "Employee object destructor: "
      << lastName << ", " << firstName << endl;
}

