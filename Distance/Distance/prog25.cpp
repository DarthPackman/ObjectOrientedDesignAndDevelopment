#include "Distance.h"
#include <iostream>
#include <conio.h>
using namespace std;

Distance operator + (Distance &ob1, Distance &ob2)
{
    Distance temp;
    temp.feet   = ob1.feet   + ob2.feet;
    temp.inches = ob1.inches + ob2.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12;
        temp.feet++;
    }
    return temp;
}

Distance operator - (Distance &ob1, Distance &ob2)
{
    Distance temp;
    temp.feet   = ob1.feet   - ob2.feet;
    temp.inches = ob1.inches - ob2.inches;
    if(temp.inches < 0)
    {
        temp.inches += 12;
        temp.feet--;
    }
    return temp;
}

Distance operator * (int d, Distance &ob)
{
    Distance temp;
    int totalInches = (ob.feet * 12 + ob.inches) * d;
    temp.feet = totalInches / 12;
    temp.inches = totalInches % 12;
    return temp;
}

int operator == (Distance &ob1, Distance &ob2)
{
    return (ob1.feet == ob2.feet && ob1.inches == ob2.inches);
}

int operator < (Distance &ob1, Distance &ob2)
{
    int totalInches1 = ob1.feet * 12 + ob1.inches;
    int totalInches2 = ob2.feet * 12 + ob2.inches;
    return (totalInches1 < totalInches2);
}

int operator > (Distance &ob1, Distance &ob2)
{
    int totalInches1 = ob1.feet * 12 + ob1.inches;
    int totalInches2 = ob2.feet * 12 + ob2.inches;
    return (totalInches1 > totalInches2);
}

int main()
{
    Distance ob1;
    Distance ob2;
    Distance ob3;

    cout << "\n=====Enter Data for OBJECT1=====\n";
    ob1.getdata();
    cout << "\n\n=====Enter Data for OBJECT2=====\n";
    ob2.getdata();

    int opt = 0;
    int choice = 1, data;
    while(choice != 0)
    {
        opt = 0;

        cout << "\nChoose your choice\n";
        cout << "1)  Addition            ( + )\n";
        cout << "2)  Subtraction         ( - )\n";
        cout << "3)  Multiplication      ( * )\n";
        cout << "4)  Comparison          ( == )\n";
        cout << "5)  Comparison          ( < )\n";
        cout << "6)  Comparison          ( > )\n";
        cout << "0)  Quit                \n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl << endl;
        switch(choice)
        {
            case 1 :
                ob3 = ob1 + ob2;
                opt = 1;
                break;
            case 2 :
                ob3 = ob1 - ob2;
                opt = 1;
                break;
            case 3 :
                cout << "\nEnter integer to be multiplied: ";
                cin >> data;
                ob3 = data * ob1;
                opt = 1;
                break;
            case 4 :
                if(ob1 == ob2)
                {
                    cout << "\nBoth Objects are equal.\n";
                }
                else
                {
                    cout << "\nThey are Unequal.\n";
                }
                getch();
                break;
            case 5 :
                if(ob1 < ob2)
                {
                    cout << "\nObject1 is less than Object2\n";
                }
                else
                {
                    cout << "\nObject2 is less than Object1\n";
                }
                getch();
                break;
            case 6 :
                if(ob1 > ob2)
                {
                    cout << "\nObject1 is greater than Object2\n";
                }
                else
                {
                    cout << "\nObject2 is greater than Object1\n";
                }
                getch();
                break;
            case 0:
                cout << "\n\nHave a nice day...\n";
                getch();
                break;
            default :
                cout << "Invalid option ";
        }
        if (opt == 1)
        {
            cout << "\n\nResult in OBJECT3 as follows:\n";
            ob3.display();
            getch();
        }
    }
    return 1;
}
