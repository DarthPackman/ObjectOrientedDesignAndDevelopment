#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>
#include "Date.h"
class Employee
{
public:
    Employee (const string &, const string &, const Date &, const Date &);
    void print() const;
    ~Employee();
private:
    std::string firstName;
    std::string lastName;
     Date hireDate;
     Date birthDate;
};

#endif // EMPLOYEE_H
