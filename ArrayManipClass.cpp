#include <iostream>
// Define LIMIT as 10
#define LIMIT 10

// create SafeArray class with LIMIT as the size of the array
class SafeArray {
    int arr[LIMIT];
public:
    // Create the putel() function, takes index and int and stores the int value into the array at the index
    void putel(int index, int value) 
    {
        if (index >= 0 && index < LIMIT) 
        {
            arr[index] = value;
        } 
        else 
        {
            std::cout << "Index out of bounds" << std::endl;
        }
    }

    // Create the getel() function, takes index and returns the int value of the element with that index
    int getel(int index) {
        if (index >= 0 && index < LIMIT) 
        {
            return arr[index];
        } 
        else 
        {
            std::cout << "Index out of bounds" << std::endl;
            return -1;
        }
    }
};

int main() {
    SafeArray sa;
    int temp = 12345; // define an int value
    sa.putel(7, temp); // store value of temp into array at index 7
    temp = sa.getel(7); // obtain value from array at index 7

    // Retrieve and print values from the array
    std::cout << "Element at index 0: " << sa.getel(0) << std::endl;
    std::cout << "Element at index 7: " << sa.getel(7) << std::endl;

    temp = sa.getel(LIMIT);// test out of boundary
    return 0;
}
