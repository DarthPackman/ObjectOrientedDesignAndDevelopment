//@: Define a new class as Date. In the Employee class, remove the two Time members, add attibutes of hireDate and birthDate.
//Modify and run the application to print the hireDate and birthDate for the employees.
//Make sure to check the VALIDITY of input date
#include <iostream>
#include "Time.h"
#include "Employee.h"
using namespace std;
int main()
{
    Date hireDate(10, 24, 2024);
    Date birthDate(06, 04, 1993);
    Employee manager("Gavin", "Edwards", hireDate, birthDate);
    cout << endl;
    manager.print();
 }


