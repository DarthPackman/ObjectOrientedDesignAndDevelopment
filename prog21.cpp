#include <iostream>
using namespace std;
int getLength(char *);
void toUpper(char *);
void toLower(char *);
void toProper(char *);

int main()
{
    char name[80];

    cout << "Enter a name :";
    cin >> name;

    int r= getLength(name);

    cout << "The length of string is :" << r;
    toUpper(name);
    cout << "The string in Capital Letters is: " << name << endl;
    toLower(name);
    cout << "The string in Lowercase Letters is: " << name << endl;
    toProper(name);
    cout << "The string in Proper case is: " << name << endl;
}

void toUpper(char *p)
{
    while (*p)
    {
      *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        p++;
    }

}
int getLength(char *p)
{
    int ctr=0;
    while (*p)
    { cout << *p << " " ;
        ctr++;
        p++;
    }
    return ctr;
}

void toLower(char *p) {
// @:write code to convert to small cases
// Leverage the code in to upper and reverse it
    while (*p)
    {
      *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        p++;
    }

}

void toProper(char *p) {
// @:write code to convert to proper case i.e. firts capital and rest small
    while (*p)
    {
        // If statement to check if its the first one in the array
        if (p == 0)
        {
            //Sets first to capital
            *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        }
        else
        {
            *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        }
        p++;
    }
}


