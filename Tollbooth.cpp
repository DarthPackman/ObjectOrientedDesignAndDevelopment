#include <iostream>
using namespace std;
/*Imagine a tollbooth at a bridge where cars passing by are required to pay a 50-cent toll.
Although most cars comply, some do not. The tollbooth needs to keep track of
the number of cars that pass by and the total amount of money collected.

To model this tollbooth, we create a class named tollBooth with two data members:
an unsigned integer to store the total number of cars
a double to hold the total amount of money collected.

The class includes three member functions:
payingCar(): Increments the car total by one and adds 0.50 to the cash total for each paying car.
nopayCar(): Increments the car total by one for each non-paying car.
display(): Displays the two totals, the total number of cars, and the total amount of money collected.


Write the program which allows users to interact with the tollBooth class.
Users can press 'P' to count a paying car, 'N' to count a non-paying car,
or 'E' to exit the loop and display the total number of cars and total cash collected.
*/

//Create A Tollbooth Class
class Tollbooth
{
    public:
        Tollbooth()
        {

        }

        void payingCar()
        {
            cars++;
            money += 0.5;
        }

        void noPayCar()
        {
            cars++;
        }

        void display()
        {
            cout << "There have been " << cars << "." << "And we have gotten $" << money << "." << endl;
        }

    private:
        unsigned cars;
        double money;
};


int main()
{
    bool cont = true;
    while(cont)
    {
        Tollbooth toll;
        char c;
        cout << "Please type P for Paying Car, type N for Non-Paying Car, or E to Exit and diplay the totals." <<endl;
        cin >> c;
        switch (c)
        {
            case 'P':
                toll.payingCar();
                break;
            case 'N':
                toll.noPayCar();
                break;
            case 'E':
                toll.display();
                c = false;
                break;
        }
    }
}
